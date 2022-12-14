#include "lib.h"
bool funzione(char a[10][20],char b[], int &p){
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            if(a[i][j] != b[j]){
                j=20;
            }
            
            else{
                if(j==19){
                    p = i;
                    return true;
                }
            }
        }
    }
    
    return false;
}
