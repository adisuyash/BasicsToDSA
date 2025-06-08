// Deque: Double-ended queue -> Can push at the front as well!
// Indexing is allowed!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    deque<int> dq;

    // Insert elements
    dq.push_back(10);
    dq.push_front(5);
    dq.emplace_back(15);
    dq.emplace_front(0);

    // Access front and back
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    // Size
    cout << "Size: " << dq.size() << endl;

    // Remove elements
    dq.pop_front();
    dq.pop_back();

    // Loop through deque
    for (int val : dq)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clear all elements
    dq.clear();

    return 0;
}
