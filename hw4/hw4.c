#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char* text;
    struct Node *next;
};


struct item* init(char* text) {
    struct item* root = (struct Node*)malloc(sizeof(struct item));
    root -> text = text;
    root -> next = NULL;
    return root;
}

void add(struct item* root, char* text) {
    if (!root) {
        return;
    }
    struct item* i = root;
    struct item* last = init(text);
    while (i -> next != NULL) {
        i = i -> next;
    }
    i -> next = last;
}

void pop(struct item* root) {
    if (!root) {
        return;
    }
    struct item* i = root;
    while (i -> next != NULL) {
        root = i;
        i = i -> next;
    }
    free(i -> text);
    free(i);
    root -> next = NULL;
}

void show(struct item* root) {
    if (!root) {
        return;
    }
    struct item* i = root;
    while (i != NULL) {
        printf("%s\n", i -> text);
        i = i -> next;
    }
}

void delete(struct item** root) {
    if (!*root) {
        return;
    }
    struct item* i = *root;
    for (; i!= NULL; ) {
        free(i -> text);
        struct item* temp = i -> next;
        free(i);
        i = temp;
    }
    *root = NULL;
}

int get(struct item* root, char* text) {
    if (!root) {
        return -2;
    }
    struct item* i = root;
    int index = 0;
    while (i != NULL) {
        if (strcmp(i->text, text) == 0) {
            return index;
        }
        i = i -> next;
        index++;
    }
    return -1;
}


int main() {
    char command[255];
    scanf("%s", command);
    struct item* node;
    while (strcmp(command, "EXIT") != 0) {
        if (strcmp(command, "INIT") == 0) {
            char* list = (char*) malloc(sizeof(char) * 255);
            scanf("%s", list);
            node = init(list);
        }
        else if (strcmp(command, "ADD") == 0) {
            char* element = (char*) malloc(sizeof(char) * 255);
            scanf("%s", element);
            add(node, element);
        }
        else if (strcmp(command, "POP") == 0) {
            pop(node);
        }
        else if (strcmp(command, "GET") == 0) {
            char element[255];
            scanf("%s", element);
            printf("%d\n", get(node, element));
        }
        else if (strcmp(command, "SHOW") == 0) {
            show(node);
        }
        else if (strcmp(command, "DELETE") == 0) {
            delete(&node);
        }
        else if (strcmp(command, "EXIT") == 0) {
            return 0;
        }
        scanf("%s", command);
    }
    return 0;
}
