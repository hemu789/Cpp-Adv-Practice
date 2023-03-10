// Unordered Set have no ordering -> Hashing
// Ordered Set having ordering ->Red Black And AVL Tree

// Set is always unique

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);

    for (auto i : s)
    {
        cout << i << " ";
    }

    // Print in any order b/c Unordered set

    return 0;
}

// Functions in Unordered_set is:

// insert()

// begin n end using itterator
//  begin()
//  end()

// clear()
//  size()
//  find() if present return itterator means address if not present return s.end()
// count() ->return 1 ->present ,0->not present

// erase() ->removing the element in the set