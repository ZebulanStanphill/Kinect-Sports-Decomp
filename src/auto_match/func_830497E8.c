extern int fn_830493C8(void *self, void *b, void *a);
extern void fn_83049320(void *self, void *c, unsigned short n);

typedef struct Obj {
    char pad[0x1c];
    unsigned short n;
    char pad2[0x1e];
    char sub[4];
} Obj;

int fn_830497E8(Obj *p, void *a, void *c)
{
    if (fn_830493C8(p, p->sub, a) != 1)
        return 2;
    fn_83049320(p, c, p->n);
    return 1;
}
