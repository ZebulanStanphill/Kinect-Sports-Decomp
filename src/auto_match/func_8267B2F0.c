// Calls virtual function 0x20 of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8267B2F0(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[8](o);
}
