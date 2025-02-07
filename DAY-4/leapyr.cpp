#include <iostream>

int main() {
    int year = 2000, end = 3000;
    while (year <= end) {
        if (year % 4 == 0) {
            std::cout << year << " ";
        }
        year++;
    }
    return 0;
}
