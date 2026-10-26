typedef void (*VFn)(void *self, int arg);
typedef struct { VFn *vtbl; } Obj;

void fn_822FF2D8(char *p)
{
    Obj *o = (Obj *)(p + 0x10);
    o->vtbl[0](o, 0);
}
