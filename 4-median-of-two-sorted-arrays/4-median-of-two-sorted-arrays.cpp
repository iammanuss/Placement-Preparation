class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        vector<int>v;
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            v.push_back(nums2[j]);
            j++;
        }
        // for(auto i:v) cout<<i<<" ";
        int size=v.size();
        int start=0;
        int end=size-1;
        double median;
        int mid=(start+end)/2;
        if(size & 1)
        {
            median=v[mid];
        }
        else
        {
            median=(v[mid]+v[mid+1])/2.0;
        }
        return median;
    }
};