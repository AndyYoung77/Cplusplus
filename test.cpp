#include<iostream>

class Point{
private:
	int x;
	int y;
public:
	void show(){
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
		};
	void set(int a, int b){
		x = a;
		y = b;
		};
	#if 1
	Point(){
		std::cout<<"testhello"<<std::endl;
		}
	#endif
};

int main()
{
	Point hehe;
	hehe.set(2,18);
	hehe.show();
	
	return 0;
}
