class Solution {
public:
    string reverseWords(string s) {
        while(s[0]==' '){
            s=s.assign(s,1,s.size()-1);
        }
        while(s[s.size()-1]==' '){
            s=s.assign(s,0,s.size()-1);
        }
        string ans="";
        int head=s.size()-1; 
        int tail=s.size()-1;
        for(int k=s.size()-1;k>=0;k--){
            if(s[k]!=' '){
                if(k==s.size()-1||s[k+1]==' ') tail=k;
            }
            if(s[k]==' '||k==0){
                if(s[k+1]!=' '&&k!=0){
                    head=k+1;
                    ans=ans.append(s,head,tail-head+1);
                    ans=ans+' ';
                }
                if(s[k]!=' '&&k==0){
                    head=k;
                    ans=ans.append(s,head,tail-head+1);
                }
            } 
        }
        return ans;
    }
};