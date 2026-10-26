typedef void (*VFn)(void *self, int arg);
typedef struct { VFn *vtbl; } Obj;

void fn_822FA408(char *p)
{
    Obj *o = (Obj *)(p + 0xc);
    o->vtbl[0](o, 0);
}
