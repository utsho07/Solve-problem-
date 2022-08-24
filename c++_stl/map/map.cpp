#include <bits/stdc++.h>
using namespace std;

void display(map<int, string> &m)
{
    cout << "The size is " << m.size() << endl;
    for (auto value : m)
    {
        cout << value.first << " " << value.second;
        cout << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1];
    m[3] = "bcd";
    m[2] = "cde";
    m.insert({4, "afg"});
    map<int, string>::iterator it;
    // first method.....................
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl
         << endl;
    // second method...........
    for (auto value : m)
    {
        cout << value.first << " " << value.second;
        cout << endl;
    }
    cout << endl;

    display(m);
    // insertion of the map is log(n) time complexity

    // finding any vaule using the .find function
    cout << endl
         << endl;
    auto it1 = m.find(3);
    if (it1 == m.end())
        cout << "No vaule found" << endl;
    else
        cout << "The vaule is " << (*it1).first << " " << (*it1).second << endl;

    // errase any value using errase function

    m.erase(3);
    display(m);
}
