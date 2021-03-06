#include <stdio.h>

#define	N	10

/**
 * 连通性问题的加权快速-合并算法的简单实现。
 * 即合并树时，权重小的树合并到权重大的树上。
 */

int main(){
	int i, p, q, j, id[N], sz[N];

	for(i=0; i<N; i++){
		id[i] = i;
		sz[i] = 1; //初始化每个节点的权重都为1
	}

	//遇到输出缓存问题，将scanf的换行符\n去掉了
	//while(scanf("%d %d\n", &p, &q) == 2){
	while(scanf("%d %d", &p, &q) == 2){
		for(i=p; i!=id[i]; i=id[i]);
		for(j=q; j!=id[j]; j=id[j]);

		if(i == j){
			continue;
		}
		
		if(sz[i] < sz[j]){
			//表示i树权重小于j树，将i树合并到j树上
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
