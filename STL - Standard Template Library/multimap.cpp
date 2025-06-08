// multimap: Stores key-value pairs where duplicate keys are allowed
// Internally uses a Red-Black Tree (like map), so keys are sorted
// Useful when multiple values need to be stored under the same key

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    multimap<string, int> mm;

    // Insertion (allows duplicate keys)
    mm.insert({"apple", 1});
    mm.insert({"banana", 2});
    mm.insert({"apple", 3});

    // Iterate (keys are sorted, duplicates are shown)
    for (auto &p : mm)
    {
        cout << p.first << ": " << p.second << endl;
    }

    // Count number of entries with key "apple"
    cout << "Count of apple: " << mm.count("apple") << endl;

    // Find (returns iterator to the first occurrence)
    auto it = mm.find("apple");
    if (it != mm.end())
    {
        cout << "First 'apple': " << it->second << endl;
    }

    // Erase all "apple" entries
    mm.erase("apple");

    // Clear everything
    mm.clear();

    return 0;
}
