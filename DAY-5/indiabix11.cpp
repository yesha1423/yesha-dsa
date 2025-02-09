#include <iostream>
using namespace std;

//Look at this series: 1.5, 2.3, 3.1, 3.9, ... What number should come next?

int main() {
    double x = 3.9;
    double y = 0.8;
    double nextTerm = x + y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
