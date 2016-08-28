
#ifndef BOX
#define BOX

#include     <iostream>
using namespace std;

class Box
{
public:

//constructors
Box(int height = 5, int width = 5, int weight = 22) {m_height = height;
                                    m_width = width; m_weight = weight;}

//Box(const Box &other){m_height = other.m_height; m_width = other.m_width;
//                   m_weight = other.m_weight;}

//member functions
double  GetArea(void){return m_height * m_width;}
double  GetPerimeter(void){return ((m_height * 2) + (m_width * 2));}

int     GetHeight(void){return m_height;}
int     GetWidth(void){return m_width;}
int     GetWeight(void){return m_weight;}
void    SetHeight(int height){m_height = height;}
void    SetWidth(int width){m_width = width;}
void    SetWeight(int weight){m_weight = weight;}
void    IncrementBox(void){++m_height; ++m_width; ++m_weight;}


private:
    int m_height;
    int m_width;
    int m_weight;

};



#endif //BOX




