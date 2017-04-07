/*Filipe Gonçalves
  URI - 1072*/
#include <stdio.h>
int main(void){
	int n, x, in, out;
	scanf("%i", &n);
	out = 0;
	in = 0;
	while(n--){
		scanf("%i", &x);
		if (x > 9 && x < 21)
			in += 1;
        else
            out += 1;
	}
	printf("%i in\n", in);
	printf("%i out\n", out);
	return 0;
}
