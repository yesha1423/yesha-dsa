#include <iostream>
using namespace std;

//Look at this series: 14, 28, 20, 40, 32, 64, ... What number should come next?

int main() {
    int x = 64;
    int y = 8;
    int nextTerm = x - y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
