// Queue: FIFO and indexing not allowed!

#include <bits/stdc++.h>    
using namespace std;

int main()
{
    // Declaration
    queue<int> q;

    // Insert elements
    q.push(10);
    q.push(20);
    q.emplace(30); // same as push but faster

    // Access front and back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Remove front element
    q.pop();

    // Check if empty
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    // Loop through remaining elements
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
