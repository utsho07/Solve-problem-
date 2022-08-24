// pqir store two vaule
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p.first=4;
    // p.second="Name";
    p = make_pair(2, "Name");
    p = {2, "abcd"};
    cout << "The first vaule " << p.first << " "
         << "second"
         << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second;
        cout << endl;
    }
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second;
        cout << endl;
    }

    // how to take the input
    cout << "Enter the vaule of the p first and second " << endl;
    cin >> p.first;
    cin >> p.second;
    cout << p.first << " " << p.second;
}
