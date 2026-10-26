// Calls virtual function 0x20 of the object at 0x10, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826D2950(char *self)
{
    Obj *o = *(Obj **)(self + 0x10);

    o->vtbl[8](o);
}
