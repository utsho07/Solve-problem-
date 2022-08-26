//given N string ...print the lexograpic order or the sorted string........................
#include <bits/stdc++.h>
using namespace std;
void print(set<string> s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}

int main()
{
    set<string> m;
    int N;
    cin >> N;
    while (N--)
    {

        string s;
        cin >> s;
        m.insert(s);
    }
    print(m);
}
