#include<iostream>
using namespace std;
int main(){
    int x=19;
    int *ptr=&x;

    float y=19.8;
    float *ptrf=&y;

    cout<<ptr<<" "<<ptrf<<" "<<*ptr;
    

    return 0;
}