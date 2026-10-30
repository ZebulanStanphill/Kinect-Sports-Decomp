struct VObj_8301CFE8;
typedef struct VObjVT_8301CFE8 { void (*dtor)(struct VObj_8301CFE8 *, int); } VObjVT_8301CFE8;
typedef struct VObj_8301CFE8 { VObjVT_8301CFE8 *vt; } VObj_8301CFE8;
typedef struct Sub_8301CFE8 { void *vt; int pad[2]; char f0c[0x30]; } Sub_8301CFE8;
typedef struct Obj_8301CFE8 {
    void *vt;
    int pad4[3];
    char f10[0xb0];
    Sub_8301CFE8 sub;
    VObj_8301CFE8 *main;
    VObj_8301CFE8 *slots[4];
} Obj_8301CFE8;
extern void fn_82FA5190(void *heap, void *p);
extern void fn_83021E70(void *p);
extern void fn_830223E0(void *p);
extern void fn_830265E0(VObj_8301CFE8 *p);
extern void fn_83026AA8(void *p);
extern void fn_83039920(void *p);
extern void fn_8303A5E8(VObj_8301CFE8 *p);
extern unsigned int lbl_8217D040;
extern void *lbl_831BC770;

void fn_8301CFE8(Obj_8301CFE8 *o)
{
    VObj_8301CFE8 *p;
    Sub_8301CFE8 *s;
    VObj_8301CFE8 **pp;
    void *heap;
    int n;
    fn_8303A5E8(o->main);
    heap = lbl_831BC770;
    p = o->main;
    if (p != 0) {
        p->vt->dtor(p, 0);
        fn_82FA5190(heap, p);
    }
    pp = o->slots;
    n = 4;
    do {
        if (*pp != 0) {
            fn_830265E0(*pp);
            heap = lbl_831BC770;
            p = *pp;
            if (p != 0) {
                p->vt->dtor(p, 0);
                fn_82FA5190(heap, p);
            }
        }
        n--;
        pp++;
    } while (n != 0);
    fn_83026AA8(o);
    s = &o->sub;
    fn_830223E0(s);
    fn_83021E70(s->f0c);
    s->vt = &lbl_8217D040;
    fn_83039920(o->f10);
    o->vt = &lbl_8217D040;
    fn_82FA5190(lbl_831BC770, o);
}
