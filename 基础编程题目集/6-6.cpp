#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}
int FactorialSum( List L ){
	PtrToNode temp=L; 
	int data;
	int result=0;
	int single=1;
	while(temp!=NULL){
		data=temp->Data;
		for(int i=data;i>0;i--){
		single*=i;
		}
		result+=single;
		single=1;
		temp=temp->Next;
	}
	return result;
} 