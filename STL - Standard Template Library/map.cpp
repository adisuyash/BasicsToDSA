// map: Stores key-value pairs in sorted (ascending) order by key
// Keys are unique. Internally uses Red-Black Tree (balanced BST)
// Time complexity for insert, erase, find: O(log n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    map<string, int> m;

    // Insertion
    m["apple"] = 3; // key = "apple", value = 3
    m["banana"] = 5;
    m.insert({"orange", 2}); // another way to insert

    // Accessing values
    cout << "apple: " << m["apple"] << endl;      // returns 3
    cout << "banana: " << m.at("banana") << endl; // safer access

    // Iterating (sorted by key)
    for (auto it : m)
    {
        cout << it.first << ": " << it.second << endl;
    }

    // Size
    cout << "Size: " << m.size() << endl;

    // Check key existence
    if (m.count("orange"))
    {
        cout << "orange exists\n";
    }

    // Find returns iterator
    auto it = m.find("banana");
    if (it != m.end())
    {
        cout << "Found: " << it->first << " => " << it->second << endl;
    }

    // Erase by key
    m.erase("banana");

    // Erase by iterator
    auto it2 = m.find("orange");
    if (it2 != m.end())
    {
        m.erase(it2);
    }

    // Clear all
    m.clear();

    // Check if empty
    if (m.empty())
    {
        cout << "Map is empty\n";
    }

    return 0;
}
