/*
 * globalVariable.h
 *
 *  Created on: 20.12.2017
 *      Author: jokertwo
 */

#ifndef GLOBALVARIABLE_H_GUARD
#define GLOBALVARIABLE_H_GUARD
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE -1
#define DELIMETER "#"
#define MAX_LINE 200

#define FREE_ITEM 0
#define ROOT 1
#define ROOT_BACK_UID -111

#define VOID -100


int debug;
#define debugs(args ...) if(debug) fprintf(stderr,args);
#define error_log(...) { fprintf(stderr, __VA_ARGS__); fflush(stderr); }

//soubor s file-systemem
char fileName[20];

#endif /* GLOBALVARIABLE_H_ */

