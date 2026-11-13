extern void *fn_8267B890(unsigned int heap, int size, int flags);
extern unsigned int lbl_8200D7F4;
extern unsigned int lbl_831E7E64;

typedef struct Obj_826EB228 {
    void *vtable;
    int refCount;
} Obj_826EB228;

unsigned int *fn_826EB228(void)
{
    Obj_826EB228 *p;

    p = (Obj_826EB228 *)fn_8267B890(lbl_831E7E64, 8, 0);
    if (p != 0) {
        p->refCount = 1;
        p->vtable = &lbl_8200D7F4;
        return (unsigned int *)p;
    }
    return 0;
}
