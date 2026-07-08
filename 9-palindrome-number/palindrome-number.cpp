class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int y=x;
        long long reversed=0;
        while(x!=0){
            int digit=x%10;
            reversed=reversed*10+digit;
            x=x/10;

    


            

        }
        if(reversed==y){
            return true;
        }
        return false;
        
    }
};