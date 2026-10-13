#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks >=90 && marks <=100){
        cout << "A";
    }
    else if(marks >=80 && marks <=89){
        cout << "B";
    }
    else if(marks >=70 && marks <=79){
        cout << "C";
    } 
    else if(marks >=0 && marks <=69){
        cout << "D";
    }
    else{
        cout << "Invalid marks";
    }

}
