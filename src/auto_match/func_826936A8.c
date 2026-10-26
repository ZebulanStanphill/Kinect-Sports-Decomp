// Calls virtual function 0x34 of the object at 0x8, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826936A8(char *self)
{
    Obj *o = *(Obj **)(self + 0x8);

    o->vtbl[13](o);
}
