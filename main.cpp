/*

this is what happens with no default constructor ( an implicit constructor is invoked)

and no default member variable values ....

big ball!

*/

#include <iostream>

struct Ball 
{
    std::string m_colour;
    int m_radius;
   
    void print() 
    {
        std::cout << "Colour: " << m_colour << "\t radius: " << m_radius << "\n";
    }
};


int main()
{
	Ball def;
	def.print();

	return 0;
}