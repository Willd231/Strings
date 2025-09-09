/* William Dellinger
	September 9th 2025

Functions I plan to implement today:

	1. strcmp
	2. strncmp 
	3. strcoll 
	4. strxfrm
*/


#include <stdio.h>
#include <stdlib.h>

int not_strcmp(const char * str1, const char * str2){ //negative if s1 < s2 positive if s2 < s1 0 if equal 

	len_1 = strlen(str1);
	len_2 = strlen(str2);
	
	
	int difference = str1[0] - str2[0];

	return difference;

	
}


int not_strncmp(const char * str1, const char * str2, int n){

	
}

int not_strcoll(const char * str1, const char * str2){
	
}


int main(int argc, char * argv[]){

	if(argc != 3){
		printf("error: usage");
		return -1;
	}
	
	int result = not_strcmp(argv[1], argv[2]);
	printf("%d", result);
	return 0;
}

