#include <iostream>

class Ball 
{
private:
    std::string m_colour = "black";
    int m_radius = 10.0;

public:
    Ball() = default;

    Ball(std::string colour, int radius) 
    {
        m_colour = colour;
        m_radius = radius;
    }

    Ball(std::string colour) 
    {
        m_colour = colour;
    }

    Ball(int radius) 
    {
        m_radius = radius;
    }

    void print() 
    {
        std::cout << "Colour: " << m_colour << "\t radius: " << m_radius << std::endl;
    }
};


int main()
{
	Ball def;
	def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
 
	return 0;
}