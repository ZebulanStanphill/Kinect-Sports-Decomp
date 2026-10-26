// Calls virtual function 0x10 of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82E654B8(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[4](o);
}
