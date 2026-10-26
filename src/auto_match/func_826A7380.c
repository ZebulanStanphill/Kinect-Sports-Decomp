// Calls virtual function 0x94 of the object at 0x74, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826A7380(char *self)
{
    Obj *o = *(Obj **)(self + 0x74);

    o->vtbl[37](o);
}
