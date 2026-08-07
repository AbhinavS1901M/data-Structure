#include<iostream>
using namespace std;
void greatestofThree(int a,int b,int c){
    // if(a>=b&&a>=c) cout<<"a is greatest";
    // else if(b>=c&&b>=a) cout<<"b is greatest";
    // else cout<<"c is greatest";
    int max=-1223434423;
    if(max<a) max=a;
    if(max<b) max=b;
    if(max<c) max= c;
    cout<<"max "<< max<<endl;
}
int main (){
    int a,b,c;
    cout<<"Enter all the number";
    cin>>a>>b>>c;
    greatestofThree(a,b,c);
    return 0;
}
