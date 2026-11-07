typedef struct Obj_82A518E0 {
    char pad00[0x30];
    void *f30;
    void *f34;
    char pad38[0x4C - 0x38];
    void *f4C;
    char pad50[0x78 - 0x50];
    long *f78;
    char pad7C[0x80 - 0x7C];
    void *f80;
    void *f84;
} Obj_82A518E0;

long _InterlockedDecrement(long volatile *p);

extern void fn_82A403E8(void *a, void *b);
extern void fn_82A4F4E0(void *a);
extern void fn_82A4FD48(void *a);
extern void fn_82A51860(Obj_82A518E0 *p);

void fn_82A518E0(Obj_82A518E0 *p)
{
    void *o;

    fn_82A51860(p);
    o = p->f34;
    if (o != 0) {
        fn_82A4FD48(o);
        fn_82A4F4E0(o);
        p->f34 = 0;
    }
    if (p->f80 != 0) {
        fn_82A403E8(p->f30, p->f80);
        p->f80 = 0;
    }
    if (p->f84 != 0) {
        fn_82A403E8(p->f30, p->f84);
        p->f84 = 0;
    }
    if (p->f78 != 0) {
        _InterlockedDecrement(p->f78);
        p->f78 = 0;
    }
    if (p->f4C != 0) {
        fn_82A4F4E0(p->f4C);
        p->f4C = 0;
    }
}
