#include <stdio.h>
#include <string.h>

void reverse(char *ss) {
    int len, i;
    char* start, * end, temp;

    len = strlen(ss);
    start = ss;
    end = ss;

    for (i = 0; i < len - 1; i++) end++;

    for (i = 0; i < len / 2; i++) {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }
}
void ffunc(){
    char s[100],entry;
    int ent = 0, tab = 0, space = 0,i=0;
    while ((entry=getchar()) != EOF){
        s[i] = entry;
        if (s[i] == '\n'){
            ent++;
        } else if (s[i] == '\t'){
            tab++;
        } else if (s[i] == ' '){
            space++;
        }
        i++;
    }
    s[i]= '\0';
    printf(space, ent, tab);
}

void sfunc() {
    char s[100], entry;
    int i=0, flag = 0;
    while ((entry = getchar()) != EOF){
        if (entry == '\n'){
            if (flag == 0){
                s[i] = entry;
                flag = 1;
            }
        }
        else if (entry == '\t'){
            if (flag == 0){
                s[i] = '\n';
                flag = 1;
            }
        }
        else if (entry == ' '){
            if (flag == 0){
                s[i] = '\n';
                flag = 1;
            }
        }
        else {
            flag = 0;
            s[i] = entry;
        }
        i++;
    }
    s[i]= '\0';
    puts(s);
}

void tfunc(){
    char s[100], entry;
    int i=0, flag = 0;
    while ((entry = getchar()) != EOF){
        if (entry == '\n'){
            if (flag == 0){
                s[i] = entry;
                flag = 1;
            }
        }
        else if (entry == '\t'){
            if (flag == 0){
                s[i] = '\n';
                flag = 1;
            }
        }
        else if (entry == ' '){
            if (flag == 0){
                s[i] = '\n';
                flag = 1;
            }
        }
        else {
            flag = 0;
            s[i] = entry;
        }
        i++;
    }
    s[i] = '\0';
    i = 0;
    printf("histogramm");
    while(s[i]!='\0') {
        if (s[i]!='\n') {
            printf("*");
        }
        else puts("\n");
        i++;
    }

}

void qfunc(){
    char s[100], entry, toprint[500];
    int i=0, j=0;
    while ((entry=getchar()) != EOF){
        s[i] = entry;
        i++;
    }
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != '\n') {
            toprint[j] = s[i];
            toprint[j + 1] = '\0';
            j++;
        }
        else {
            if (j > 80) puts(toprint);
            j = 0;
        }

    }
}

void efunc(){
    char s[100], entry, toprint[500];
    int i = 0, j = 0;
    while ((entry=getchar()) != EOF){
        s[i] = entry;
        i++;
    };
    printf("Reversed");
    for (i = 0; i < strlen(s); i++) {
        if (s[i] != '\n') {
            toprint[j] = s[i];
            toprint[j + 1] = '\0';
            j++;
        }
        else {
            reverse(toprint);
            puts(toprint);
            j = 0;
        }
    }

}
int main() {
    return 0;
}
