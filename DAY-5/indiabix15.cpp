#include <iostream>
using namespace std;


//Look at this series: 544, 509, 474, 439, ... What number should come next?

int main() {
    int x = 439;
    int y = 35;
    int nextTerm = x - y;
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
