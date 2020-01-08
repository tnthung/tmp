#include <iostream>
#include <string>


class CHello
{
	std::string name;

public:
	void say_hi()
	{
		std::cout << "Hi, everyon" << std::endl;
	}

	void say_hi(std::string tmp)
	{
		name = tmp;

		std::cout << "Hi, " << name << std::endl;
	}
};


int main()
{
	CHello tmp;

	tmp.say_hi();
	tmp.say_hi("Tim");
}
