typedef struct Node_82CAACB8 {
    struct Node_82CAACB8 *next;
    int value;
} Node_82CAACB8;

typedef struct List_82CAACB8 {
    Node_82CAACB8 *head;
    Node_82CAACB8 *tail;
    Node_82CAACB8 *freeHead;
    Node_82CAACB8 *freeTail;
    int count;
} List_82CAACB8;

int fn_82CAACB8(List_82CAACB8 *list, int *out, int index)
{
    Node_82CAACB8 *n;
    Node_82CAACB8 *p;
    int i;

    if (out == 0) {
        return 0;
    }
    *out = 0;
    if (list == 0) {
        return 0;
    }
    if (index >= list->count) {
        return 0;
    }
    if (index == 0) {
        n = list->head;
        p = n->next;
        list->head = p;
        if (p == 0) {
            list->tail = 0;
        }
    } else if (index == -1 && list->count == 1) {
        n = list->tail;
        list->head = 0;
    } else {
        i = index;
        if (index == -1) {
            i = list->count - 1;
        }
        p = list->head;
        for (i = i - 1; i > 0; i--) {
            p = p->next;
        }
        n = p->next;
        p->next = n->next;
        if (index == -1) {
            list->tail = p;
        }
    }
    *out = n->value;
    n->next = list->freeHead;
    list->freeHead = n;
    if (list->freeTail == 0) {
        list->freeTail = n;
    }
    list->count--;
    return 1;
}
