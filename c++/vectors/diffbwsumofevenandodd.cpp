#include<iostream>
#include<vector>
using namespace std;
int main(){

//difference of  sum of element of even indies to the sum of element at odd indies...
vector<int>v(6);
for(int i=0;i<6;i++){
    cin>>v[i];
}
int anssum=0;
for(int i=0;i<6;i++){
    if(i%2==0){
        anssum+=v[i];
        }
        else{
            anssum-=v[i];


        }
}
cout<<anssum<<endl;
return 0;
}