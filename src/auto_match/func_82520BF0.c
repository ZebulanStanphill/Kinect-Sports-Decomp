extern void *fn_8265C9E0(unsigned int size);
extern unsigned int lbl_821C2CA0;

typedef struct Obj_82520BF0 {
    void *vtable;
    int refCount;
    int pad[0x1f4];
    int field7D8;
} Obj_82520BF0;

Obj_82520BF0 *fn_82520BF0(void)
{
    Obj_82520BF0 *p;

    p = (Obj_82520BF0 *)fn_8265C9E0(0x7dc);
    if (p != 0) {
        p->vtable = &lbl_821C2CA0;
        p->refCount = 1;
        p->field7D8 = 0;
        return p;
    }
    return 0;
}
