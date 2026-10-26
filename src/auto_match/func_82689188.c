// Calls virtual function 0xc of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82689188(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[3](o);
}
