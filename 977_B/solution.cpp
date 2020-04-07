#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    string tmp;
    int cur_count, max_count = 0;

    cin >> n >> s;

    for (int i = 0; i < n - 1; i++)
    {
        cur_count = 0;
        // cout << i << ' ' << s[i] << endl;
        for (int j = i; j < n - 1; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                cur_count++;
            }
        }
        if (cur_count > max_count)
        {
            max_count = cur_count;
            tmp = s.substr(i, 2);
        }
    }

    cout << tmp << endl;

    return 0;
}