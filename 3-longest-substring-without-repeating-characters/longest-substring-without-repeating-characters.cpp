class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string t="";
        string m="";
        int k=0;
        for(int i=0; i<s.length(); i++){
            if(!t.contains(s[i])){
            t=t+s[i];
            }
            else{
                t=t+s[i];
                k=t.find(s[i]);
                t.erase(0,k+1);

                
                
            }
            if(t.length()>m.length()){
                m=t;
            }

        
        }
        int f=m.length();
        return f;
    }
};