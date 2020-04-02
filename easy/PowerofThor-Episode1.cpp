#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
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
