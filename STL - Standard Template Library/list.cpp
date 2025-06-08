// List: Doubly linked list but no indexing allowed!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    list<int> l1;        // empty list
    list<int> l2(5, 10); // list of size 5, all 10

    // Insert elements
    l1.push_back(1);      // [1]
    l1.push_front(0);     // [0, 1]
    l1.emplace_back(2);   // [0, 1, 2]
    l1.emplace_front(-1); // [-1, 0, 1, 2]

    // Size
    cout << "Size: " << l1.size() << endl;

    // Access using loop
    for (int val : l1)
        cout << val << " ";
    cout << endl;

    // Pop elements
    l1.pop_back();  // remove last
    l1.pop_front(); // remove first

    // Insert at position
    auto it = l1.begin();
    advance(it, 1);
    l1.insert(it, 99); // insert 99 at index 1

    // Erase at position
    it = l1.begin();
    advance(it, 1);
    l1.erase(it); // erase element at index 1

    // Remove by value
    l1.remove(0); // removes all 0s

    // Reverse
    l1.reverse();

    // Sort
    l1.sort();

    // Merge two sorted lists
    list<int> l3 = {2, 4, 6};
    list<int> l4 = {1, 3, 5};
    l3.merge(l4); // l3 becomes [1,2,3,4,5,6], l4 becomes empty

    // Unique
    list<int> l5 = {1, 1, 2, 2, 3};
    l5.unique(); // removes consecutive duplicates: [1, 2, 3]

    // Clear
    l5.clear();

    return 0;
}
