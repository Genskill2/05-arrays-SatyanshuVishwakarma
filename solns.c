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


float average(int arr[],int num) {
	int sum=arr[0];
	for(int i=0;i<num-1;i++) {
		int sum =sum + arr[i];
	}
	return (float)(sum/num);
}


int mode(int arr[],int n) {
	int x=1,nmode=arr[0];
	for(int i=0;i<n-1;i++) {
		int count=1;
		for(int j=i+1;j<n;j++) {
			if(arr[i]==arr[j])
				count++;
		}
		if(count>x){
			x=count;
			nmode=arr[i];
		}
	}
	return nmode;
}


int factors(int n,int ret[]) {
	int x=0;
	for(int i=2;i<=n;i++) {
		while(n%i==0) {
			ret[x]=i;
			x++;
			n=n/i;
		}
	}
	return x;
}



