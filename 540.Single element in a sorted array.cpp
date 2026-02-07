class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
     int n=arr.size();

    //  ....binary search....
    
     int l=0;
     int h=n-1;
     
     while(l<h){
        int mid=l+(h-l)/2;
        if(mid % 2 == 1){
            mid--;
        }
        if (arr[mid] == arr[mid + 1]) {
                l= mid+2;
            } 
            else {
                h = mid;
            }
     }
     return arr[l];

    //  ....brute force approach....

    // int ans=0;
    // for(int i=0;i<n;i++){
    //     if((arr[i]!=arr[i+1]) && (arr[i]!=arr[i-1])){
    //         ans=arr[i];
    //     }
    // }
    // return ans;
     
    }
};
