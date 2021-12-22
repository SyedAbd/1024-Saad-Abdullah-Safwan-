#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
const int rows=4;
const int columns=4;
void printArray(int array[rows][columns]);
int main()
{
    int array[4][4]={{1,0,200,4},{1024,6,0,8},{256,0,0,2},{2,8,6,9000}};
    cout << endl;
    cout << "\t" << "\t" << "|" << "  " << "|" << "‾‾‾‾" << "|" << "  " << "‾‾‾‾‾" << "|" << "   " << "|" << "     " << "|";
    cout << endl;
    cout << "\t" << "\t" << "|" << "  " << "|" << "    " << "|" << "  " << "     " << "|" << "   " << "|" << "     " << "|";
    cout << endl;
    cout << "\t" << "\t" << "|" << "  " << "|" << "    " << "|" << "  "  << "|" << "‾‾‾‾‾" << "    " << "‾‾‾‾‾|";
    cout << endl;
    cout << "\t" << "\t" << "|" << "  " << "|" << "    " << "|" << "  "  << "|" << "     " << "    " << "     " << "|";
    cout << endl;
    cout << "\t" << "\t" << "    "  << "‾‾‾‾" << "    "  << "‾‾‾‾‾";
    cout << endl << endl << endl;
    cout << "\t" << "\t" << "\t" << "\t"  << "___________" << endl;
    cout << "\t" << "\t" << "\t" << "\t"  << "|PLAY GAME|" << endl;
    cout << "\t" << "\t" << "\t" << "\t"  << "‾‾‾‾‾‾‾‾‾‾‾" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "  "  << "______" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "  " << "|EXIT|" << endl;
    cout << "\t" << "\t" << "\t" << "\t" << "  "  << "‾‾‾‾‾‾";
    cout << endl << endl << endl;
    printArray(array);
    cout << endl << endl << endl;
}
void printArray(int array[rows][columns])
{
    for (int i=0; i<::rows; i++)
    {
        if (i==0)cout << "\t \t \t  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << endl;
        cout << "\t \t \t";
        cout << "  |  ";
        for (int j=0; j<::columns; j++)
        {
            if (array[i][j]==0)
                cout << setw(4) << " ";
            else cout << setw(4) << array[i][j];
            cout << "  |  ";
        }
        cout << endl;
        cout << "\t \t \t  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
        cout << endl;
    }
}

