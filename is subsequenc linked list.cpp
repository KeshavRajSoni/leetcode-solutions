

#include <iostream>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int p1 =0;
        for(int i=0; i<t.size(); i++){
            if(p1==s.size()){
                return true;
                break;
            }

            if(t[i]==s[p1]){
                p1++;
            }
        }
        if(p1!=s.size()){
            return false;
        }

        return true;
    }
};

int main()
{
    cout<<"Hello World";

    return 0;
}
