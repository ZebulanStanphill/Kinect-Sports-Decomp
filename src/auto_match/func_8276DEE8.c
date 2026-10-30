typedef struct Obj {
    char pad[0x2c];
    void **p;
} Obj;

unsigned char fn_8276DEE8(Obj *o)
{
    void **p = o->p;
    if (p) {
        p = (void **)*p;
    }
    return p != 0;
}
