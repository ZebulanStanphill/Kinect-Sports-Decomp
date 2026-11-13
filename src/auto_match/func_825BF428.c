typedef struct Node_825BF428 {
    struct Node_825BF428 *next;
    struct Node_825BF428 *prev;
} Node_825BF428;
typedef struct Vec_825BF428 {
    int **first;
    int **last;
    int **end;
} Vec_825BF428;
typedef struct Obj_825BF428 {
    char pad0[4];
    Node_825BF428 *head;
    int size;
    char padc[4];
    Vec_825BF428 v;
} Obj_825BF428;

extern void fn_8265CA20(void *);

void fn_825BF428(Obj_825BF428 *o)
{
    Vec_825BF428 *v = &o->v;
    Node_825BF428 *h;
    Node_825BF428 *n;
    Node_825BF428 *nx;
    int **p;

    if (v->first != 0) {
        for (p = v->first; p != v->last; p++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    h = o->head;
    n = h->next;
    h->next = h;
    o->head->prev = o->head;
    o->size = 0;
    while (n != o->head) {
        nx = n->next;
        fn_8265CA20(n);
        n = nx;
    }
    fn_8265CA20(o->head);
}
