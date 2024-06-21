
#include<vector>
#include<bits/stdc++.h>
#include<ostream>

using namespace std;

int firstOccurence(vector<int> &nums,int k){

    int start=0;
    int end=nums.size()-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){

        if(nums[mid]==k){
            ans=mid;
            end=mid-1;

        }
        else if(k >nums[mid]){
            start=mid+1;
        }
        else if(k<nums[mid]){
            end=mid-1;
        }

        mid=(start+end)/2;

        
    }
    return ans;

}

int main(){

    vector<int> a={1,2,4,10,30,30,30,30,34,67};
    int ansIndex = firstOccurence(a,30);

    cout<<ansIndex<<endl; 
    return 0;
}