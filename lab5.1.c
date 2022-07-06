#include<stdio.h>   
#include<stdlib.h>  
#define size 5
int front = -1, rear = -1;  
int queue[size];  
void insert(){  
	int item;  
	printf("Enter the element:");  
	scanf("%d",&item);      
	if(rear == size-1){  
		printf("OVERFLOW\n");  
		return;  
	}  
	if(front == -1 && rear == -1){  
		front = 0;  
		rear = 0;  
	}  
	else{  
		rear++;  
	}  
	queue[rear] = item;  
	printf("Value inserted\n");  
}  
void delete(){  
	int item;   
	if (front == -1 || front > rear){  
		printf("\nUNDERFLOW\n");  
		return;  
	}  
	else{  
		item = queue[front];
		printf("Deleted value is %d\n",item);
		if(front == rear){  
			front = -1;  
			rear = -1 ;  
		}  
		else{  
			front = front + 1;  
		}  
	}  
} 
void display(){  
	int i;  
	if(rear == -1){  
		printf("\nEmpty queue\n");  
	}  
	else{   
		printf("Elements in the queue are:\n");  
		for(i=front;i<=rear;i++){  
			printf("%d\n",queue[i]);  
		}     
	}  
}   
 
void main (){  
    int choice;
    printf("Queue implementation using array\n");  
    printf("Main Menu");  
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");    
    while(choice != 4){
        printf("\nEnter your choice:");  
        scanf("%d",&choice);  
        switch(choice){  
            case 1:{  
	       	insert();  
            	break;
            } 
            case 2:{  
               delete();  
               break;
            }  
            case 3:{ 
               display();  
               break;
            }  
            case 4:{
            	printf("Exiting...\n");
               exit(0);
            	break;
            }
            default:{
               printf("Invalid choice\n");  
            }  
        }  
    }         
}
