typedef struct Rep Rep;
typedef struct Node Node;
struct Node {
    Node *next;
    Node *prev;
    void *ptr;
    Rep *rep;
};
typedef struct List {
    Node *head;
    unsigned int size;
} List;
typedef struct Alloc Alloc;
typedef struct AllocVtbl {
    void *f[10];
    void (*free)(Alloc *, void *);
} AllocVtbl;
struct Alloc {
    AllocVtbl *vt;
};
extern void fn_822315A0(Rep *r);
extern Alloc *fn_825089A0(void);

void fn_828C1318(List *l)
{
    Node *n = l->head->next;
    Node *next;
    Alloc *a;
    l->head->next = l->head;
    l->head->prev = l->head;
    l->size = 0;
    while (n != l->head) {
        next = n->next;
        if (n->rep != 0) {
            fn_822315A0(n->rep);
        }
        a = fn_825089A0();
        a->vt->free(a, n);
        n = next;
    }
}
