#include <iostream>
using namespace std;


//Look at this series: 8, 6, 9, 23, 87 , ... What number should come next?

int main() {
    int x = 87;
    int n = 5;
    int nextTerm = (x * n) - (n + 1);
    cout << "The next number in the series is: " << nextTerm << endl;
    return 0;
}
