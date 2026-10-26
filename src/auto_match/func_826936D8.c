// Calls virtual function 0x3c of the object at 0x8, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826936D8(char *self)
{
    Obj *o = *(Obj **)(self + 0x8);

    o->vtbl[15](o);
}
