/*
William Dellinger,
Monday - September 8th 2025 



Functions I plan to implement today:

 1.strlen - returns the length of a string in bytes before the terminating char ✅
 2.strcpy - copies a string to a destination this includes the terminating char ✅
 3.strncpy - copies up to n characters from source to dest and uses term char if source is shorter but can omit if source is longer  
 4.strcat - concatenates/appends source string to end of destination string overwriting its /0 
 5.strncat - concatenates/appends up to n characters onto the end of a dest string and always adds the terminating character
*/


#include <stdio.h>
#include <stdlib.h>


int not_strlen(char str[]){

	if(str == NULL){
		return 0;
	}
	
	int count = 0;
	
	while(str[count] != '\0'){
		count+=1; 
	}
	
	return count; 
}


//need to finish third condition - just returns rn want to make it optimized to allow users to not worry about allocation 
void not_strcpy(char dest[], char src[]){
	
	int len_dest = not_strlen(dest); //length of string1
	int len_src = not_strlen(src); //length of string2
	int diff = len_dest - len_src; //difference in lengths
	
	//strings are same length
	if(diff == 0){
	for(int i = 0; i < len_src; i++){
		dest[i] = src[i];
	}
	}
	
	
	//string 1 is longer than string 2
	else if(diff >= 1){
	for(int i = 0; i < len_src; i++){
		dest[i] = src[i];
	}
	}

	//string 1 is shorter than string 2
	
	else if(diff <= -1){
		

	return;


}	 
}





void not_strncpy(int n, char dest[], char src[]){
	if(n == 0){
		return; 
	}

	int src_len = not_strlen(src);
	int dest_len = not_strlen(dest);
	int diff = dest_len - src_len; 

	//perfect condition - strings are equal length and n is equal to the lengths 
	if(diff == 0 && src_len == n){
		for(int i = 0; i < n; i++){
			dest[i] = src[i]; 
		}
	}

	else if(diff >= 1){
		if(n <= src_len){	
			for(int i =0; i < n;){
				if(src[i + 1] == '\0' ){


					
				}
			}
	}
	}
}


















int main(int argc, char * argv[]){

	if(argc!=3){
		printf("Usage: 3 args");
		return -1;
	}
	not_strcpy(argv[1], argv[2]);

	printf("%s", argv[1]);
	

	

	return 0;  

}
