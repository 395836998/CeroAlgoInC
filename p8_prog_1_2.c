#include <stdio.h>

#define	N	1000

/**
 * ��ͨ������Ŀ���-�ϲ��㷨�ļ�ʵ�֡�
 * ��һ��û�л��Ľṹ�У�ÿ������ָ��ͬһ�����е���һ������
 * Ҫȷ�����������Ƿ���ͬһ�������У�ֻ�����ÿ������ָ�룬ֱ������ָ�������һ������
 * ���ҽ����������ʹ�������󵽴�ͬһ����ʱ��������������ͬһ�����С�
 */

int main(){
	int i, p, q, j, id[N];

	for(i=0; i<N; i++){
		id[i] = i;
	}

	//��������������⣬��scanf�Ļ��з�\nȥ����
	//while(scanf("%d %d\n", &p, &q) == 2){
	while(scanf("%d %d", &p, &q) == 2){
		for(i=p; i!=id[i]; i=id[i]);
		for(j=q; j!=id[j]; j=id[j]);

		if(i == j){
			continue;
		}
		id[i] = j;
		printf("%d %d\n", p, q);
		for(i=0; i<N; i++){
			printf("%d ", id[i]);
		}
		printf("\n");
	}

	return 0;
}
