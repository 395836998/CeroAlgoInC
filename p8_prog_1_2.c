#include <stdio.h>

#define	N	1000

/**
 * 连通性问题的快速-合并算法的简单实现。
 * 在一个没有环的结构中，每个对象指向同一集合中的另一个对象。
 * 要确定两个对象是否在同一个集合中，只需跟随每个对象指针，直到到达指向自身的一个对象。
 * 当且仅当这个过程使两个对象到达同一对象时，这两个对象在同一集合中。
 */

int main(){
	int i, p, q, j, id[N];

	for(i=0; i<N; i++){
		id[i] = i;
	}

	//遇到输出缓存问题，将scanf的换行符\n去掉了
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
