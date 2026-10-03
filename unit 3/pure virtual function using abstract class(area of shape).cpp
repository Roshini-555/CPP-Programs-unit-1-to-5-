//implement pure virtual function and calculate the area of different shapes by using abstract class
#include<iostream>
using namespace std;
class shape {
	public:
		virtual void area() = 0;
};
class Rectangle : public shape {
	public:
		void area(){
			int l = 5, b = 10;
			cout << "area of rectangle is :" << l*b << endl;
		}
};
class Circle : public shape {
	public:
		void area(){
			float r = 5;
			cout << "area of circle is :" << 3.14*r*r << endl;
		}
};
int main(){
	Rectangle r;
	Circle c;
	r.area();
	c.area();
}
