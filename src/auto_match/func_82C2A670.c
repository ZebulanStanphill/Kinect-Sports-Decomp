typedef struct Node_82C2A670 {
    int pad00[9];
    struct Node_82C2A670 *next;
    struct Node_82C2A670 *prev;
    int field2c;
} Node_82C2A670;

typedef struct List_82C2A670 {
    int pad00;
    Node_82C2A670 *head;
    Node_82C2A670 *tail;
    int count;
    int pad10[8];
    void *heap;
} List_82C2A670;

typedef struct Obj_82C2A670 {
    int pad00[11];
    List_82C2A670 *list;
} Obj_82C2A670;

extern int fn_82C10B28(void *heap, int tag, void *p);

int fn_82C2A670(Obj_82C2A670 *self)
{
    List_82C2A670 *list = self->list;
    Node_82C2A670 *cur = 0;
    int hr;

    if (list->head == 0) {
        return 0;
    }
    cur = list->head;
    while (cur->next != 0) {
        Node_82C2A670 *n = list->head->next;
        list->head = n;
        n->prev = 0;
        list->count--;
        hr = fn_82C10B28(list->heap, 0x1f, &cur->field2c);
        if (hr < 0) {
            return hr;
        }
        hr = fn_82C10B28(list->heap, 0x1f, &cur);
        if (hr < 0) {
            return hr;
        }
        cur = list->head;
    }
    hr = fn_82C10B28(list->heap, 0x1f, &list->head);
    if (hr >= 0) {
        list->head = 0;
        list->tail = 0;
        list->count--;
    }
    return hr;
}
