#include<bits/stdc++.h>
using namespace std;
int main(){
    int opt;
    cin >> opt;
    switch(opt){
        case 1:
           cout << "Milk & Bred";
           break;
        case 2:
           cout << "Eggs";
           break;
        case 3:
           cout << "Chicken";
           break;
        default:
           cout << "Invalid option";
           break;
    }
    return 0;
}