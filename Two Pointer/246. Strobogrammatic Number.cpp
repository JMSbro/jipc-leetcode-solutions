class Solution {
public:
    bool check69(char a, char b)
    {
        if(a=='6' && b=='9') return true;
        else if(a=='9' && b=='6') return true;
        else return false;
    }
    bool checkOthers(char a, char b)
    {
        if(a==b && (a=='0' || a=='1' || a=='8')) return true;
        else return false;
    }
    bool isStrobogrammatic(string num) {
        int i=0, j=num.size()-1;

        while(i<=j)
        {
            if(!check69(num[i], num[j]) && !checkOthers(num[i], num[j]))
            {
                return false;
            }
            i++;
            j--;
        }
      return true;
    }
};
