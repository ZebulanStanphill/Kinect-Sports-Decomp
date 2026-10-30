extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_8267BE38(void *);

typedef struct Node_826E42E8 {
    struct Node_826E42E8 *prev;
    struct Node_826E42E8 *next;
    unsigned int key;
} Node_826E42E8;

typedef struct List_826E42E8 {
    char pad0[0x1c];
    struct { Node_826E42E8 *prev; Node_826E42E8 *next; } head;
    char crit[1];
} List_826E42E8;

void fn_826E42E8(List_826E42E8 *l, unsigned int key)
{
    Node_826E42E8 *n;
    RtlEnterCriticalSection(l->crit);
    for (n = l->head.next; n != (Node_826E42E8 *)&l->head; n = n->next) {
        if (n->key == key) {
            n->prev->next = n->next;
            n->next->prev = n->prev;
            fn_8267BE38(n);
            break;
        }
    }
    RtlLeaveCriticalSection(l->crit);
}
