#include    <iostream>
using namespace std;

#include    "userbox.h"

int main(void)
{
    auto    int dimension, boxNum;

    cout << "How many boxes? ";
    system("pause");
    cin >> dimension;

    auto    userBox     myBox(dimension);
    myBox.GetInfo();


    cout << "Which box info would u like to see? ";
    cin >> boxNum;

    myBox.DispInfo(boxNum);

    auto    userBox     yourBox(myBox);

//  cout << "\nHere is the incremented dimensions of myBox: \n";
//  ++myBox;

//  cout << myBox;

    cout << "Here are all of the boxes! \n";
    cout << "myBox: \n" << myBox;
    cout << endl;
    cout << "yourBox: \n" << yourBox;
    cout << endl;

    cout << "Here is your box INCREMENTED! \n";
    ++yourBox;

    cout << "yourBox: \n" << yourBox;
    cout << endl;

return 0;
}
