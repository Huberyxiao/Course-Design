#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include <string.h>

nodemovie * getfilemovie();
//¼ì²éÅÅµ²ÊÇ·ñÖØ¸´ 
int  removiecheck(char name[],char id[],int month,int day,int hour,int room){
	nodemovie *head=getfilemovie();
	nodemovie *p=head;
	p=p->next;
	while(p!=NULL){
		if(month==p->month){
			if(day==p->day){
				if(hour==p->hour||hour==p->hour+1||hour==p->hour+2||hour==p->hour+3){
					if(room==p->room){
						return 1;
					}
				}
			}
		}	
		p=p->next;
	}
	return 0;
}
