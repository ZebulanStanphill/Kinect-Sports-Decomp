typedef struct Elem {
    int a;
    int b;
    int c;
} Elem;

typedef unsigned char (*Pred)(Elem *l, Elem *r);

static void swap(Elem *l, Elem *r)
{
    int a = l->a;
    int b = l->b;
    int c = l->c;
    l->a = r->a;
    l->b = r->b;
    l->c = r->c;
    r->a = a;
    r->b = b;
    r->c = c;
}

void fn_823DA800(Elem *first, Elem *mid, Elem *last, Pred pred)
{
    if (pred(mid, first))
        swap(mid, first);
    if (pred(last, mid))
        swap(last, mid);
    if (pred(mid, first))
        swap(mid, first);
}
