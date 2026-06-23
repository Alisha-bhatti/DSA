
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1) return arr[i];
            // break;
        }
        return 0;
    }
};
