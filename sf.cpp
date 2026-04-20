#include<iostream>
using namespace std;
int main(){
    int num=5,b=num,fact=1;
    while(num>0){
        fact*=num;
        num--;
    }
    cout<<"factorial of "<<b<<" is "<<fact;
    return 0;
}