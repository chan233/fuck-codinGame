#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
string convert(string &input);
string encode(string &input);
int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    string bits = convert(MESSAGE);
    cout << encode(bits) << endl;
}
string convert(string &input)
{
    string output;
    for(int i = 0 ; i < input.length() ; ++i)
    {
        char c = input[i];
        bitset<7> b(c);
        output += b.to_string();      
    }
    return output;
}

string encode(string &input)
{
    string output = "";
    string tmp = "";
    int iszero = -1;
    
    for(string::iterator it = input.begin(); it != input.end() ; ++it)
    {
        int newzero = (*it == '0');
        
        if(iszero == newzero)
        {
            tmp += "0";
        }
        else
        {
            iszero = newzero;
            
            if(output.length() >0)
            {
                output += " ";
            }
            output += tmp;
            if(iszero)
            {
                tmp = "00 0";
            }
            else
            {
                tmp = "0 0";
            }
        }
    }
    if(tmp.length() >0)
    {
        if(output.length() >0)
        {
            output += " ";
        }
        output += tmp;
    }
    
    return output;
}
