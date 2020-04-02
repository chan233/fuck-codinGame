#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
/**
 *查找最接近0的 正数，
 *先找到一个最小数，然后通过这个数去遍历对比
 *其实就两种情况
 *case 1 如果下一个数的绝对值比最小数（更靠近0），就把它赋值给最小数
 *case 2 如果下一个数的绝对值和这个最小数相等，且这个数大于这个最小数，这个就是最小正数
 
**/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
   
    int min = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if( abs(t) < abs(min) || \
           (abs(t) == abs(min) && t > min))
            min = t; 
    }  
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    if (n > 0)
        cout << min << endl;
    else
        cout << 0 << endl;  
}
