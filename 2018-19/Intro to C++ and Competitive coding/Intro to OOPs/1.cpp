#include "arrow.h"

int main() {
	arrow obj;

	cout<<"Size: "<<obj.size()<<endl;
	cout<<"Is empty: "<<obj.empty()<<endl;
	cout<<"Element at second position: "<<obj.at(1)<<endl;
	cout<<"Last element of our arrow: "<<obj.back()<<endl;
	cout<<"First element of our arrow: "<<obj.front()<<endl<<endl;

	for(int i = 0; i < 5; i++)
		obj.push_back(i);

	for(int i = 0; i < 5; i++)
		cout<<obj.at(i)<<' ';

	cout<<endl<<endl;

	cout<<"Size: "<<obj.size()<<endl;
	cout<<"Is empty: "<<obj.empty()<<endl;
	cout<<"Element at second position: "<<obj.at(1)<<endl;
	cout<<"Last element of our arrow: "<<obj.back()<<endl;
	cout<<"First element of our arrow: "<<obj.front()<<endl<<endl;

	obj.clear();

	cout<<"Size: "<<obj.size()<<endl;
	cout<<"Is empty: "<<obj.empty()<<endl;
	cout<<"Element at second position: "<<obj.at(1)<<endl;
	cout<<"Last element of our arrow: "<<obj.back()<<endl;
	cout<<"First element of our arrow: "<<obj.front()<<endl;

	obj.clear();
}
