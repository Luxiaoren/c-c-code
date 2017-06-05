#include "system.h"
void save()

	{
		FILE *fp;
		fp=(fopen("link_list","wb"));
		if(fp==NULL)
		{
			printf("file wrong!!!\n");
			exit(0);
		}
		while(head!=NULL)
		{
			if(fwrite(head,sizeof(struct student)+1,1,fp)!=1)
			{
				printf("file write wrong!\n");
			}
			head=head->next;
		}
		fclose(fp);

	}
	void open()
{
	
	struct student *p1,*p2;
		FILE *fp;
		fp=(fopen("link_list","rb"));
		if(fp==NULL)
		{
			printf("file error!\n");
			exit(0);
		}
		while(1)
		{
			p1=(struct student*)malloc(sizeof(struct student));

			fread(p1,sizeof(struct student)+1,1,fp);

			p2=head;
			p1->next=p2;
			head=p1;
			if(feof(fp))
				break;
		}
		head=head->next;
		fclose(fp);
		
	}
	