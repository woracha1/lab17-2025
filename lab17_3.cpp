#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(const vector<int>& v){
	cout << "[";
	for(unsigned int i = 0; i < v.size(); i++){
		cout << v[i];
		if(i == v.size() - 1) cout << "]";
		else cout << " ";
	}
}

int dotProduct(const vector<int>& v1, const vector<int>& v2){
	int sum = 0;
	for(unsigned int i = 0; i < v1.size(); i++) sum += v1[i] * v2[i];	
	return sum;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}