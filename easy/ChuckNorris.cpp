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

/**
 * 正常解题思路
 * 1.将输入的字符串转换为二进制字符串
    通过下标取出string里的字节，下标操作符[] 和 成员函数at()。两者均返回指定的下标位置的字符，但是[]检查输入的有效性，所以用at()比较好，
    bitset模版用于将数字转换为二进制，因为题目只要求为7，所以用bitset<7>就OK
 * 2.将转换后的二进制字符串编码
    题目给出的基本的条件是 
    a.将1转换为“0 0” 
    b.将转转换为“00 0”
    c.转换一位后通过空格隔开
    特殊条件
    d.如果是连续的 “11” 或者“00” 需要转换的第二位补0 -> “11”:"0 00" "00”:"00 00"
 * 3.学到的是解题的思路，先分析条件给出的条件有哪些，条件的主次是什么，很重要
    在循环里分清楚条件的主次
    a.b为最基本的条件，放在最里面
    c为次要条件，放在基本条件之前
    d为特殊条件,最先考虑
 * 4.处理数据用要经常用到tmp，起到交换和保存数据的作用
 * 5.常用的字符串轮子 to_string() c_str()
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
