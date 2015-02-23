#include <stdio.h>

int search(int a[], int v, int l, int r);

main(){
	int a[11] = {-232, -34, 0, 23, 45, 270, 420, 3423, 8453, 10000, 12321};
	int index = -2;

	index = search(a, 8453, 0, 10);
	printf("%d\n", index);
}

int search(int a[], int v, int l, int r){
	while(r >= l){
		int mid = (l+r) / 2;
		if(a[mid] == v){
			return mid;
		}
		if(a[mid] > v){
			r = mid-1;
		}else {
			l = mid+1;
		}
	}
	return -1;
}

