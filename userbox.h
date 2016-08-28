
#ifndef BOX_OVERLOAD
#define BOX_OVERLOAD

#include     <iostream>
#include    "box.h"
using namespace std;


class userBox
{
public:

//constructors
userBox(int dimension = 2){m_dimension = dimension;
                        boxArr = new Box[dimension];}
userBox(const userBox &other);

~userBox(void){cout << "Desctructor...\n"; delete []boxArr;}

//member functions
void    GetInfo(void);
//void  operator++(void){++m_height; ++m_width; ++m_weight;}
void    DispInfo(int numBox);
int     GetDimension(void){return m_dimension;}
void    DispBoxes(ostream &outStream);
void    operator++(void);
//overloaded operator


private:
    Box     *boxArr;
    int     m_dimension;

};


ostream&    operator << (ostream &outStream, userBox &rhs);


#endif //BOX_OVERLOAD






