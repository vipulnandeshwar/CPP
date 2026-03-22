// to store the file
#include <stdio.h>
void main(){
	int rollno=10;
	int marks=90;
	FILE *file=fopen("data.txt","w");
	if(file==NULL){
		printf("error opening file");
		return;
	}
	fprintf(file,"%d\n",rollno);
	fprintf(file,"%d\n",marks);
	printf("data is enterd into file");
	fclose(file);
}
