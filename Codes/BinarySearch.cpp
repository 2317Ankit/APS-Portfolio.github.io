#include <iostream>
#include <vector>

using namespace std;

// Binary Search function
int binarySearch(const vector<int>& products, int target) {
    int left = 0;
    int right = products.size() - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (products[mid] == target)
            return mid;
        else if (products[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> products = {10, 20, 30, 40, 50, 60, 70};
    int target = 40;
    int result = binarySearch(products, target);
    if (result != -1)
        cout << "Product found at index: " << result << endl;
    else
        cout << "Product not found" << endl;
    return 0;
}
