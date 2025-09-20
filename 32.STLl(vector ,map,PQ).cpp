#include <bits/stdc++.h>
using namespace std;
void vect(){
	int n,i,a,even=0,odd=0;
	cin>>n;
	vector<int> v;
	for(i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	for(i=0;i<n;i++){
		if(v[i]%2==0) even+=v[i];
		else odd+=v[i];
	}
	if(odd>even) cout<<"YES\n";
	else cout<<"NO\n";
}
void map_(){
	int n,i,a;
	cin>>n;
	string s;
	map<string, double> mp;
	for(i=0;i<n;i++){
		cin>>s>>a;
		mp[s]=a;
	}
	string query;
	cin>>query;
	if(mp[query]){
		if(mp[query]>=80) cout<<"A+\n";
		else cout<<"Not A+\n";
	}
	else cout<<"NO STUDENT RECORD AVAILABLE\n";
}
void pri_queue(){
	int n,i,a;
	cin>>n;
	priority_queue<int>q;
	for(i=0;i<n;i++){
		cin>>a;
		q.push(-a);
	}
	while(!q.empty()){
		cout<<-q.top()<<" ";
		q.pop();
	}
}
int main(){
	cout<<"Enter 1 for vector, 2 for map, 3 for priority_queue\n";
	int n;
	cin>>n;
	if(n==1) vect();
	else if(n==2) map_();
	else pri_queue();
	return 0;
}
