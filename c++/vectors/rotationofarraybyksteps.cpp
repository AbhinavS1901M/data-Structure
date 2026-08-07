#include<iostream>
#include<vector>
#include<algorithm>// needed for reverse..
using namespace std;

int main()
{

/*int arr[]={1,2,3,4,5};
int n=5;
int k=2;
k=k%n;
int ansarr[5];
//copy last k elements to the beginning of ansarr
for(int i=0;i<k;i++){
    ansarr[i]=arr[n-k+i];
}



// inserting first n-k elements in ansarr
for(int i=k;i<n;i++){
    ansarr[i]=arr[i-k];

}
for(int i=0;i<5;i++){
    cout<<ansarr[i]<<" ";
}
cout<<endl;*/

vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
int n=5;
int k=2;
k=k%v.size();
reverse(v.begin(),v.end());
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());

for(int a:v){
    cout<<a<<" ";
}
cout<<endl;
return 0;

}