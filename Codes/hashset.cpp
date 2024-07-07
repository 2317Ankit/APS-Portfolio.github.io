#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

class CouponValidator {
private:
    unordered_set<string> couponSet;

public:
    void addCoupon(const string& couponCode) 
    {
        couponSet.insert(couponCode);
    }

    bool isValidCoupon(const string& couponCode) 
    {
        return couponSet.find(couponCode) != couponSet.end();
    }
};

int main() {
    CouponValidator validator;

    validator.addCoupon("SUMMER2024");
    validator.addCoupon("SAVE20");
    validator.addCoupon("WELCOME10");

    string coupon1 = "SUMMER2024";
    string coupon2 = "SAVE50";

    cout << "Coupon code " << coupon1 << " is " << (validator.isValidCoupon(coupon1) ? "valid" : "invalid") << endl;
    cout << "Coupon code " << coupon2 << " is " << (validator.isValidCoupon(coupon2) ? "valid" : "invalid") << endl;

    return 0;
}
