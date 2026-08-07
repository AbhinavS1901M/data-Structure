#include<iostream>
using namespace std;
int sumOFdigits(int num){
int digsum=0;


while (num>0){
int lastdig=num%10;
num/=10;
digsum+=lastdig;
}
return digsum;
}
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    cout<<"sum="<<sumOFdigits(num)<<endl;
    return 0;
}