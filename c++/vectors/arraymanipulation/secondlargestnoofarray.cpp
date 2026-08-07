#include<iostream>
#include<vector>
using namespace std;
//when each value of aaray is unique...

    int largestElementIndex(vector<int> &v){
        int max=INT8_MIN;
        int maxindex=-1;
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
                maxindex=i;
            }
        } 
    
        return maxindex;
    }
    int main(){
        vector<int> v(6);
        for(int i=0;i<6;i++){
            cin>>v[i];
        }
        int indexoflargest=largestElementIndex(v);
        v[indexoflargest]=-1;
        int indexofsecondlargest=largestElementIndex(v);
        cout<<v[indexofsecondlargest]<<endl;

        return 0;


    }
    


