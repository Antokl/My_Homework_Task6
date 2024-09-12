#include <windows.h>
#include <iostream>

class Example
{
private:
	int a;
public:
	int GetA()
	{
		return a;
	}

	void SetA(int newA)
	{
		a = newA;
	}
};

int main()
{
	Example temp, temp1;
	temp.SetA(30);
	temp1.SetA(45);
	std::cout << temp.GetA() << ' ' << temp1.GetA() << "\n";
}