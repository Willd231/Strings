/* William Dellinger
	September 9th 2025

Functions I plan to implement today:

	1. strcmp
	2. strncmp 
	3. strcoll 
	4. strxfrm

This has run on to September 11th :/
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int not_strcmp(const char * str1, const char * str2){ //negative if s1 < s2 positive if s2 < s1 0 if equal 
	
	int i = 0; 
	while(str1[i] == str2[i] && str1[i] != '\0'){

	i++;
	
	}
	
	int difference = str1[i] - str2[i];

	return difference;

	
}

//compares chars 
int not_strncmp(const char * str1, const char * str2, int n){
	int i = 0;
	while(n!=0 && str1[i] == str2[i]){
	i++;
	n--; 
}
return str1[i] - str2[i];
}

//in default c it does the same thing as strcmp but in other like language codes it handles accented letters and stuff - locale rules 	
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

