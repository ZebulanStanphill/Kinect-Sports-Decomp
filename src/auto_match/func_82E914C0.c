typedef struct Node_82E914C0 {
    struct Node_82E914C0 *next;
    int value;
} Node_82E914C0;

typedef struct {
    Node_82E914C0 *head;
    Node_82E914C0 *tail;
    Node_82E914C0 *freeHead;
    Node_82E914C0 *freeTail;
    int count;
} List_82E914C0;

int fn_82E914C0(List_82E914C0 *list, int *out, int index)
{
    Node_82E914C0 *n;
    Node_82E914C0 *p;
    int i;

    *out = 0;
    if (index < list->count) {
        if (index == 0) {
            n = list->head;
            list->head = n->next;
            if (list->head == 0) {
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
            i--;
            p = list->head;
            for (; i > 0; i--) {
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
    return 0;
}
