#include <bits/stdc++.h>
using namespace std;
void printauto(multiset<string> s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
}

void print_itretor(multiset<string> s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert("acb");
    s.insert("klm");
    s.insert("def");
    s.insert("bcd");
    s.insert("acb");

    printauto(s);
    cout << endl
         << endl;
    // print_itretor(s);
    // using of find function
    if (s.find("abc") != s.end())
        cout << "The element is in the set " << endl;
    else
        cout << "The element is not in the set " << endl;
    auto it = s.find("acb");
    cout << "The value of the it is " << (*it) << endl;
    if (it != s.end())
    {
        s.erase(it);
    }
    // using of the erase fundtion in set........................................................
    // if we use below method it will delete all the same vaule..but if we want to delete only one vaule then we need to follow avobe part...

    /* s.erase("acb");
    print_itretor(s);
 */

    print_itretor(s);
}
