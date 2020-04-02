#include <iostream>
#include <iterator>
#include <algorithm>
 
using namespace std;

bool closer_to_zero (int i, int j) {
    return (abs(i) < abs(j)) || (abs(i) == abs(j) && i > 0);
}

int main() {
    istream_iterator<int> it(cin), eos;
    cout << (++it == eos ? 0 : *min_element (it, eos, closer_to_zero)) << endl;
}
