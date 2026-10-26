// Calls virtual function 0x50 of the object at 0x20, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8269AAF0(char *self)
{
    Obj *o = *(Obj **)(self + 0x20);

    o->vtbl[20](o);
}
