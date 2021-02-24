#include <bits/stdc++.h>
using namespace std;
bool testPalindrome(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - (i + 1)])
            return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        s[i] = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            string str = to_string(j);
            if (testPalindrome(str)) s[i]++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << s[i] << '\n';
}
