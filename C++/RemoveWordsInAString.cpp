#include <bits/stdc++.h>

using namespace std;

class ReverseWordsInAStringIII {
public:
    string reverseWords(string s) {
        vector<string> tokens;
        stringstream ss(s);
        string intermediate;
        string rev = "";
        while(getline(ss, intermediate, ' '))    {
            int i = 0;
            while(intermediate[i] != '\0')
                rev.push_back(intermediate[intermediate.size() - 1 - i++]);
            if (s.size() > rev.size())
                rev.push_back(' ');
        }
        return rev;
    }
};

int main()  {
    ReverseWordsInAStringIII r;
    string s;
    getline(cin, s);
    string res = r.reverseWords(s);
    cout << res;
    return 0;
}