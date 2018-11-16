#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Invalid number of arguments. (loop <executable>)\n");
		exit(0);
	}
	else{
		while(1){
			system(argv[1]);
		}
	}
	return 0;
}