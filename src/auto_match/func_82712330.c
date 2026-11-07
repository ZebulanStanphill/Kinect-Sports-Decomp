typedef struct Obj_82712330 {
    int pad0;
    int pad4;
    int refCount;
} Obj_82712330;

extern void fn_826944C8(Obj_82712330 *obj);

void fn_82712330(Obj_82712330 **slots)
{
    int i;

    for (i = 0; i < 0x93; i++) {
        Obj_82712330 *o = slots[i];
        if (--o->refCount == 0) {
            fn_826944C8(o);
        }
        slots[i] = 0;
    }
}
