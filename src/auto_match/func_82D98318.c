typedef void (*Fn)(void *ret, void *self);

typedef struct Obj {
    Fn *vt;
} Obj;

void *fn_82D98318(void *ret, char *p)
{
    Obj *o = *(Obj **)(p + 0x18);
    o->vt[0x1c / 4](ret, o);
    return ret;
}
