typedef struct VT { void *a; void (*rel)(void *, int); } VT;
typedef struct Obj { int pad; VT *vt; } Obj;
typedef struct Node { struct Node *next; int pad[4]; int obj; } Node;
typedef struct List { Node *head; } List;
typedef struct Mgr { char pad[0x2c]; List list; } Mgr;
extern void fn_82FA9208(Obj *);
extern void fn_82FABA50(List *, Node *, int);
void fn_82FAB1D8(Mgr *m)
{
    Node *n;
    List *l = &m->list;
    Obj *o;
    for (n = l->head; n; n = n->next) {
        if (n->obj != 0) {
            ((Obj *)n->obj)->vt->rel(&((Obj *)n->obj)->vt, 0);
            o = (Obj *)n->obj;
            n->obj = 0;
            if (o)
                fn_82FA9208(o);
        }
    }
    do {
        n = l->head;
        if (n)
            fn_82FABA50(l, n, 0);
    } while (n);
}
