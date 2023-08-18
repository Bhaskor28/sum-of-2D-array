// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define sll signed long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define            pbk                pop_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int n,m;

// void s1(){
	
// 	cin>>n;
// 	int m;
// 	cin>>m;
// 	vector<vector<int>>v(n+1);
// 	while(m--){

// 		int x,y;
// 		cin>>x>>y;
// 		v[x].pb(y);
// 		v[y].pb(x);
// 	}
// for(int i=1;i<=n;i++){

// 	for(int j=0;j<v[i].size();j++){
// 		cout<<v[i][j]<<" ";
// 	}
// 	cout<<endl;
// }

// //dfs(1,v);



// }
void s2(){
	cout<<ceil(1.50)<<endl;// it will be take the greater value;
	cout<<round(1.611)<<endl;// it resize the after point position value to set 10
	// if this greater then 5;

	double pi=3.14159;
	cout<<setprecision(0)<<pi<<endl;
	cout<<setprecision(4)<<pi<<endl;
	cout<<setprecision(5)<<pi<<endl;
	cout<<fixed<<setprecision(3)<<pi<<endl;

}

void s3(){
	int n,m;
	cin>>n>>m;
	int mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}

	for(int i=1;i<n;i++){
		mat[0][i]=mat[0][i-1]+mat[0][i];
		mat[i][0]=mat[i-1][0]+mat[i][0];
	}
	for(int i=1;i<n;i++){

		for(int j=1;j<m;j++){

			mat[i][j]=mat[i-1][j]+mat[i][j-1]+mat[i][j]-mat[i-1][j-1];
		}
	}


for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	


}

int main(){

s3();

	return 0;
}