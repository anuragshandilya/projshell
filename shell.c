/*Code for project C-shell.
Author - Anurag Shandilya
Start Date- 16-10-2013
*/
    #include <stdio.h>
    #include <sys/types.h>
    #include <dirent.h>
    #include <malloc.h>
     
    char *ch, *ch1;
	DIR *dp;
    struct dirent *ep;

int cd(char addr[])
{
	dp = opendir(addr);
	if(dp!=NULL)
	{
		while(ep = readdir(dp))
		{
			puts(ep->d_name);
			puts("\t");
			
		}
	(void) closedir(dp);
	}
	return 0;
}

int main( int argc, char* argv[])
{

	if(argc!=3)
	{
		printf("Invalid number of arguments,type 'HELP' for help");
	}
	else
	{
		if(strcmp(argv[1],"cd")== 0)
		{
			cd(argv[2]);
		}
		else
		{
			puts("Dude....");
		}
	
	}
}
