// priority_queue: A max-heap by default (largest element at the top)   
// Supports fast insertion and retrieval of the maximum element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration (max-heap by default)
    priority_queue<int> pq;

    // Insert elements
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.emplace(15);

    // Access top
    cout << "Top: " << pq.top() << endl;

    // Size
    cout << "Size: " << pq.size() << endl;

    // Remove top element
    pq.pop();

    // Loop through and empty the queue
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
