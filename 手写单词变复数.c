#include <stdio.h>
#include <string.h>

int main()
{
	char word[110];
	while(scanf("%s",word)==1)
	{
		if(strcmp(word,"#")==0)
		{
			break;
		 }
		 int s=strlen(word); 
		 if(s>=2&&(strcmp(word+s-2,"sh")==0
		 ||strcmp(word+s-2,"ch")==0))
		 {
		 	strcat(word,"es");
		 }
		 else if(s>=1&&(strcmp(word+s-1,"s")==0
		 ||strcmp(word+s-1,"x")==0||strcmp(word+s-1,"o")==0))
		 {
		 	strcat(word,"es");
		 }
		 
		 else if(strcmp(word+s-1,"y")==0)
		 {
		 	word[s-1]='i';
		 	strcat(word,"es");
		 }else
		 {
		 	strcat(word,"s");
		 }
		 printf("%s\n",word);
	}
	
	
	return 0;
 } 
