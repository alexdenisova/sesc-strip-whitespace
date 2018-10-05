#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000], a[1000][1000], l[3];
	int i=0, j=0, k=0,n;

	scanf ("%[^\n]s", str);
	int len = strlen(str);
	if(sscanf(str, "%s", l)==EOF){
    		l[0]='\0';
    		printf("%c", l[0]);
  	}else{
	while (sscanf(str, "%s", a[j])!=EOF){
		while(str[i]==' '){
			i++;
		}
		while((str[i]==a[j][k]) && (a[j][k]!='\0')){
			i++;
			k++;
		}
		for(n=i; n<len; n++){
			str[n-i]=str[n];
		}
		for(n=len; (n-i)<len; n++){
			str[n-i]='\0';
		}
		len=strlen(str);
		k=0;
		i=0;
		j++;
	}

	for(n=0; n<(j-1); n++){
		printf("%s ", a[n]);
	}
	printf("%s", a[j-1]);
	}
	return 0;
}
