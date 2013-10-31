/*
 Using c99
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

// Constant Declarations
const char* TAB = "^I";


// Variable Declarations
int rc=0;
int look; // lookahead ;
// char look; // lookahead 


// Read New Character From Input Stream
int get_char(void)
{
	look = getc(stdin); // i'm confused as to why this promotes a char to an int. Or rather, what's the point?
	if(look<0)
		return 1;
	return 0;
}


// Report an Error
int error(const char* s)
{
	printf("\n");
	printf("^G Error: %s", s);
	return 0;
}


// Report Error and Halt
int c_abort(const char* s)
{
	error(s);
	exit(1);
	return 0; // should never actually hit this. Is it needed ?
}


// Report What Was Expected
int expected(const char* s)
{	
	char result[255];
	char * r=result;
	strcat(result,s);
	strcat(result," Expected");
	c_abort(r);
	return 0;
}

// Match a Specific Input Character
int match(char x)
{
	if(look == x)
		get_char();
	else{ 
		const char* s = &x; 
		expected(s);
	}
	return 0;
}



// THE NEXT TWO FUNCTIONS ARE IN CTYPE.H AND NOT NEEDED
bool is_alpha(char c)
{
	c=toupper(c);
	return isalpha(c);
}
bool is_digit(char c)
{
	return isdigit(c);
}







// Get an Identifier
char get_name(void)
{
	if( isalpha(look) ==0) expected("Name");
	get_char();
	return toupper(look);
	
}


char get_num()
{
	if(isdigit(look)==0) expected("Integer");
	get_char();
	return look;
}

int emit(const char* s)
{
	printf("\t%s",s);
	return 0;
}

int emit_ln(const char* s)
{
	printf("\t%s\n",s);
	return 0;
}

int init(void)
{
	get_char();
}






void main(void)
{
 int rc=0;
 rc=init();
}
