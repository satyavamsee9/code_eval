#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* link;
};

struct node* head;

void insert_node(int x);
void print_linked_list();

int main()
{
	int n,i,x;
	head = NULL;
	printf("How many numbers? : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element : ",i+1);
		scanf("%d",&x);
		insert_node(x);
		print_linked_list();
	}
	return 0;
}

void insert_node(int x)
{
	struct node* temp = (struct node*)(malloc(sizeof(struct node)));
	temp->data = x;
	temp->link = NULL;	//temp->link = NULL;  //if(head!=NULL) temp->link = head;
	if(head == NULL) 
	{
		head = temp;
		return;
	}
	struct node* temp1 = head;
	while(temp1->link != NULL)
	{
		temp1 = temp1->link;
	}
	temp1->link = temp;
}

void print_linked_list()
{
	struct node* temp = head;
	printf("Linked list is : ");
	while(temp != NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->link;
	}
	printf("\n");
}
