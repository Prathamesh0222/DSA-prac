#include <bits/stdc++.h>
using namespace std;

//Brute Force
int majorityElement(vector<int> V){
    int n = V.size();
    for(int i=0;i<n;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if(V[i]==V[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return V[i];
        }
    }
    return -1;
}

int main(){
    vector<int> V = {2,1,1,1,1,2,2};
    int ans = majorityElement(V);
    cout << "The majority element is: " << ans << endl;
    return 0;
}