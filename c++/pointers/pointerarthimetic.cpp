#include<iostream>
using namespace std;
/*int main(){
    int arr[2]={5,3};
    int *ptr=&arr[0];
    cout<<(*ptr)++<<"\n";
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    return 0;
}*/

int main(){
    int arr[2]={1,19};
    int *ptr=&arr[0];
    cout<<ptr<<" "<<*ptr<<"\n";
    cout<<*ptr++<<"\n";
    cout<<arr[0]<<" "<<arr[1]<<"\n";
    cout<<ptr<<" "<<*ptr;
    return 0;
}