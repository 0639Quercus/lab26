#include<iostream>
#include <set>

using namespace std;

int count(int data[], unsigned int size){
	set<int> countSet(data,data + size);
	/*for(unsigned int i = 0; i < size; i++){
		countSet.insert(data[i]);
	}*/
	return countSet.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
