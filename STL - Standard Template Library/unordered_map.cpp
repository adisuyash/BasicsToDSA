// unordered_map: Stores key-value pairs with no specific order
// Keys are unique. Internally uses a hash table
// Average time complexity for insert, erase, find: O(1)
// Faster than map but not sorted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    unordered_map<string, int> um;

    // Insertion
    um["pen"] = 10;
    um["pencil"] = 20;
    um.insert({"eraser", 5});

    // Access values
    cout << "pen: " << um["pen"] << endl;
    cout << "pencil: " << um.at("pencil") << endl;

    // Iterate (order is random)
    for (auto &p : um)
    {
        cout << p.first << ": " << p.second << endl;
    }

    // Size
    cout << "Size: " << um.size() << endl;

    // Check key existence
    if (um.count("eraser"))
    {
        cout << "eraser exists\n";
    }

    // Find key
    auto it = um.find("pen");
    if (it != um.end())
    {
        cout << "Found: " << it->first << " => " << it->second << endl;
    }

    // Erase by key
    um.erase("pen");

    // Erase by iterator
    auto it2 = um.find("eraser");
    if (it2 != um.end())
        um.erase(it2);

    // Clear map
    um.clear();

    // Check if empty
    if (um.empty())
        cout << "Unordered map is empty\n";

    return 0;
}
