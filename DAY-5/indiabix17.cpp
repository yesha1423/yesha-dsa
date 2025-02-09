#include <iostream>
using namespace std;

//Look at this series: 2, 6, 18, 54, ... What number should come next?

int main() {
    int x = 54;
    int y = 3;
    int nextTerm = x * y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
