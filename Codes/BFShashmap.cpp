#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
#include <vector>

using namespace std;

enum class OrderStatus {
    Ordered,
    Shipped,
    OutForDelivery,
    Delivered
};

unordered_map<int, OrderStatus> orderStatusMap;

void trackOrderStatus(int orderId) {
    queue<int> q;
    q.push(orderId);

    while (!q.empty()) {
        int currentOrder = q.front();
        q.pop();

        OrderStatus currentStatus = orderStatusMap[currentOrder];

        switch (currentStatus) {
            case OrderStatus::Ordered:
                cout << "Order " << currentOrder << " is ordered." << endl;
                orderStatusMap[currentOrder] = OrderStatus::Shipped;
                q.push(currentOrder); // Enqueue for the next status
                break;
            case OrderStatus::Shipped:
                cout << "Order " << currentOrder << " is shipped." << endl;
                orderStatusMap[currentOrder] = OrderStatus::OutForDelivery;
                q.push(currentOrder); // Enqueue for the next status
                break;
            case OrderStatus::OutForDelivery:
                cout << "Order " << currentOrder << " is out for delivery." << endl;
                orderStatusMap[currentOrder] = OrderStatus::Delivered;
                q.push(currentOrder); // Enqueue for the next status
                break;
            case OrderStatus::Delivered:
                cout << "Order " << currentOrder << " is delivered." << endl;
                break;
        }
    }
}

int main() {
    orderStatusMap[101] = OrderStatus::Ordered;
    orderStatusMap[102] = OrderStatus::Ordered;
    trackOrderStatus(101);
    trackOrderStatus(102);
    return 0;
}
