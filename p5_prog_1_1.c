#include <stdio.h>

#define	N	1000

/**
 * 连通性问题的快速-查找算法的简单实现。算法基础是一个整形数组，
 * 当且仅当第p个元素和第q个元素相等时，p和q是连通的。
 *
 * 初始时，数组中第i和元素值为i，为实现p和q的合并操作，我们遍历数组，
 * 把所有与p元素值相等的元素改为q元素值，或者把所有与q元素值相等的元素
 * 改为p元素值。
 */

int main(){
	int i, p, q, t, id[N];

	for(i=0; i<N; i++){
		id[i] = i;
	}

	//遇到输出缓存问题，将scanf的换行符\n去掉了
	//while(scanf("%d %d\n", &p, &q) == 2){
	while(scanf("%d %d", &p, &q) == 2){
		if(id[p] == id[q]){
			continue;
		}
		
		t = id[p];
		for(i=0; i<N; i++){
			if(id[i] == t){
				id[i] = id[q];
			}
		}
		printf("%d %d\n", p, q);
		for(i=0; i<N; i++){
			printf("%d ", id[i]);
		}
		printf("\n");
	}

	return 0;
}
