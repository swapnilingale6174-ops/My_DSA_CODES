#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int summ(int n){
if(n==0){
    return 0;
}
return n+summ(n-1);
}

int main(){

cout<<summ(10);


    return 0;
}