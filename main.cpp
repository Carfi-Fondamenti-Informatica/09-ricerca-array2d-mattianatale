#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char a[10][20];
    char b[20];
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            a[i][j]=' ';
            b[j]=' ';
        }
    }
    
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    cin >> b;

    int p=0;
    if(funzione(a, b, p)){
        cout<<p;
    }
    else
        cout<<"non presente";
    return 0;
}
