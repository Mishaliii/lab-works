#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct mp{
  struct mp *prev;
  char music[20];
  char artist[20];
  struct mp *nxt;
}*head=0,*temp,*n_node;

//fn declarations
void ins();
void dis();
void search();
void del();


void main()
{
  int ch,k;
  do
  {
    printf("\n1.Insertion\n2.Display\n3.Play a music\n4.Delete\nEnter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        ins();
        break;
      case 2:
        dis();
        break;
			case 3:
				search();
				break;
			case 4:
				del();
				break;
      default:
        printf("\nInvalid choice");
        break;
    }
    printf("\nDo you want to continue(0/1): ");
    scanf("%d", &k);
  } while(k==1);
  
}

void ins()
{
  temp=head;
  n_node = (struct mp *)malloc(sizeof(struct mp ));
  printf("Enter music name: ");
  scanf("%s",n_node->music);
  printf("Enter artist name: ");
  scanf("%s",n_node->artist);
  n_node->prev=NULL;
  n_node->nxt=NULL;
  if(head==0)
  {
    temp=n_node;
    head=temp;
  }
  else
  {
    while(temp->nxt!=NULL)
    {
      temp=temp->nxt;
    }
    temp->nxt=n_node;
    n_node->prev=temp;
  }
  temp=n_node;
}

void dis()
{
  if(head==NULL)
    printf("Music Player is empty");
  else
  {
    temp=head;
    while(temp!=NULL)
    {
      printf("Music-> %s\t",temp->music);
      printf("Artist-> %s\n",temp->artist);
      temp=temp->nxt;
    }
  } 
}

void search()
{
  char chch;
	int f=0;
	if(head==NULL)
		printf("Music Player is empty");
	else
	{
		char music[20];
		temp=head;
		printf("Enter music to be played: ");
		scanf("%s",music);
		while(temp!=NULL)
		{

			if(!strcmp(music,temp->music))
			{
				f=1;
        printf("\t\t\t----Playing music----\n");
				printf("\t\tmusic: %s\t",temp->music);
				printf("\t\tartist: %s\n",temp->artist);
        while(1)
        {
          printf("\n\t\tP : Previous song\tN : Next song\tS : Stop\nEnter choice: ");
          scanf(" %c", &chch);
          switch (chch)
          {
            case 'P':
              if (temp->prev != NULL)
              {
                temp = temp->prev;
                printf("\n\t\t\t----Playing previous song----\n");
                printf("\t\tMusic: %s\t", temp->music);
                printf("\t\tArtist: %s\n", temp->artist);
              }
              else
              {
                printf("\n\t\tYou are at the first song, no previous song available.\n");
              }
              break;
            case 'N':
              if (temp->nxt != NULL)
              {
                temp = temp->nxt;
                printf("\n\t\t\t----Playing next song----\n");
                printf("\t\tMusic: %s\t", temp->music);
                printf("\t\tArtist: %s\n", temp->artist);
              }
              else
              {
                printf("You are at the last song, no next song available.\n");
              }
              break;
            case 'S':
              printf("Stoping playback");
              return;
            default:
              break;
          }
        }
			}
			temp=temp->nxt;
		}
		if(f==0)
			printf("Music not found");
    {
      
      
    }
	}
	
}


void del()
{	
	struct mp *del_music;
	int f=0;
	if(head==0)
		printf("Music Player is empty");
	else
	{
		temp=head;
		char music[20];
		printf("Enter music to be deleted: ");
		scanf("%s",music);
		while(temp!=NULL)
		{
			if(!strcmp(temp->music,music))
			{
				f=1;
				del_music=temp;
				if(temp==head)
				{
					head=temp->nxt;
					if(head) head->prev=NULL;
				}
				else if(temp->nxt==NULL)
				{
					temp->prev->nxt=NULL;
				}
				else
				{
					temp->prev->nxt=temp->nxt;
					temp->nxt->prev=temp->prev;
				}
				free(del_music);
				printf("%s deleted successfully!",music);
				break;
			}
			temp=temp->nxt;
		}
		if(f==0)
			printf("Music does not exist");
	}
}

