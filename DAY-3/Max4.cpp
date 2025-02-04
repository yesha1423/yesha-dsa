#include<iostream>
using namespace std;

int main(){
    int p, q, r, s;
    cout << "Enter p :";
    cin >> p;
    cout << "Enter q :";
    cin >> q;
    cout << "Enter r :";
    cin >> r;
    cout << "Enter s :";
    cin >> s;

    if(p > q){
        if(p > r){
            if(p > s){
                cout << "p is max";
            } else {
                cout << "s is max";
            }
        } else {
            if(r > s){
                cout << "r is max";
            } else {
                cout << "s is max";
            }
        }
    } else {
        if(q > r){
            if(q > s){
                cout << "q is max";
            } else {
                cout << "s is max";
            }
        } else {
            if(r > s){
                cout << "r is max";
            } else {
                cout << "s is max";
            }
        }
    }
    
    return 0;
}
