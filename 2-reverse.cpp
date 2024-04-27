//reverse the number

class Solution {
public:
    int reverse(int x) {
       
             long long reverse = 0;
             int temp=x;
             int digit;
            
            while(temp!=0)
            {
                digit=temp%10;
                reverse=reverse*10+digit;
                temp/=10;
            }
            
            if (reverse > INT_MAX || reverse < INT_MIN)
             {
                 return 0;  
             }

        return reverse;
       
    }
};