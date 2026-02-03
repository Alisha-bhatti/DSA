lass Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string ans="";
        int index=-1;
        for(int i=0;i<n;i++){
            int a=num[i]-'0';
            if(a%2!=0){
                index=i;
            }
        }
        for(int i=0;i<=index;i++){
            ans+=num[i];
        }
        return ans;
    }
};
