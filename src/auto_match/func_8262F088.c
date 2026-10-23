typedef struct { int v[6]; } Func;

typedef struct {
    void *vt;
    int f4;
    int f8;
    void *owner;
    Func fn;
} Node;

extern void fn_827D9630(Func *dst, const Func *src);
extern void fn_827DEA30(Node *n);
extern char lbl_821CBF74[];

Node *fn_8262F088(char *self, const Func *f, void *a3, Node *n)
{
    Func tmp;

    fn_827D9630(&tmp, f);
    if (n != 0) {
        fn_827DEA30(n);
        n->owner = self + 4;
        n->vt = lbl_821CBF74;
        fn_827D9630(&n->fn, &tmp);
        return n;
    }
    return 0;
}
