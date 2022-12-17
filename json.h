#ifndef JSON_H
#define JSON_H

typedef enum {
	jOBJECT,
	jARRAY,
	jSTRING,
	jNUMBER,
	jTRUE,
	jFALSE,
	jNULL,
	jERROR,
	jWHITESPACE
} json_type;

typedef struct {
	void**		contents;
	char* 		rawdata;
	int 		datalen;
	json_type 	type;
} jNode;

typedef struct {
	jNode*		holder;
	int 		isInt;
	int 		ivalue;
	double 		dvalue;
} jNumber;

typedef struct {
	jNode*		holder;
	char* 		chars;
	int 		length;
} jString;

typedef struct {
	jNode*		holder;
	jNode** 	elements;
	int 		size;
} jArray;

typedef struct {
	jNode*		holder;
	jNode** 	keys;
	jNode** 	values;
	int 		size;
} jObject;


int	isjWhitespace		(char*	str);
int	isjString			(char*	str);
int	isjNumber			(char*	str);
int	isjArray			(char*	str);
int	isjObject			(char*	str);
int	isjTrue				(char*	str);
int	isjFalse			(char*	str);
int	isjNull				(char*	str);

jNode*		getjNode	(char*	node);
jString*	getjString 	(jNode*	node);
jNumber*	getjNumber	(jNode*	node);
jArray*		getjArray	(jNode*	node);
jObject*	getjObject	(jNode*	node);

void	printjNode		(jNode*	node,	inttabs);
void	printjString	(jString*	string,	inttabs);
void	printjNumber	(jNumber*	number,	inttabs);
void	printjArray		(jArray*	array,	inttabs);
void	printjObject	(jObject*	object,	inttabs);

void	freejNode		(jNode*		node);
void	freejString		(jString*	node);
void	freejNumber		(jNumber*	node);
void	freejArray		(jArray*	node);
void	freejObject		(jObject*	node);

int	isCharWhitespace	(char	ch);
char*	firstNonSpace	(char*	str);
char*	firstEndSpace	(char*	str);

#endif