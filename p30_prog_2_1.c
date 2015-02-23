#include <stdio.h>


int search(int a[], int v, int l, int r);

main(){
	int a[10] = {2, 43, 20, 878, 100, -34, 0, -5, 21};
	int index = -2;

	index = search(a, 0, 0, 9);
	printf("%d\n", index);
}

int search(int a[], int v, int l, int r){
	int i;
	for(i=l; i<=r; i++){
		if(a[i] == v){
			return i;
		}
	}
	return -1;
}
