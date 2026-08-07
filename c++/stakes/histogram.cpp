#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

int Histogram(vector<int> &arr){
    int n=arr.size();
    stack<int>st;
    int ans = INT_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            int ele=arr[st.top()];
            st.pop();
            int nextsmallerele=i;
            int prevsmallerele=(st.empty()) ? -1:st.top();
            ans= max(ans, ele*(nextsmallerele-prevsmallerele-1));
        }
        st.push(i);
    }
    while(not st.empty()){
        int ele=arr[st.top()];
        st.pop();
        int nextsmallerele=n;
        int prevsmallerele=(st.empty()) ?-1:st.top();
        ans=max(ans,ele*(nextsmallerele-prevsmallerele-1));
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=Histogram(v);
    cout<<ans<<"\n";
    return 0;
}