#include <iostream>
#include <stdio.h>
#include <complex>


using namespace std;

//-------------------------------------------------------------------------
template <class TEST>

inline void swapo(TEST& d, TEST& e)
		{
			TEST temp = d;
			d = e;
			e = temp;
		}

//--------------------------------------------------------------------
class punto              //define class
{
	private:
	
		float px;  
		float py;
		 

	public:
		void readp()  //set data
		{
			cout<<"ingrese el punto coordenada x"<<endl;
			cin>>px;
			cout<<"ingrese el punto coordenada y"<<endl;
			cin>>py	;	

				
		}
		
		float getx(){
			return px;	}
	
		float gety(){
			return py;	}

};
//------------------------------------------------------------------------
class pendiente{

	private: 
		float dx;
		float dy;
		float m;
		
	public: 	
	
		void set (float x, float y){
			dx=x;
			dy=y;
		}
	
		float inc(){
			m=dy/dx;
		}
		
		float getm(){
			return m;
		}
};


//-------------------------------------------------------------------------
int main()
{	punto p1;
	punto p2;
	pendiente m1;
 	p1.readp();
	p2.readp();
	m1.set(p2.getx()-p1.getx(),p2.gety()-p1.gety());
	m1.inc();
	
	cout<<"Las coodenada del punto 1 son : "<<p1.getx()<<","<< p1.gety() <<endl;
	cout<<"Las coodenada del punto 2 son : "<<p2.getx()<<","<<p2.gety()<<endl;
	cout<<"La pendiente de la recta que une los puntos es :"<<m1.getm()<<endl;
	
	
	float p11 =p1.getx(),p12 =p1.gety(),p21 =p2.getx(),p22 =p2.gety();
	swapo(p11,p21);
	swapo(p12,p22);
 
	m1.set(p22-p12,p21-p11);
	m1.inc();
	
	cout<<"Las nuevas coodenada del punto 1 son : "<<p11<<","<< p12 <<endl;
	cout<<"Las nuevas coodenada del punto 2 son : "<<p21<<","<<p22<<endl;
	cout<<"La nueva pendiente de la recta que une los puntos es :"<<m1.getm()<<endl;	
	
	}