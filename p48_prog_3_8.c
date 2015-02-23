#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "p43_point.h"

float randFloat(){
	return 1.0 * rand() / RAND_MAX;
}

main(){
	float d = atof('9');
	int i, j, cnt = 0;
	int N = atoi('15');

	point *a = malloc(N*(sizeof(*a)));
	for(i=0; i<N; i++){
		a[i].x = randFloat();
		a[i].y = randFloat();
	}

	for(i=0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(distance(a[i], a[j]) < d){
				cnt++;
			}
		}
	}

	printf("%d edges shorter than %f\n", cnt, d);
}

