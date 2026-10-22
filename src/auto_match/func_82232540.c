typedef struct SubA {
    void *vt;
    int pad4;
    int kind;
    unsigned char *buf;
    int cap;
    char rest[0x58 - 0x14];
} SubA;

typedef struct SubB {
    void *vt;
    int pad4;
    int kind;
    int a;
    int b;
    char rest[0x58 - 0x14];
} SubB;

typedef struct Elem {
    char d[0x58];
} Elem;

typedef struct Obj {
    void *vt;
    char pad[0x30];
    SubA sa;
    SubB sb;
    Elem arr[20];
    char c0[0x58];
    char c1[0x58];
    char d0[0x68];
    char d1[0x68];
    SubB sc;
} Obj;

extern void fn_82232988(void *);
extern void fn_8223B930(void *);
extern void fn_82240688(void *);
extern void fn_82240DB8(void *, int);
extern unsigned char *fn_8265C9E0(int);
extern void fn_8288B300(void *, int);
extern char lbl_82196AC4[];
extern char lbl_82196AD4[];
extern char lbl_82196AF4[];
extern char lbl_82196AFC[];
extern char lbl_82196B0C[];

Obj *fn_82232540(Obj *o)
{
    unsigned char *buf;
    Elem *e;
    int i;

    fn_8288B300(o, 1);
    { void **pv = &o->vt; *pv = lbl_82196AF4; }
    fn_82240DB8(&o->sa, 1);
    { void **pv = &o->sa.vt; *pv = lbl_82196AFC; }
    o->sa.kind = 7;
    o->sa.cap = 5;
    buf = fn_8265C9E0(5);
    for (i = 0; i < 5; i++) {
        buf[i] = 0;
    }
    o->sa.buf = buf;
    { void **pv = &o->sa.vt; *pv = lbl_82196AC4; }
    fn_82240DB8(&o->sb, 1);
    o->sb.kind = 7;
    o->sb.a = 0;
    o->sb.b = 3;
    { void **pv = &o->sb.vt; *pv = lbl_82196AD4; }
    e = o->arr;
    i = 19;
    do {
        fn_82232988(e);
        e++;
    } while (--i >= 0);
    fn_82240688(o->c0);
    fn_82240688(o->c1);
    fn_8223B930(o->d0);
    fn_8223B930(o->d1);
    fn_82240DB8(&o->sc, 1);
    o->sc.kind = 7;
    o->sc.b = 3;
    o->sc.a = 0;
    { void **pv = &o->sc.vt; *pv = lbl_82196B0C; }
    return o;
}
