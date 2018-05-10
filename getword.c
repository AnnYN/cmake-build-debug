//
// Created by Ya Nan on 2018/5/9.
//

#include <stdio.h> #include <ctype.h> #include <string.h>
#define MAXWORD 100
int getword(char *, int);
int binsearch(char *, struct key *, int);
1* countCkeywords*1 maine )
{
int n;
char word[MAXWORD];
while (getword(word, MAXWORD) 1= EOP) if (isalpha(word[O]»
if «n = binsearch(word, keytab, NKEYS» >= 0) keytab[n].count++;
for (n = 0; n < NKEYS; n++) if (keytab[n].count > 0)
printf("%4d "s\n",
keytab[n].count, keytab[n].word);
return 0;
}
1* binsearch: findwordintab[0]...tab[n-1]*1 int binsearch(char *word, struct key tab[], int n) {
    int cond;
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) I 2;
        if «cond = strcmp(word, tab[mid].word» < 0)
        high = mid - 1; else if (cond > 0) low = mid + 1;
        else
            return mid;
    }
    return -1;
}
