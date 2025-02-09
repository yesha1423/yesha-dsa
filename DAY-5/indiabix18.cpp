#include <iostream>
using namespace std;


//Look at this series: 5.2, 4.8, 4.4, 4, ... What number should come next?

int main() {
    double x = 4.0;
    double y = 0.4;
    double nextTerm = x - y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
