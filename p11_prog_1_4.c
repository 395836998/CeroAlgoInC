#include <stdio.h>

#define	N	10

/**
 * ��ͨ��������ȷ�·��ѹ���ļ�Ȩ����-�ϲ��㷨�ļ�ʵ�֡�
 */

int main(){
	int i, p, q, j, id[N], sz[N];

	for(i=0; i<N; i++){
		id[i] = i;
		sz[i] = 1; //��ʼ��ÿ���ڵ��Ȩ�ض�Ϊ1
	}

	//��������������⣬��scanf�Ļ��з�\nȥ����
	//while(scanf("%d %d\n", &p, &q) == 2){
	while(scanf("%d %d", &p, &q) == 2){
		for(i=p; i!=id[i]; i=id[i]){
			//��i��ֵ�޸�Ϊ��i��ֵΪλ�õ�ֵ����i���ĸ��ڵ㣩
			id[i] = id[id[i]];
		}
		for(j=q; j!=id[j]; j=id[j]){
			id[j] = id[id[j]];
		}

		if(i == j){
			continue;
		}
		
		if(sz[i] < sz[j]){
			//��ʾi��Ȩ��С��j������i���ϲ���j����
			id[i] = j;
			sz[j] += sz[i];
		}else{
			id[j] = i;
			sz[i] += sz[j];
		}
		printf("%d %d\n", p, q);

		for(i=0; i<N; i++){
			printf("%d ", id[i]);
		}
		printf("\n");
	}

	return 0;
}
