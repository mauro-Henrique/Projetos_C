#include <stdio.h>
#include <bits//stdc++.h>

using namespace std;

int main(){
    int A, M, resultado;
    cin >> A >> M;
    resultado = A + M;
    if (resultado <= 50){
        cout << "S";
    }else{
        cout << "N";
    }
    
    return 0;
}