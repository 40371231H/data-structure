#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class DManager {
	private:
		int n;
		int data[10];
	public:
		DManager();
		void read();
		void show();
		int max();
		int min();
	private:

};

DManager::DManager() {
	n = 10;
}


void DManager::read() {
	for(int i = 0;i < n;i++){
		data[i]=rand()%1000;
	}
}

void DManager::show(){
	for(int i = 0;i < n;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
}

int DManager::max(){
	int maxnum;
	for(int i = 0;i < n;i++){
		if(i==0)
			maxnum=data[i];
		else if(data[i]>maxnum)
			maxnum=data[i];
	}
	
	return maxnum; 
}

int DManager::min(){
	int minnum;
	for(int i = 0;i < n;i++){
		if(i==0)
			minnum=data[i];
		else if(data[i]<minnum)
			minnum=data[i];
	}
	
	return minnum; 
	
}

int main(int argc, char** argv) {
	DManager d;
	d.read();
	d.show();
	cout<<"max = "<<d.max()<<endl;
	cout<<"min = "<<d.min()<<endl;
	
	return 0;
}
