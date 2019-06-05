//Created by Brandon Barnes

#include <iostream>
#include <vector>



using namespace std;

class intVectorShenanigans;

class intVectorShenanigans{
	vector<int> containedData;
	
	public:
	int size(){
		return this->containedData.size();
	}
	
	int getValue(int position){
		return this->containedData[position];
	}
	
	bool comparator(intVectorShenanigans first, intVectorShenanigans second){
		if(first.size() != second.size()){
			return false;
		}
		int temp = first.size();
		for(int i=0; i<temp; i++){
			if(first.getValue(i) != second.getValue(i)){
				return false;
			}
		}
		return true;
	}
	
	void addInt(int toAdd){
		this->containedData.push_back(toAdd);
		return;
	}
	
	intVectorShenanigans(vector<int> instantiationData){
		this->containedData = instantiationData;
	}
	
	~intVectorShenanigans(){
		this->containedData.clear();
	}
	
};

int main(){
	
	vector<int> tempOne;
	vector<int> tempTwo;
	
	return 0;
}