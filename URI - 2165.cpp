#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	string frase;

	getline(cin,frase);
	
	printf(frase.size() > 140 ? "MUTE\n" : "TWEET\n");
	
	return 0;
}