class Solution{
    public:
        char findTheDifference(string s, string t){
            // s = jkhsuihduihsp
            // t = ikpjhsuphdsuhi

            // a ^ a = 0
            // a ^ 0 = a

            char c = 0;
            for(char letter : s){
                c ^= letter;
            }

            for(char letter : t){
                c ^= letter;
            }

            return c;
        }
};