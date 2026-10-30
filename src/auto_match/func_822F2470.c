extern void fn_822315A0(void *);
extern void fn_822C16B8(void *);
extern void fn_8265CA20(void *);
extern unsigned int lbl_821AE5A8;
extern unsigned int lbl_821AF1C8;

typedef struct { int a, b; char sub[1]; } Child;
typedef struct { Child *p; } Holder;
typedef struct {
    void *vt;
    int pad[6];
    void *x1c;
    int x20;
    Holder child;
} Self;

void fn_822F2470(Self *s)
{
    Holder *h;
    Child *c;
    s->vt = &lbl_821AE5A8;
    h = &s->child;
    c = h->p;
    if (c != 0) {
        fn_822C16B8(c->sub);
        fn_8265CA20(c);
    }
    if (s->x1c != 0) {
        fn_822315A0(s->x1c);
    }
    s->vt = &lbl_821AF1C8;
}
