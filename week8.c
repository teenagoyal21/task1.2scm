#include<stdio.h>
int fun(int x){
    int y;
    if(x>100){
    y = x-10;}
    else{
    y = fun(fun(x+11));}
    return y;
}

int main(){
    int x;
    printf("%d",fun(9));

}