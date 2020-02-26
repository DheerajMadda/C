struct Node
{
	struct Node *next;
	int data;
};

struct Node* push(struct Node* head,int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		struct Node* t = head;
		while (t->next!=NULL){
			t=t->next;
		}
		t->next=temp;
	}
	return head;

}
struct Node* pop(struct Node* head,int x){
	if(head==NULL){
		printf("List is empty\n");
	}
	else{
		if(head->next==NULL && head->data == x){
			head=NULL;
		}
		if(head->data==x){
			head = head->next;
		}
		struct Node* t = head;
		struct Node* p;
		while (t->data!=x && t->next!=NULL){
			p=t;
			t=t->next;

		}

		if(t->next==NULL t->data==x){
			p->next=NULL;
		}
		p->next = t->next;
	}
	return head;
}


void display(struct Node* head){
	struct Node* t = head;
		while (t->next!=NULL){
			printf("%d\n",t->data)
			t=t->next;
		}
		printf("%d\n",t->data);

}



int main(){
	struct Node *head=NULL;

	head=push(head,5);
	head=push(head,6);
	head=push(head,7);
	head = pop(head,6);

}
