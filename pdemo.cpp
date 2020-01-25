

#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
	char str[80];
	char token[80];
	char *p, *q;

	cout << "Enter a sentence: ";
	fgets(str, sizeof(str), stdin);
	p = str;

	while(*p) {
		q = token; 
		while(*p!=' ' && *p) {
			*q = *p;
				q++; p++;
			}
			if(*p) p++;
			*q = '\0'; 
			cout << token << '\n';
		}
		return 0;
	}