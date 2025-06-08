// set: Stores unique, sorted elements (ascending by default)
// Uses balanced BST (like Red-Black Tree) internally

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    // Insert
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // duplicate ignored

    // Loop (sorted automatically)
    for (int x : s)
        cout << x << " "; // 1 3 5
    cout << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Check existence
    if (s.count(3))
        cout << "3 exists\n";

    // Find
    auto it = s.find(3);
    if (it != s.end())
        cout << "Found: " << *it << endl;

    // Erase element
    s.erase(3);

    // Clear all
    s.clear();

    return 0;
}
