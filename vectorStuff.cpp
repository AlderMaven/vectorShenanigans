//Created by Brandon Barnes

#include <iostream>
#include <vector>



using namespace std;

class intVectorShenanigans;

class intVectorShenanigans{
	vector<int> containedData;
	
	public:
	//Returns size of containedData
	int size(){
		return this->containedData.size();
	}
	
	//returns value from containedData[position]
	int getValue(int position){
		return this->containedData[position];
	}
	
	//Returns true if sum of vector containedData is == in source and in arguement
	bool equals(intVectorShenanigans second){
		if(this->containedData.size() != second.size()){
			return false;
		}
		int temp = this->size();
		for(int i=0; i<temp; i++){
			if(this->getValue(i) != second.getValue(i)){
				return false;
			}
		}
		return true;
	}
	
	//Returns true if sum of vector containedData is > in source than in arguement
	bool isGreater(intVectorShenanigans second){
		int accumulatorOne;
		int accumulatorTwo;
		int temp = 0;
		int tempB;
		while(temp<this->size() && temp<second.size()){
			accumulatorOne += this->getValue(temp);
			accumulatorTwo += second.getValue(temp);
			temp++;
		}
		tempB = temp;
		while(temp<this->size()){
			accumulatorOne += this->getValue(temp);
			temp++;
		}
		while(tempB<second.size()){
			accumulatorTwo += second.getValue(tempB);
			tempB++;
		}
		if(accumulatorOne>accumulatorTwo){
			return true;
		}
		else{
			return false;
		}
	}
	
	//Returns true if sum of vector containedData is < in source than in arguement
	bool isLesser(intVectorShenanigans second){
		int accumulatorOne;
		int accumulatorTwo;
		int temp = 0;
		int tempB;
		while(temp<this->size() && temp<second.size()){
			accumulatorOne += this->getValue(temp);
			accumulatorTwo += second.getValue(temp);
			temp++;
		}
		tempB = temp;
		while(temp<this->size()){
			accumulatorOne += this->getValue(temp);
			temp++;
		}
		while(tempB<second.size()){
			accumulatorTwo += second.getValue(tempB);
			tempB++;
		}
		if(accumulatorOne<accumulatorTwo){
			return true;
		}
		else{
			return false;
		}
	}
	//inserts toAdd into containedData using push_back
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

//testbed
int main(){
	
	vector<int> tempOne;
	vector<int> tempTwo;
	
	for(int i = 1; i<11; i++){
		tempOne.push_back(i);
	}
	for(int i = 1; i<10; i++){
		tempTwo.push_back(i);
	}
	intVectorShenanigans A = intVectorShenanigans(tempOne);
	intVectorShenanigans B = intVectorShenanigans(tempTwo);
	if(A.equals(B)){
		cout << "is equal" << endl;
	}
	else{
		cout << "is not equal" << endl;
	}
	if(A.isGreater(B)){
		cout << "is Greater" << endl;
	}
	else{
		cout << "is not Greater" << endl;
	}
	if(A.isLesser(B)){
		cout << "is Lesser" << endl;
	}
	else{
		cout << "is not Lesser" << endl;
	}

	
	
	
	return 0;
}