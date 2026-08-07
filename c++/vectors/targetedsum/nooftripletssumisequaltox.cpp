#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6};
    int size=6;
    int pair=0;
    int targetedsum=7;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==targetedsum){
                    pair++;
                }

            }

        }
    }
    cout<<pair<<endl;
    return 0;
}