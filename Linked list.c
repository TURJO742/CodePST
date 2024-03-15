#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	char id[1000];
	double cgpa;
	struct node *next;

}*head;
int count = 1;
void create_list(int n)
{
	struct node *newnode, *temp;
	head = (struct node*)malloc(sizeof(struct node));
	printf("Enter the ID of the 1st student\n");
	scanf("%s", &head->id);
	printf("Enter the CGPA of the 1st student\n");
	scanf("%lf", &head->cgpa);
	head->next = NULL;
	temp = head;
	for (int i = 1; i < n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter the ID of student %d\n", i + 1);
		scanf("%s", &newnode->id);
		printf("Enter the CGPA of student %d\n", i + 1);
		scanf("%lf", &newnode->cgpa);
		newnode->next = NULL;
		temp->next = newnode;
		temp = newnode;
	}



}
void display()
{
	count = 1;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("Student %d ID:%s and CGPA: %lf\n", count, temp->id, temp->cgpa);
		count++;
		temp = temp->next;
	}

}
void search()
{
	struct node *temp = head;
	printf("Enter the id Number to search\n");
	char a[1000];
	scanf("%s", &a);
	while (temp != NULL)
	{
		if (strcmp(temp->id, a) == 0)
		{
			printf("ID: %s and CGPA: %lf\n", temp ->id, temp->cgpa);
			break;
		}
		else
		{
			temp = temp->next;
		}
	}
	if (temp == NULL)
		printf("Not found\n");
}
void edit()
{
	struct node *temp = head;
	printf("Enter the id Number to edit\n");
	char a[1000];
	scanf("%s", &a);
	while (temp != NULL)
	{
		if (strcmp(temp->id, a) == 0)
		{
			printf("Enter the new CGPA\n");
			double cgpa;
			scanf("%lf", &cgpa);
			temp->cgpa = cgpa;
			display();
			break;
		}
		else
		{
			temp = temp->next;
		}
	}
	if (temp == NULL)
		printf("Ivalid id\n");
}
void insert()
{
	printf("Enter the index number to insert\n");
	int n;
	scanf("%d", &n);
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the new ID\n");
	scanf("%s", &newnode->id);
	printf("Enter the new CGPA\n");
	scanf("%lf", &newnode->cgpa);
	if (n == 1)
	{
		newnode->next = head;
		head = newnode;
	}
	else if (n > 1 && n <= count)
	{
		struct node *temp = head;
		for (int i = 1; i < n - 1; i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else if (n == count + 1)
	{
		struct node *temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->next = NULL;
	}
	else
	{
		printf("Invalid input");
	}
	display();
}
void deletee()
{
	int n;
	printf("Enter the index number to delete\n");
	scanf("%d", &n);
	struct node *temp;
	if (n == 1)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	else if (n > 1 && n < count)
	{
		struct node *prev;
		temp = head;
		for (int i = 1; i < n; i++)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		free(temp);
	}
	else if (n == count)
	{
		temp = head;
		struct node *prev;
		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		free(temp);
	}
	display();
}
int main()
{
	int n;
	scanf("%d", &n);
	create_list(n);
	display();
	search();
	edit();
	insert();
	deletee();

}
