#include     <iostream>
#include     "box.h"
#include     "userbox.h"
using namespace std;


userBox::userBox(const userBox &other)
{
    auto    int     index;

    boxArr = new Box[other.m_dimension];
    m_dimension = other.m_dimension;

    for(index = 0; index < m_dimension; ++index)
        {
        boxArr[index] = other.boxArr[index];
        //boxArr[index].SetHeight(other.boxArr[index].GetHeight());
        //boxArr[index].SetWidth(other.boxArr[index].GetWidth());
        //boxArr[index].SetWeight(other.boxArr[index].GetWeight());
        }
}

void    userBox::GetInfo(void)
{
    auto    int     height, width, weight;
    auto    int     index;

    for(index = 0; index < m_dimension; ++index)
    {
    cout << "BOX #" << index + 1 << ": " << endl;

    cout << "what is the: \n Height: ";
    cin >> height;
    boxArr[index].SetHeight(height);

    cout << " Width: ";
    cin >> width;
    boxArr[index].SetWidth(width);

    cout << " Weight: ";
    cin >> weight;
    boxArr[index].SetWeight(weight);
    }
}


void    userBox::DispInfo(int numBox)
{
    cout << "BOX #" << numBox  << endl
         << "Area: " << boxArr[numBox - 1].GetArea()
         << endl
         << "Perimeter: " << boxArr[numBox - 1].GetPerimeter()
         << endl
         << "WeightL " << boxArr[numBox - 1].GetWeight()
         << endl << endl;
}


ostream&    operator << (ostream &outStream, userBox &rhs)
{
    //lhs.DispBoxes(outStream);
    outStream << endl;
    rhs.DispBoxes(outStream);
    return outStream;

}


void    userBox::DispBoxes(ostream &outStream)
{
    auto    int     index;

    for(index = 0; index < m_dimension; ++index)
    {
    outStream << "BOX #" << index + 1 << endl;

    outStream << " Height: " << boxArr[index].GetHeight()
              << "\n Width: " << boxArr[index].GetWidth()
              << "\n Weight: " << boxArr[index].GetWeight()
              << endl;
    }

}


void    userBox::operator++(void)
{
    auto    int     index;

    for(index = 0; index < m_dimension; ++index)
        {
        boxArr[index].IncrementBox();
        }

}



