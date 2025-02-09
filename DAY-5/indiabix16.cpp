#include <iostream>
using namespace std;


//Look at this series: 80, 10, 70, 15, 60, ... What number should come next?

int main() {
    int x = 60;
    int y = 40;
    int nextTerm = x - y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
