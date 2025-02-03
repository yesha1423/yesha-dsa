#include <iostream>
using namespace std;

int main() {
    float amount, discount = 0.0, finalAmount;

    cout << "Enter the total amount: ";
    cin >> amount;

    if (amount > 150) {
        discount = amount * 0.10;  
    } 
    else if (amount > 100) {
        discount = amount * 0.05; 
    } 
    else {
        discount = 0;  
    }

    finalAmount = amount - discount;

    cout << "Original Amount: " << amount << " Rs" << endl;
    cout << "Discount: " << discount << " Rs" << endl;
    cout << "Final Amount after Discount: " << finalAmount << " Rs" << endl;

    return 0;
}
