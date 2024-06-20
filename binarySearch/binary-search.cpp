#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#include<vector>

int binarySearch (vector <int> &nums ,int k){
  
      int low=0;
      int high=nums.size()-1;
      while (low<=high){
        
        int mid =(low+high)/2;
        if(nums[mid]==k){
            return mid;
        }
        else if(nums[mid]>k){
             high=mid-1;
        }
        else{
           
            low=mid+1;
        }
      }

      return -1;




}

int main()
{

    vector<int> a={1,2,4,6,8,10,34,67};
   
    int result = binarySearch(a,34);
    int result2 = binarySearch(a,11);
    int result3 = binarySearch(a,10);
    cout<<result<<endl;
    cout<<result2<<endl;
    cout<<result3<<endl;
    return 0;

}