#include<iostream>
using namespace std;
int expo(int num,int pwr){
    int ans=1;
    while(pwr>0){
        if(pwr & 1){
            ans=ans*num;  
        }num=num*num;
        pwr=pwr>>1;
    }
    return ans;
}
int main(){

cout<<expo(3,5);



    return 0;
}