typedef struct S {
    int x;
    int pad[16];
    unsigned int k;
    int rest[5];
} S;

static unsigned char less(S *l, S *r)
{
    return l->k > r->k || (l->k == r->k && l->x < r->x);
}

static void swap(S *a, S *b)
{
    S t = *a;
    *a = *b;
    *b = t;
}

void fn_82440568(S *first, S *mid, S *last)
{
    if (less(mid, first)) {
        swap(mid, first);
    }
    if (less(last, mid)) {
        swap(last, mid);
    }
    if (less(mid, first)) {
        swap(mid, first);
    }
}
