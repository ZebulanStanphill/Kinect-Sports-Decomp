typedef struct Obj {
    unsigned char pad[0x3148];
    void *slots[1];
} Obj;

extern void fn_8262FE50(void *p);

void *fn_8263A7E0(Obj *o, int i)
{
    void *p = o->slots[i];
    if (p != 0) {
        fn_8262FE50(p);
    }
    return p;
}
