#include <stdio.h>

#define	N	1000

/**
 * ��ͨ������Ŀ���-�����㷨�ļ�ʵ�֡��㷨������һ���������飬
 * ���ҽ�����p��Ԫ�غ͵�q��Ԫ�����ʱ��p��q����ͨ�ġ�
 *
 * ��ʼʱ�������е�i��Ԫ��ֵΪi��Ϊʵ��p��q�ĺϲ����������Ǳ������飬
 * ��������pԪ��ֵ��ȵ�Ԫ�ظ�ΪqԪ��ֵ�����߰�������qԪ��ֵ��ȵ�Ԫ��
 * ��ΪpԪ��ֵ��
 */

int main(){
	int i, p, q, t, id[N];

	for(i=0; i<N; i++){
		id[i] = i;
	}

	//��������������⣬��scanf�Ļ��з�\nȥ����
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
