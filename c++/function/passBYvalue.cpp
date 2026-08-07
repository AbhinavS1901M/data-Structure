#include<iostream>
using namespace std;
int changeX(int x){
x*=5;
cout<<"x="<<x<<endl;


}
int main(){
    int x=6;
    changeX(x);
    cout<<"x="<<x<<endl;
    return 0;
}