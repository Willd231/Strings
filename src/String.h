#ifndef STRING
#define STRING



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
		
	printf("error, buffer overflow");
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

	/* Conditions brainstorm : 
	s = 5 d = 5 n = 5 --> copy over whole source
	s = 5 d = 5 n = 4 --> copy over 4/5 chars of the source fill the last value with the null char 
	
	
	*/




	//perfect condition - strings are equal length and n is equal to the lengths 
	if(diff == 0){
		if(src_len == n){
		for(int i = 0; i < n; i++){
			dest[i] = src[i]; 
									}
									
									}

		
		else if(n > src_len){
			printf("buffer overflow:");
			return;
		}
		
	}

	
	else if(diff >= 1){ //if the length of the destination string is larger than the source
	
			
			for(int i =0; i < dest_len;i++){
				if(src[i] == '\0' ){
					for(int j = 0; j < i - n; j ++){
						dest[j] = '\0';
					}
					dest[i] = src[i]; 
				}
			}
	
	}
}









char * not_strcat(char source[], char destination[]){

	int src_len = not_strlen(source);
	int dest_len = not_strlen(destination);

	int total = dest_len +  src_len + 2; 

	
	char * result = malloc(sizeof(char) * total + 1); 

	for(int i = 0; i < total; i++){
		if(i < dest_len){
			result[i] = destination[i];
		}
		else if(i == total - 1){
			result[i] = '\0';
		}
		else{
			result[i] = source[i - dest_len];
		}
	}

return result;




}








//adds n chars to the dest string and always adds term char
char * not_strncat(char source[], char destination[], int n){

	int total = not_strlen(destination) + n + 1;
	char * result = malloc(sizeof(char) * total);
	
	
		
	
	for(int i = 0; i < total; i++){
		if(i < not_strlen(destination)){
			result[i] = destination[i]; 
		}
		else if(i >= not_strlen(destination)){
				result[i] = source[i];
			
			}
		
			

		}
	result[total - 1] = '\0'; 

	
}




#endif
