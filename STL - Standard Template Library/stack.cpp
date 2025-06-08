// Stack: LIFO and indexing not allowed!
// Only main 3 functions -> Push, Pop, Top 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    stack<int> st;

    // Insert elements
    st.push(10);
    st.push(20);
    st.emplace(30);

    // Access top
    cout << "Top: " << st.top() << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Remove top element
    st.pop();

    // Check if empty
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // Loop through and empty the stack
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
