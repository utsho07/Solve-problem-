#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
/* void print(multiset<ll> s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
} */
int main()
{
    int t;
    //  cout << "enter the t" << endl;
    cin >> t;

    while (t--)
    {
        // cout << "Enter the n and k " << endl;
        int n, k;
        ll total = 0;
        cin >> n >> k;
        multiset<ll> s;
        // cout << "Enter the vaue of teh candy" << endl;
        for (int i = 0; i < n; i++)
        {

            ll candy;
            cin >> candy;
            s.insert(candy);
        }
        // print(s);

        for (int i = 0; i < k; i++)
        {

            auto it = --(s.end());
            total = total + (*it);
            s.erase(it);
            s.insert(*it / 2);
        }
        cout << total << endl;
    }
}
