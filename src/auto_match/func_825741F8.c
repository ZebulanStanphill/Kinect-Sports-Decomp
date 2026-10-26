typedef struct Inner { char pad[0x48]; void *a; int x4c; void *b; int x54; void *c; } Inner;
typedef struct Obj { char pad[0x10]; Inner *in; } Obj;
extern void fn_8251FA58(void *p);
extern void fn_82522ED8(void *p);
extern void fn_825B5108(void *a, void *b);

void fn_825741F8(Obj *p)
{
    Inner *in = p->in;
    if (in->a != 0) {
        fn_825B5108(in->a, in->b);
    }
    if (p->in->b != 0) {
        fn_82522ED8(p->in->b);
    }
    if (p->in->c != 0) {
        fn_8251FA58(p->in->c);
    }
    fn_82522ED8(p->in);
}
