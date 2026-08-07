#include<iostream>
#include<vector>
using namespace std;

/*int main(){
    int arr[]={1,2,3,4,5,6,7};
    bool shortedflag=true;
    for(int i=1;i<7;i++){
        if(arr[i]<arr[i-1]){
            shortedflag=false;

        }
    }
    cout<<shortedflag<<endl;
    return 0;
}*/

bool isshorted(int arr[],int n){
    for(int i=0;i<n;i++){
        // if the current element is smaller the previous one 
        if(arr[i]<arr[i-1]){
            return false;  // not shorted
        }
    }
    return true;
}

int main(){
int arr[]={1,2,3,4,5,6,7};

int n=sizeof(arr)/sizeof(arr[0]);

if(isshorted(arr,n)){

    cout<<"the array is shorted."<<endl;

}else{
    cout<<"the array is not shorted.";
}
return 0;
}






    
