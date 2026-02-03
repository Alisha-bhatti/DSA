class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n1=num1.size();
        int n2=num2.size();
        int i=n1-1;
        int j=n2-1;
        int carry=0;
        while(i>=0 || j>=0){
            int a=(i>=0)? num1[i]-'0' : 0;   // to convert from string to int..int a=num[i]-'0;
            int b=(j>=0)? num2[j]-'0' : 0;   // if j>=0 then convert string to int else keep b==0;
            int add=a+b+carry;
            carry=add/10;
            add=add%10;
            ans+=add+'0';       // to convert from int to string;
            i--;
            j--;
        }
        while(carry>0){
            ans+=carry%10+'0';
            carry=carry/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};
