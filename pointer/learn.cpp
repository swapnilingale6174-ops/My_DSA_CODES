#include <iostream>
using namespace std;
void swapy(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void reverse(int *arr,int n){
    int strt=0;
    int end=n-1;
    while(strt<end){
        //can use inbuilt function swap()
        swapy(arr[strt],arr[end]);
        strt++;
        end--;
    }
}

int main() {
    // Write C++ code here
int arr[]={2,4,6,8,10,12,14,16,18};
int n=sizeof(arr)/sizeof(int);
reverse(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
    return 0;
    
}