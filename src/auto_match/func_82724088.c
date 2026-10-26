typedef struct Obj Obj;
typedef char *(*GetFn)(Obj *o);
struct Obj { char **vt; char pad[0x9c]; char *ctx; };
extern void fn_827A3008(int v);

void fn_82724088(Obj *p)
{
    char *r;
    if (*(int *)(p->ctx + 0x114) != 0) {
        fn_827A3008(*(int *)(p->ctx + 0x114));
        r = (*(GetFn *)((char *)p->vt + 0x40))(p);
        if (r != 0) {
            *(unsigned int *)(r + 0xb00) |= 0x400;
        }
    }
}
