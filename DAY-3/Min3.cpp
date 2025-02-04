#include<iostream>
using namespace std;

int main(){
    int i, j, k;
    cout << "Enter i :";
    cin >> i;
    cout << "Enter j :";
    cin >> j;
    cout << "Enter k :";
    cin >> k;

    if(i < j){
        if(i < k){
            cout << "i is the minimum";
        } else {
            cout << "k is the minimum";
        }
    } else {
        if(j < k){
            cout << "j is the minimum";
        } else {
            cout << "k is the minimum";
        }
    }

    return 0;
}
