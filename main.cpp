#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>
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
        temp.redhue = rand()%246;
        temp.greenhue = rand()%246;
        temp.bluehue = rand()%246;
        Colors.push_back(temp);

    }
    cout << left << setw(8) << "Color#" << setw(8) << "R value" << setw(8) << "G value" << setw(8) << "B value" << endl;
    cout << left << setw(8) << "-------" << setw(8) << "-------" << setw(8) << "-------" << setw(8) << "-------" << endl;
    for(int i = 0; i < Colors.size(); i++)
    {
        cout  << left << setw(8) << i + 1 << setw(8) << Colors[i].redhue << setw(8) << Colors[i].greenhue << setw(8) << Colors[i].bluehue << endl;
    }

}
