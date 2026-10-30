typedef struct Node { int a; int b; int refs; } Node;
typedef struct Obj { char pad[0x10]; Node *n; } Obj;
extern void fn_826944C8(Node *n);
extern void fn_8269F440(void);
extern Obj *fn_8269F500(int p);
void fn_8269FC90(int p, Node **ref)
{
    int v; Obj *o; Node *n; Node *old;
    fn_8269F440();
    v = *(int *)(p + 0x80);
    o = v ? (Obj *)v : fn_8269F500(p);
    if (o != 0) {
        n = *ref;
        n->refs++;
        old = o->n;
        if (--old->refs == 0) fn_826944C8(old);
        o->n = n;
    }
}
