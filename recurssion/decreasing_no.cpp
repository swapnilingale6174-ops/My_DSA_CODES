#include<iostream>
#include<string>
using namespace std;

void decrease(int n){
    if(n==1){
        cout<<n<<endl;
        return ;
    }
    cout<<n<<endl;
    decrease(n-1);

}

int main(){

decrease(100);


    return 0;
}