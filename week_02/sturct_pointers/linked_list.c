#include<stdio.h>
#include<stdlib.h>

#define SIZE 3

typedef struct StudentInfo {
	char name[50];
	int age;
	struct StudentInfo *next;
}Student;

int main() {
	Student *head = NULL;
	head = calloc(1,sizeof(*head));

	head->age = -1;
	head->next = NULL;
	
	Student *current = NULL;
	current = head;

	for(int i=0; i<SIZE; i++) {
		Student *tmp = NULL;
		tmp = calloc(1, sizeof(*tmp));
		scanf("%s", tmp->name);
		scanf("%d", &tmp->age);
		current->next = tmp;
		current = current->next;
	}

	current = head->next;
	while(current != NULL) {
		printf("name: %s\n", current->name);
		printf("age: %d\n", current->age);
		current = current->next;
	}

	current = head;
	while(current != NULL) {
		Student *p = NULL;
		p = current;
		current = current->next;
		free(p);
	}

	return 0;
}

