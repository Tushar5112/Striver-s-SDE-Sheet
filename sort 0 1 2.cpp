#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums,int n) {
    int i=0,j=0,k=n-1;
    while(i<=k) {
        if(nums[i]==0) {
            swap(nums[i++],nums[j++]);
        }
        else if(nums[i]==1) {
            i++;
        }
        else if(nums[i]==2) {
            swap(nums[i],nums[k--]);
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    sort012(nums,n);
    for(int i: nums) {
        cout<<i<<"\t";
    }
    return 0;
}