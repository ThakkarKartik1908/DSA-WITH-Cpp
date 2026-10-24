#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;
//TC = SC =  O(N)
vector<int> Next_Greater_Ele_optimal(vector<int>& nums1, vector<int>& nums2) {
        // find solution for all and take which one need
        unordered_map<int,int>m; // nums2[i],NG
        vector<int> ans2(nums2.size(), 0);
        vector<int> ans1(nums1.size(), 0);
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (s.size() > 0 && s.top() <= nums2[i]) {
                s.pop();
            }
            if (s.empty()) {
                m[nums2[i]] = -1;
            } else {
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }

        vector<int>ans;
        for(int i=0; i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }

        return ans;
    }


int main(){
    vector<int> nums1  = {4,1,2};
    vector<int> nums2  = {1,3,4,2};
    vector<int> ansNGE = Next_Greater_Ele_optimal(nums1,nums2);

    for(int val : ansNGE){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}