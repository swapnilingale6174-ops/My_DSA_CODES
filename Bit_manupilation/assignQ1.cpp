#include<iostream>
using namespace std;
int manipulate(int num,int i,int j){
    //finding BM;
    int a=((~0)<<(j+1));
    int b=((1<<i)-1);
    int BM=(a|b);
    cout<<BM<<endl;
    num=num & BM;

    return num;
    
}


int main(){
cout<<manipulate(31,1,3);

    return 0;
}