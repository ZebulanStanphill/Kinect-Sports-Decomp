// Calls virtual function 0x8 of the object at 0x5d0, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82B7BBD8(char *self)
{
    Obj *o = *(Obj **)(self + 0x5d0);

    o->vtbl[2](o);
}
