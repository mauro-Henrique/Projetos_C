#include <stdio.h>
#include <bits//stdc++.h>

using namespace std;

int main(){
    int IA,IB,FA,FB;
    cin >> IA >>IB >>FA >>FB;

    if (IA == 0 && IB == 0){
        if (FA == 1){
            cout << 1;
        }else if (FA ==0 && FB ==0){
            cout << 0;
        }else{
            cout << 2;
        }
    }else if (IA == 0 && IB == 1){
         if (FA == 1 && FB ==1){
            cout << 1;
        }else if (FA ==0 && FB ==0){
            cout << 2;
        }else{
            cout << 0;
        }

    }else if (IA == 1 && IB ==0){
        if (FA == 1 && FB ==1){
            cout << 2;
        }else if (FA == 0){
            cout << 1;
        }else {
            cout << 0;
        }

    }else if (IA == 1 && IB ==1){
        if (FA == 1 && FB ==0){
            cout << 2;
        }else if (FA == 0 && FB ==1){
            cout << 1;
        }else {
            cout << 0;
        }
    }
}