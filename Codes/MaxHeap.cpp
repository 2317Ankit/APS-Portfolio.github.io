#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void orderProcessing(vector<pair<int, int>>& orders) {
    // Max heap
    priority_queue<pair<int, int>> pq;

    for (auto& order : orders) 
    {
        pq.push({order.second, order.first}); // {delivery_time, order_id}
    }

    while (!pq.empty()) 
    {
        auto order = pq.top();
        pq.pop();
        cout << "Processing order ID " << order.second << " with delivery time " << order.first << endl;
    }
}

int main() {
    vector<pair<int, int>> orders = {
        {3, 101},   // delivery_time = 3, order_id = 101
        {1, 102},   // delivery_time = 1, order_id = 102
        {2, 103},   // delivery_time = 2, order_id = 103
        {4, 104},   // delivery_time = 4, order_id = 104
        {2, 105}    // delivery_time = 2, order_id = 105
    };

    // Process orders based on priority queue (heap)
    orderProcessing(orders);
    return 0;
}
