#include<iostream>
#include<vector>
#include<deque>
#include<queue>
using namespace std;
int main(){
	
	// pop_back()
	// pop_front()
	// push_back()
	// push_front()
	
	deque<int> first(5,3);
	for(auto it:first) cout<<it<<" ";
	cout<<endl;
	cout<<first.size();
	first.push_back(123);
	first.push_front(34);
	for(auto it:first) cout<<it<<" ";
	cout<<endl;
	
	
	return 0;
}
