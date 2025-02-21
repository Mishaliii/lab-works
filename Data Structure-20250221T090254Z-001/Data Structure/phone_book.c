#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact{
char name[50];
char phnum[15];
struct contact*next;
};

void add_contact(struct contact **head) {
struct contact *new_contact = (struct contact *)malloc(sizeof(struct contact));
new_contact->next = NULL;

printf("enter the name:");
scanf("%s" ,new_contact->name);
printf("enter the phnum:");
scanf("%s" ,new_contact->phnum);

if(*head == NULL)
{
*head=new_contact;
}
 else {
 struct contact *temp = *head;
 while(temp->next != NULL) {
 temp=temp->next;
 }
 temp->next =new_contact;
 }
 }
 void display_contact(struct contact *head)
 {
 struct contact *temp=head;
 while (temp!=NULL)
 {
 printf("name: %s, phnum: %s\n", temp->name ,temp->phnum);
 temp=temp->next;
 }}
 
 void search_contact(struct contact *head)
 {
 char search[15];
 struct contact *temp=head;
 printf("enter the number to be search:");
 scanf("%s" ,search);
 int found=0;
 
 while(temp!=NULL){
 if(strcmp(temp->phnum,search) == 0){
 printf("phnum belongs to:%s\n",temp->name);
 found = 1;
 break;
 }
 temp = temp->next;
 }
 if (!found) {
 printf("phone number not found \n") ;
 }
 }
 
 int main() {
 struct contact *head = NULL;
 int choices;
 
 while (1){
 
 printf("PHONE BOOK MENU\n");
 printf("1. ADD CONTACT:\n");
 printf("2. DISPLAY CONATCT:\n");
 printf("3. SEARCH CONTACT:\n");
 printf("4. EXIT:\n");
 printf("Enter your choices:\n");
 scanf("%d",&choices);
 
 switch (choices)
 {
 case 1:
 add_contact(&head);
 break;
 case 2:
 display_contact(head);
 break;
 case 3:
 search_contact(head);
 break;
 case 4:
 exit (0);
 default:
 printf("please try again\n");
 }}
 return 0;
 }

