class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length()>s.length()){
            return {};
        }
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        vector<int>test;
        int k=p.length();
        for(int x:p){
            freq1[x-'a']++;
        }
        
        for(int i=0; i<k; i++){
            freq2[s[i]-'a']++;


        }
        if(freq1==freq2){ 
            test.push_back(0);
        }
        for(int i=k; i<s.length();i++){
            freq2[s[i]-'a']++;
            freq2[s[i-k]-'a']--;
            if(freq1==freq2){
                test.push_back(i-k+1);
            }
        }
        return test;
    }
};