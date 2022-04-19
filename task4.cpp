
#include"tasks_rk1.h"
#include <iostream>
using namespace std;
void buildTree(int height)
{
    for (int i = 0; i < height; i++)
        {
            for (int j = 1; j < height - i; j++)
            {
                cout << ' ';
            }

            for (int j = height - 2 * i; j <= height; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
