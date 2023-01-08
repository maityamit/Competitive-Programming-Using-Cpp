#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> v(5,2);
	v.push_back(9);
	for(auto it:v) cout<<it<<" ";
	cout<<endl;
	
	
	cout<<v.at(1);
	v.pop_back();
	v.erase(v.begin()+1);
	for(auto it:v) cout<<it<<" ";
	cout<<endl;
	v.erase(v.begin()+2);
	for(auto it:v) cout<<it<<" ";
	cout<<endl;
	
	return 0;
}
