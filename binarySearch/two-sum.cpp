
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#include<vector>

int countLessthan(vector<int> &nums, int target){
    
    std:: sort(nums.begin(), nums.end());
    int count=0;
    int n =nums.size();

    for(int i=0;i<n-1;i++){

        int left=i+1;
        int right=n-1;
        int j = -1;

        while(left<=right){

            int mid=(left+right)/2;
            if(nums[i]+nums[mid]<target){
                j=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }

        }
       
       if(j!=-1){
            count+=(j-i);
       }
        
    }
    return count;
  
}

int main(){

    vector<int> a={-1,1,2,3,1};
    int totalCount= countLessthan(a,2);
    cout<<totalCount<<endl;
    return 0;

}