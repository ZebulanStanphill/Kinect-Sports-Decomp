// Calls virtual function 0x10 of the object at 0x0, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82E23118(char *self)
{
    Obj *o = *(Obj **)(self + 0x0);

    o->vtbl[4](o);
}
