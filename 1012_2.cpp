#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,q,r,c;
	scanf("%d%d%d",&n,&m,&q);
	set<int>s;
	while(q--){
		scanf("%d%d",&r,&c);
		int rr=r;
		int cc=n+c;
		s.insert(rr);
		s.insert(cc);
	}
	printf("%d",n+m-s.size());
}
