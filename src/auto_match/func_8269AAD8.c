// Calls virtual function 0x4c of the object at 0x20, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8269AAD8(char *self)
{
    Obj *o = *(Obj **)(self + 0x20);

    o->vtbl[19](o);
}
