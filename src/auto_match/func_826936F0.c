// Calls virtual function 0x40 of the object at 0x8, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826936F0(char *self)
{
    Obj *o = *(Obj **)(self + 0x8);

    o->vtbl[16](o);
}
