#include<bits/stdc++.h>
using namespace std;
long long cnt;
int sett[400003];
int rankk[400003];
int find(int u){
	if(sett[u]==-1) return u;
	return sett[u]=find(sett[u]);
}
int unionn(int u,int v){
	u=find(u);
	v=find(v);
	if(rankk[u]>rankk[v]) swap(u,v);
	sett[u]=v;
	rankk[v]+=rankk[u];
	++cnt;
}
int main(){
	int n,m,q,r,c;
	int ans=0;
	scanf("%d%d%d",&n,&m,&q);
	for(int i=1;i<=n+m;++i){
		sett[i]=-1;
		rankk[i]=1;
	}
	while(q--){
		scanf("%d%d",&r,&c);
		int rr=r;
		int cc=n+c;
		if(find(rr)!=find(cc)) unionn(rr,cc);
	}
	set <int> s;
	for(int i=1;i<=n+m;++i){
		s.insert(find(i));
	}
	printf("%d",s.size()-1);
}
