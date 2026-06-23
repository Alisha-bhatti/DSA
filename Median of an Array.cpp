class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        double mid;
        int j=arr.size()-1;
        if(n%2!=0){
            mid =arr[n/2];
        }
        else{
            mid=(arr[(n/2)]+arr[(n/2)-1])/2.0;
        }
        return mid;
    }
};
