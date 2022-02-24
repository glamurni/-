

#include <iostream>
using namespace std;
class Trangle
{
public:
	void Display(void);
	void GetTime(int  &a, int &b,int &c);
	void SetTime(int a1, int b1, int c1);
	//void Display(void);
	Trangle(void);

private:
	int a;
	int b;
	int c;
	
};

int main()
{
	Trangle ap;
	//int a, b, c;
	ap.Display();
	//cout << "ap==";
	//ap.GetTime(P = a + b + c);
	//cout << "ap";
	return 0;
}
Trangle::Trangle(void)
{
	SetTime(3, 4, 5);
}
void Trangle::Display(void)
{
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;
	cout << "c=" << c<<endl;
}
void Trangle::GetTime(int &a1, int &b1, int &c1)
{
	
	a1 = a;
	b1 = b;
	c1 = c;
}

void Trangle::SetTime(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}



