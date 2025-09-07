#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Color
{
    int redhue;
    int greenhue;
    int bluehue;
};

int main()
{
    int n = rand();
    vector<Color> Colors (n);
    for (int i = 0; i < n; i++)
    {
        Color temp;
        temp.redhue = 
        temp.greenhue = 
        temp.bluehue = 
        Colors.push_back(temp);

    }
    cout << "Color#    R Value    G Value    B Value" << endl;
    cout << "------    -------    -------    -------" << endl;
    cout << n << "    " << redhue << "    " << greenhue << "    " << bluehue << endl;

}
