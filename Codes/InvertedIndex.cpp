#include <iostream>
#include <vector>
#include <unordered_map>
#include <bitset>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 100;

class InvertedIndex {
public:
    unordered_map<string, bitset<MAX_PRODUCTS>> index;

    void addProduct(const string& filter, int productId) {
        index[filter].set(productId);
    }

    bitset<MAX_PRODUCTS> getBitmap(const string& filter) {
        return index[filter];
    }
};

class FlipkartSearch {
public:
    InvertedIndex invertedIndex;

    void addProduct(const string& brand, const string& priceRange, int productId) {
        invertedIndex.addProduct("brand:" + brand, productId);
        invertedIndex.addProduct("price:" + priceRange, productId);
    }

    vector<int> filterSearch(const vector<string>& filters) {
        bitset<MAX_PRODUCTS> result;
        result.set();

        for (const auto& filter : filters) {
            result &= invertedIndex.getBitmap(filter);
        }

        vector<int> productIds;
        for (int i = 0; i < MAX_PRODUCTS; ++i) {
            if (result[i]) {
                productIds.push_back(i);
            }
        }

        return productIds;
    }
};

int main() {
    FlipkartSearch searchSystem;

    searchSystem.addProduct("Samsung", "10000-20000", 0);
    searchSystem.addProduct("Samsung", "20000-30000", 1);
    searchSystem.addProduct("Apple", "30000-40000", 2);
    searchSystem.addProduct("OnePlus", "20000-30000", 3);

    vector<string> filters = {"brand:Samsung", "price:10000-20000"};

    vector<int> result = searchSystem.filterSearch(filters);

    cout << "Filtered Product IDs: ";
    for (int productId : result) {
        cout << productId << " ";
    }
    cout << endl;

    return 0;
}
