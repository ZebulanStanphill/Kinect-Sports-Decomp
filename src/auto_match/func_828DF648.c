typedef struct Node { int x0; int x4; int x8; int val; } Node;
typedef struct { Node *head; } List;
typedef struct { int x0; List *list; } Self;
typedef struct { int v; } Key;
extern Key *fn_828E0268(Key *k, int a);
extern unsigned char fn_828E02A0(int *v, Key *k);
extern void fn_828EA790(Node **it);
int fn_828DF648(Self *self, int a)
{
    int n = 0;
    Node *it;
    Node *b;
    Key k;
    b = self->list->head;
    it = b;
    fn_828E0268(&k, a);
    while (fn_828E02A0(&b->val, &k)) {
        fn_828EA790(&it);
        n++;
        fn_828E0268(&k, a);
        b = it;
    }
    return n;
}
