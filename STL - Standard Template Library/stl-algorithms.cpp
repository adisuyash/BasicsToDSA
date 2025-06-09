// STL Algorithms Demo: Common algorithms with minimal examples
// Works on containers with iterators (like vector, set, etc.)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 9};

    // sort: sorts in ascending order
    sort(v.begin(), v.end()); // 1 2 5 8 9

    // reverse: reverses the order
    reverse(v.begin(), v.end()); // 9 8 5 2 1

    // max_element / min_element: returns iterator to max/min
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;

    // accumulate: sum of all elements
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;

    // count: counts occurrences of a value
    cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;

    // find: returns iterator to the first occurrence
    auto it = find(v.begin(), v.end(), 8);
    if (it != v.end())
        cout << "Found 8\n";

    // binary_search: returns true if element exists (only on sorted containers)
    sort(v.begin(), v.end()); // required
    if (binary_search(v.begin(), v.end(), 2))
        cout << "2 exists\n";

    // lower_bound: first element >= value (sorted vector only)
    auto lb = lower_bound(v.begin(), v.end(), 5);
    cout << "Lower bound of 5: " << *lb << endl;

    // upper_bound: first element > value (sorted vector only)
    auto ub = upper_bound(v.begin(), v.end(), 5);
    cout << "Upper bound of 5: " << *ub << endl;

    // next_permutation: generates next lexicographical permutation
    vector<int> p = {1, 2, 3};
    next_permutation(p.begin(), p.end()); // 1 3 2

    // prev_permutation: generates previous permutation
    prev_permutation(p.begin(), p.end()); // 1 2 3 again

    // all_of: checks if all elements satisfy condition
    if (all_of(v.begin(), v.end(), [](int x)
               { return x > 0; }))
        cout << "All positive\n";

    // any_of: checks if any element satisfies condition
    if (any_of(v.begin(), v.end(), [](int x)
               { return x == 9; }))
        cout << "At least one 9\n";

    // none_of: checks if no element satisfies condition
    if (none_of(v.begin(), v.end(), [](int x)
                { return x < 0; }))
        cout << "No negatives\n";

    return 0;
}
