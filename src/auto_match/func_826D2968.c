// Calls virtual function 0x44 of the object at 0x10, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826D2968(char *self)
{
    Obj *o = *(Obj **)(self + 0x10);

    o->vtbl[17](o);
}
