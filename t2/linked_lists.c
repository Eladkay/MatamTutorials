#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int data;
	struct node* next; // recursive definition
} *Node;

int main() {
	Node node1 = malloc(sizeof(*node1));
	Node node2 = malloc(sizeof(*node2));
	Node node3 = malloc(sizeof(*node3));
	node1->data = 1;
	node1->next = node2;
	node2->data = 2;
	node2->next = node3;
	node3->data = 4;
	node3->next = NULL;
	
	// Going over a linked list:
	Node current = node1;
	while(current != NULL) {
		printf("%d\n", current->data);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return 0;
}

