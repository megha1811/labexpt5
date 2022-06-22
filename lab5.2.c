#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
	int data;   
	struct node *next;  
};  
struct node *front;  
struct node *rear;   
void insert(){  
	struct node *ptr;  
	int item; 
	ptr = (struct node *) malloc (sizeof(struct node));  
	if(ptr == NULL){  
		printf("OVERFLOW\n");  
		return;  
	}  
	else{   
		printf("Enter value:");  
		scanf("%d",&item);  
		ptr -> data = item;  
		if(front == NULL){  
			front = ptr;  
			rear = ptr;   
			front -> next = NULL;  
			rear -> next = NULL;  
		}  
		else{  
			rear -> next = ptr;  
			rear = ptr;  
			rear->next = NULL;  
		}  
	}  
}
void delete (){  
	struct node *ptr;  
	if(front == NULL){  
		printf("UNDERFLOW\n");  
		return;  
	}  
	else{  
		ptr = front;  
		front = front -> next;  
		printf("Deleted element is %d\n",ptr->data);
		free(ptr);  
	}  
} 
void display(){  
	struct node *ptr;  
	ptr = front;      
	if(front == NULL){  
		printf("Empty queue\n");  
	}  
	else{
		printf("Elemnts in the queue are:\n");  
		while(ptr != NULL)   
		{  
			printf("%d\n",ptr -> data);  
			ptr = ptr -> next;  
		}  
	}  
}  
void main ()  
{  
	int choice;
	printf("Queue implementation using linkedlist\n");  
	printf("Main Menu\n");  
	printf("1.Enqueue\n2.Dequeue\n3.Display the queue\n4.Exit\n");  
	while(choice != 4)   
	{  
		printf("\nEnter your choice:");  
		scanf("%d",& choice);  
		switch(choice)  
		{  
			case 1:  
				insert();  
				break;  
			case 2:  
				delete();  
				break;  
			case 3:  
				display();  
				break;  
			case 4:
				printf("Exiting...");
				exit(0);  
				break;  
			default:   
				printf("Invalid choice\n");  
		}  
	}  
}  
