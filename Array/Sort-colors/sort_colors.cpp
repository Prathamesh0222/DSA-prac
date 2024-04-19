#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums, int n){
    int red = 0;
    int white = 0;
    int blue = n -1;
    while(white<=blue){
        if(nums[white]==0){
            swap(nums[white],nums[red]);
            white++;
            red++;
        }else if(nums[white]==1){
            white++;
        }else {
            swap(nums[white],nums[blue]);
            blue--;
        }
    }
}

int main(){
    int n = 6;
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums,n);
    cout << "After sorting" << endl;
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
    return 0;
}