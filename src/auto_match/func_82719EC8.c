struct If_82719EC8;
typedef struct VT_82719EC8 {
    int pad0[2];
    int (*f8)(struct If_82719EC8 *self);
    int pad0c[13];
    unsigned char (*f40)(struct If_82719EC8 *self);
} VT_82719EC8;
typedef struct If_82719EC8 { VT_82719EC8 *vt; } If_82719EC8;
typedef struct Obj_82719EC8 {
    int f0;
    unsigned char *f4;
    If_82719EC8 *f8;
    char padc[0xc];
    int f18;
} Obj_82719EC8;
extern void fn_826959C8(unsigned char *p);
extern void fn_82696BC8(unsigned char *p, char *q);
extern void fn_8271FDB0(int a, char *b, char *c);

void fn_82719EC8(Obj_82719EC8 *p)
{
    unsigned char *u;
    char *d;
    char *q;
    char *q4;

    if (p->f8 == 0 || p->f8->vt->f8(p->f8) != 0x19 || p->f8->vt->f40(p->f8) != 0) {
        u = p->f4;
        fn_826959C8(u);
        *u = 1;
    } else {
        if (p->f8 != 0)
            d = (char *)p->f8 - 0x10;
        else
            d = 0;
        if (d != 0)
            q = d + 0x10;
        else
            q = 0;
        if (d != 0)
            q4 = d + 0x10;
        else
            q4 = 0;
        fn_8271FDB0(p->f18, q4, q);
        fn_82696BC8(p->f4, d);
    }
}
