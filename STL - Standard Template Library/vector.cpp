// Vector: Dynamic array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    vector<int> v;        // Empty vector
    vector<int> v2(3, 5); // v2 = [5, 5, 5]

    // Insertion
    v.push_back(10);    // Add 10
    v.push_back(20);    // Add 20
    v.emplace_back(30); // Faster push_back

    // Access
    cout << "First element: " << v[0] << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 1: " << v.at(1) << endl;
    // v.at(index) is preferred as it shows error if value isn't present; v[index] gives garbage if value isn't present

    // Size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Remove last element
    v.pop_back(); // Removes 30

    // Check empty
    if (v.empty())
    {
        cout << "Vector is empty\n";
    }
    else
    {
        cout << "Vector is not empty\n";
    }

    // Looping
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Erase single element
    vector<int> ve = {1, 2, 3, 4, 5};
    ve.erase(ve.begin() + 2); // Remove element at index 2 (value 3)

    // Erase range
    ve.erase(ve.begin() + 1, ve.begin() + 3); // Remove index 1 and 2

    // Assign new values
    v.assign(4, 100); // v = [100, 100, 100, 100]

    // Clear all elements
    v.clear(); // Size becomes 0, capacity unchanged

    // Shrink to fit
    v.shrink_to_fit(); // Reduce capacity to match size

    // Swap vectors
    vector<int> a = {1, 2}, b = {3, 4, 5};
    a.swap(b); // a = [3, 4, 5], b = [1, 2]

    return 0;
}
