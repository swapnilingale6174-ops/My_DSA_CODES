#include<iostream>
using namespace std;

int set_count(int num){
int count=0;
    while(num>0){
      int lst_dgt=num & 1;
      count += lst_dgt;
        num=num>>1;
}
return count;

}


int main(){
    cout<<set_count(15);
    return 0;

}