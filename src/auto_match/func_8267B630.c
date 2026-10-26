// Calls virtual function 0x20 of the object at 0xa4, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8267B630(char *self)
{
    Obj *o = *(Obj **)(self + 0xa4);

    o->vtbl[8](o);
}
