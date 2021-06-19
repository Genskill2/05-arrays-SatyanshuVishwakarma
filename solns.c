/* Enter your solutions in this file */
#include <stdio.h>
#include<assert.h>

int max(int x[],int count) {
	int lar=x[0];
	for(int i=0;i<count-1;i++) {
		if(x[i+1]>lar)
			lar=x[i+1];
	}
	return lar;
}

int min(int x[],int count) {
	int sml=x[0];
	for(int i=0;i<count-1;i++) {
		if(x[i+1]<sml)
			sml=x[i+1];
	}
	return sml;
}
