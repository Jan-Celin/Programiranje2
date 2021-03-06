#include <stdio.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG(...) printf(__VA_ARGS__)
#endif

typedef struct Node {
    struct Node *next;
    int val;
} node;

int add(node **head, int val) {
    node *new;
    new = (node *) malloc(sizeof(node));
    if (!new) return -1;

    new->val = val;
    new->next = *head;
    *head = new;
    return 0;
}

int convert(node *head) {
    node *trenutni=NULL;
    if(head == NULL) return -1;
    for(trenutni = head; trenutni->next != NULL; trenutni = trenutni->next);
    trenutni->next = head;
    return 0;
}

int check(node *head) {
    node *trenutni=NULL;
    int istina = 0;
    if(head == NULL) return -1;
    for(trenutni = head; trenutni->next != NULL; trenutni = trenutni->next){
        if(trenutni == head && istina == 1) return 1;
        if(trenutni == head && istina == 0) istina = 1;
    }
    return 0;
} 

int print(node *head) {
    node *t;

    if (head==NULL) return -1;
    t = head;
    printf("Lista: ");
    do {
        printf ("%d ", t->val);
        t = t->next;
    } while (t!=head);
    printf("\n");
    return 0;
}

int main() {
    node *head = NULL;
    char menu_choice;
    int val, retval;

    do {
        //DEBUG("\n(d) dodaj - insert\n(c) pretvori - convert\n(p) provjeri - check\n(i) - ispis - print\n(e) Exit\n");

        scanf(" %c", &menu_choice);
        switch (menu_choice) {
            case 'd':
                scanf("%d", &val);
                retval = add(&head, val);
                if (retval==-1) printf("Alokacija nije uspjela.\n");
                break;
            case 'c':
                retval = convert(head);
                if (retval==-1) printf("Ne moze se pretvoriti prazna lista.\n");
                break;
            case 'p':
                retval = check(head);
                if (retval==-1) printf("Lista je prazna.\n");
                else if (retval==0) printf("Lista je obicna.\n");
                else if (retval==1) printf("Lista je kruzna.\n");
                break;
            case 'i':
                print(head);
                break;
        }
    } while(menu_choice!='e');

    return 0;
}