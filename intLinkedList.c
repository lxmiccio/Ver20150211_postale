#include <stdio.h>
#include <stdlib.h>

#include "intLinkedList.h"


/*
 * Restituisce la lunghezza della lista.
 */
int size(intLinkedList list) {
    int r=0;
    
    // TODO Implementa il corpo della funzione
    while(list != NULL)
    {
        r++;
        list = list->next;
    }
        
    return r;
}


/*
 * Aggiunge un nuovo elemento all'inizio della lista.
 * Restituisce il puntatore aggiornato al primo elemento.
 * Restituisce NULL in caso di errore.
 */
intLinkedList insertAtBeginning(intLinkedList list, int newKey) {
    
    // TODO Implementa il corpo della funzione
    intLinkedList newElement = (intLinkedList)malloc(sizeof(intLLElement));
    if(newElement != NULL)
    {
        newElement->key = newKey;
        newElement->next = list;
        list = newElement;
    }
    else
    {
        list = NULL;
    }
    return list;
}


/*
 * Stampa tutti gli elementi della lista a schermo, in un'unica linea, 
 * separandoli con punto e virgola e uno spazio.
 * 
 * Esempio:
 * 1; -2; 3; 4;  
 * 
 */
void printList(intLinkedList list) {
    
    // TODO Implementa il corpo della funzione
    while(list != NULL)
    {
        printf("%d; ", list->key);
        list = list->next;
    }
    
    return;
}


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
intLinkedList empty(intLinkedList list) {
    
    intLinkedList elementDelete;
    while(list != NULL)
    {
        elementDelete = list;
        list = list->next;
        free(elementDelete);
    }
    return NULL;
}