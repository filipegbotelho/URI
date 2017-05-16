#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
	double A, B, resp;
	
	cin >> A >> B;
	
	resp = ((B/A)*100)-100;
	
	printf("%.2f%%\n", resp);
	
	
	return 0;
}