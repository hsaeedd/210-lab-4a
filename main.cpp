#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Color
{
    int redhue;
    int greenhue;
    int bluehue;
};

int main()
{
    srand(time(0));
    int n = rand() % 26 + 25;
    vector<Color> Colors;
    for (int i = 0; i < n; i++)
    {
        Color temp;
        temp.redhue = rand();
        temp.greenhue = rand();
        temp.bluehue = rand();
        Colors.push_back(temp);

    }
    

}
