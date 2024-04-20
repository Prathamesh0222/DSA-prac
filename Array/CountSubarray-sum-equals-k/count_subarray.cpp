#include<bits/stdc++.h>
using namespace std;

//Brute Force TC:O(n^2), SC:O(1)
// int subarraySum(vector<int>& nums, int k){
//     int n = nums.size();
//     int count = 0;
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(sum==k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

//Optimal Approach
int subarraySum(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    int preSum = 0;
    map<int,int> mpp;
    mpp[0] = 1;
    for(int i=0;i<n;i++){
        preSum+=nums[i];
       int remove = preSum - k;
       count += mpp[remove];
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3};
    int k =3;
    subarraySum(nums,k);
    cout << "The count of subarrays with sum equal to k is: " << subarraySum(nums,k) << endl;
    return 0;
}