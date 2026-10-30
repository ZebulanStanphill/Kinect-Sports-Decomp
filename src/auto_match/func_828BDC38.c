struct Impl_828BDC38;
typedef struct VT_828BDC38 { void *s0, *s1, *s2; void (*del)(struct Impl_828BDC38 *, int); } VT_828BDC38;
typedef struct Impl_828BDC38 { VT_828BDC38 *vt; } Impl_828BDC38;
typedef struct Func_828BDC38 { double align[2]; Impl_828BDC38 *impl; } Func_828BDC38;
typedef struct Node_828BDC38 { struct Node_828BDC38 *next, *prev; Func_828BDC38 f; } Node_828BDC38;
typedef struct List_828BDC38 { Node_828BDC38 *head; unsigned int size; } List_828BDC38;
extern void fn_8265CA20(void *p);

static void Tidy(Func_828BDC38 *f)
{
    Impl_828BDC38 *i = f->impl;
    if (i != 0) {
        i->vt->del(i, i != (Impl_828BDC38 *)f);
        f->impl = 0;
    }
}

void fn_828BDC38(List_828BDC38 *l)
{
    Node_828BDC38 *h = l->head;
    Node_828BDC38 *p = h->next;
    h->next = h;
    l->head->prev = l->head;
    l->size = 0;
    while (p != l->head) {
        Node_828BDC38 *n = p->next;
        Tidy(&p->f);
        fn_8265CA20(p);
        p = n;
    }
}
