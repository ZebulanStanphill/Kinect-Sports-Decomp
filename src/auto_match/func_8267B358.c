// Calls virtual function 0x18 of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8267B358(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[6](o);
}
