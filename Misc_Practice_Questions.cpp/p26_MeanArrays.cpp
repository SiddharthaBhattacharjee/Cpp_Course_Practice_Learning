#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i:nums2){
            int l = nums1.size();
            if(l==0){
                int len = nums2.size();
                if(len%2==0){
                    return (nums2[len/2]+nums2[len/2-1])/2.0;
                    break;
                }
                else{
                    return nums2[len/2];
                    break;
                }
            }
            for(int j=0;j<l;j++){
                if(i<nums1[j]){
                    nums1.insert(nums1.begin()+j,i);
                    break;
                }
                else if(j==nums1.size()-1){
                    nums1.push_back(i);
                    break;
                }
            }
        }
        
        int len=nums1.size();
        if(len%2==0){
            return (nums1[len/2]+nums1[len/2-1])/2.0;
        }
        else{
            return nums1[len/2];
        }
    }
};

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    Solution s;
    cout<<s.findMedianSortedArrays(nums1,nums2)<<endl;
    return 0;
}