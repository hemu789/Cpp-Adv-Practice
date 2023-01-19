#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<string, int> m;

    // Initialize n no order

    // First ->key
    // Second ->Value

    m["gfg"] = 20;
    

    m.insert({"True", 20});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

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