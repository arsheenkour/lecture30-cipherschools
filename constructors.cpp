#include<iostream>
using namespace std;
class Complex
{
	private:
		float real;
		float img;
		public:
			void set_parameters(int real, int img)
			
			{
				this->real=real;
				this->img=img;
			}
		void distancefromOrigin()
		{
			float dist;
			dist=real*real+img*img;
			cout<<"the distamve from origin is "<<dist;
			return ;
		}
		
};
class New_account
{
	public:
		int amount;
		int days;
		New_account()
		{
			amount=0;
			days=0;
			cout<<"constructore called;"<<endl;
		}
		~New_account()
		{
			cout<<"destroyed";
		}
	
		
};

int main()
{
	New_account a;
	cout<<"mathematics"<<endl;

/*	Complex a;
	a.set_parameters(3,4);
	a.distancefromOrigin();*/
	return 0;
}