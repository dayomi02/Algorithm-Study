#include <stdio.h>
#include <stdlib.h>

//���Ḯ��Ʈ�� ���� ����ü ���� ����
typedef struct NODE {
	int data;
	struct NODE* next;
}node;

int main(void) {
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;

	node* node1 = (node*)malloc(sizeof(node));
	node1->next = head->next;
	node1->data = 10;
	head->next = node1;

	node* node2 = (node*)malloc(sizeof(node));
	node2->next = node1->next;
	node2->data = 20;
	node1->next = node2;

	//��� ��ȯ ���� ����
	node* curr = head->next;
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	//free�Լ��� �Ҵ��� �޸� ���� ���� (������)
	free(head); free(node1); free(node2);

	return 0;
}