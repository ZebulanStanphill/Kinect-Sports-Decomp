extern void fn_82FA52E0(unsigned int heap, void *ptr);
extern unsigned int lbl_832645A4;

typedef struct Obj_82FF9B18 {
    void *data;
    int size;
    int pad8;
    int padC;
    int pad10;
    int refCount;
} Obj_82FF9B18;

int fn_82FF9B18(Obj_82FF9B18 *p)
{
    if (--p->refCount == 0 && p->data != 0) {
        fn_82FA52E0(lbl_832645A4, p->data);
        p->data = 0;
        p->size = 0;
    }
    return p->refCount;
}
