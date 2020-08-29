#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	string s, t;
	cin >> s >> t;
	int val=0, cnt=0;
	for(int i=0; i<(int)s.size(); ++i) {
		int tmp=i;
		cnt=0;
		if((int)s.size()-i<(int)t.size())
			break;
		for(int j=0; j<(int)t.size(); ++j) {
			if(s[i]==t[j])
				cnt++;
			i++;
		}
		i=tmp;
		val=max(val, cnt);
	}
	cout << (int)t.size()-val << "\n";
}
