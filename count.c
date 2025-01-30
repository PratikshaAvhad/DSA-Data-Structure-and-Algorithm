#include<stdio.h>
#include<stdlib.h>

struct node
 {
    int data;
    struct node *next;
};

// Function to create the linked list
struct node *create(struct node *head)
 {
    int i, n;
    struct node *newnode, *temp;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
	 {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;  // Always initialize the new node's next pointer

        if(head == NULL) 
		{
            head = newnode;  // For the first node
            temp = head;
        } else 
		{
            temp->next = newnode;  // Append the new node to the list
            temp = newnode;
        }
    }
    
    return head;
}

// Function to display the linked list
void disp(struct node *head)
 {
    struct node *temp = head;
    while(temp != NULL)
	 {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

// Function to count total nodes in the linked list
int count(struct node *head)
{
    struct node *temp;
    int cnt = 0;
    
    for(temp = head; temp != NULL; temp = temp->next)
	 {
        cnt++;
    }
    
    return cnt;
}

int main() 

{
    struct node *head = NULL;
    int cnt;

    head = create(head);  // Create the linked list
    
    printf("\nDisplaying the linked list:\n");
    disp(head);  // Display the list
    
    printf("\n\nCount total nodes:\n");
    cnt = count(head);  // Count the nodes
    printf("Total nodes: %d\n", cnt);
}

