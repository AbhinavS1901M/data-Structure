#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,4,6,7,1,0};
    int targetedsum=7;
    int size=6;

    int pair=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]+arr[j]==targetedsum){
                pair++;
            }

        }
    }
    cout<<pair<<endl;
    return 0;

}