/*
 * task5.c
 *
 *  Created on: 14 нояб. 2017 г.
 *      Author: michael
 */
#include <time.h>
#include <stdlib.h>

char* password(char* line){
	srand(clock());
	int arr[] = {87, 53, 82, 54, 112, 77, 48, 49, 81, 117,
				     104, 100, 84, 86, 97, 52, 85, 80, 103, 66,
					 57, 79, 99, 107, 56, 118, 98, 50, 72, 75,
					 78, 101, 115, 68, 70, 119, 88, 83, 73, 67,
					 122, 108, 51, 102, 76, 89, 65, 113, 109,
					 106, 120, 105, 69, 116, 90, 71, 110, 121,
					 114, 111, 55, 74};
	for (int i=0; i<8;i++){
		line[i] = arr[rand()%61];
	}
	return line;
}
