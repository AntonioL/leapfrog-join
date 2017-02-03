
#include <iostream>
#include "leapfrog.hpp"

using namespace std;

int main ( void ) {
    vector<int> v1 { 1, 2, 3, 10 };
    vector<int> v2 { 2, 10 };
    vector<int> v3 { 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    vector<vector<int>> vs { v1, v2, v3 };

    auto res = leapfrogJoin( vs );
    cout << res.size() << " elements in the intersection:" << endl;
    for( int el : res )
        cout << "\t" << el << endl;
}

