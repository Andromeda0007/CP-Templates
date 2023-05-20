#include <bits/stdc++.h>
using namespace std;
#define int  long long
vector<string> v1;
void generate(string s1, int open, int close)
{
    if(open==0 && close==0)
    {
        v1.push_back(s1);
        return;
    }

    if(open>0)
    {
        s1.push_back('(');
        generate(s1, open-1, close);
        s1.pop_back();
    }

    if(close>0 && close>open)
    {
        s1.push_back(')');
        generate(s1, open, close-1);
        s1.pop_back();
    }
}
signed main()
{
    int n;
    cin >> n;
    string s1="";

    generate(s1, n , n);

    for(auto &value: v1)
    {
        cout << value << endl;
    }

    cout << v1.size() << endl;
}