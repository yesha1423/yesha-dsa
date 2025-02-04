#include <iostream>
using namespace std;

int main() {
    float unit, totalBill;
    cout << "Enter your unit of electricity: ";
    cin >> unit;

//	 0–100 units: Rs 3.00 per unit
//	 Above 1000 units: Rs 9.00 per unit
//	 101–200 units: Rs 4.50 per unit
//	 201–300 units: Rs 6.00 per unit
//	 301–500 units: Rs 7.50 per unit
//	 501–1000 units: Rs 8.20 per unit

    if (unit <= 100) {
        totalBill = unit * 3.00;
    } else if (unit <= 200) {
        totalBill = unit * 4.50;
    } else if (unit <= 300) {
        totalBill = unit * 6.00;
    } else if (unit <= 500) {
        totalBill = unit * 7.50;
    } else if (unit <= 1000) {
        totalBill = unit * 8.20;
    } else {
        totalBill = unit * 9.00;
    }

    cout << "Your electricity bill is Rs " << totalBill;
    return 0;
}
