#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
/**
 *屏幕坐标的位移计算
 *屏幕坐标左上（lefttop）为（0，0） 右下（rightbottom）为最大（max，max）
 *将a（initialTX，initialTY）移动到b（lightX，lightY）
 *计算它们两点的差 lightX-initialTX（重点减去起始点）
 *横坐标差x1如果大于0，则往右移动，小于则往左移动
 *纵坐标差y1如果大于0，则向下移动，小于则向上移动
 *绝对值abs是移动的距离
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    int tx = initialTX;
    int ty = initialTY;
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        string x;
        string y;
        if(tx > lightX)
        {
            x="W";
            tx--;
        }
        else if(tx < lightX)
        {
             x="E";  
             tx++;
        }
        if(ty > lightY)
        {
            y="N";
            ty--;
        }
        else if(ty < lightY)
        {
             y="S";
             ty++;
        }
        
        cout << y << x <<endl;        
        // A single line providing the move to be made: N NE E SE S SW W or NW
       
    }
}

 
