class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp1;
        vector<int> temp2;
        int n1=nums1.size();
        int n2=nums2.size();
        vector temp=nums1;
        for(int i=0;i<n1;i++){
            for(int j=i+1;j<n1;j++){
                if(temp[i]==temp[j]) temp[j]=nums2[0];
            }
            for(int j=0;j<n2;j++){
                if(temp[i]==nums2[j]) break;
                if(j==n2-1) temp1.push_back(temp[i]);
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=i+1;j<n2;j++){
                if(nums2[i]==nums2[j]) nums2[j]=nums1[0];
            }
            for(int j=0;j<n1;j++){
                if(nums2[i]==nums1[j]) break;
                if(j==n1-1) temp2.push_back(nums2[i]);
            }
        }
        return {temp1,temp2};
    }
};