#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b;
	char op;
	cin >> a >> b >> op;
	if(op == '+') cout << a + b;
	else if(op == '-') cout << a - b;	
	else if(op == '*') cout << a * b;
	else cout << fixed << setprecision(6) << (double) a / b;
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	solve();
	return 0;
}