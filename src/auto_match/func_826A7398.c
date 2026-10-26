// Calls virtual function 0x40 of the object at 0x74, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826A7398(char *self)
{
    Obj *o = *(Obj **)(self + 0x74);

    o->vtbl[16](o);
}
