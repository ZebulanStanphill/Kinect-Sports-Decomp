typedef struct Vtbl_828B1218 Vtbl_828B1218;

typedef struct Obj_828B1218 {
    Vtbl_828B1218 *vt;
} Obj_828B1218;

struct Vtbl_828B1218 {
    void *pad00[14];
    void (*f38)(Obj_828B1218 *self, unsigned char *buf, void *p);
    void *pad3c;
    void (*f40)(Obj_828B1218 *self, unsigned char *buf);
};

typedef struct Reader_828B1218 {
    int state[4];
    unsigned char *ptr;
    int size;
    void *mem;
    int f1c;
    int f20;
} Reader_828B1218;

extern unsigned int lbl_82024DA0[];
extern unsigned int lbl_82024DDC[];

extern void fn_8223C478(Reader_828B1218 *r, unsigned int n, int z);
extern void fn_8265CA20(void *p);
extern void fn_828B0720(Obj_828B1218 *self, unsigned char *buf, void *p);
extern void fn_828B0828(Obj_828B1218 *self, unsigned char *buf);
extern void fn_828E9D28(Reader_828B1218 *r, unsigned char *ptr, int size);
extern int fn_828E9D90(Reader_828B1218 *r);
extern int fn_828E9DA8(Reader_828B1218 *r);
extern void fn_828E9DB8(Reader_828B1218 *r, int value, unsigned int n);
extern void fn_828E9FF8(Reader_828B1218 *r, unsigned int bits);

void fn_828B1218(Obj_828B1218 *obj, int value, int index, void *p)
{
    unsigned char buf[32];
    Reader_828B1218 r;
    unsigned int v;
    unsigned int off;
    unsigned int bits;
    unsigned int n;
    unsigned char *ptr;

    v = lbl_82024DA0[index];
    off = v >> 3;
    bits = v & 7;
    if (p != 0) {
        obj->vt->f38(obj, buf, p);
    } else {
        obj->vt->f40(obj, buf);
    }
    ptr = buf + off;
    r.ptr = ptr;
    r.mem = 0;
    r.f1c = 0;
    r.f20 = 0;
    r.size = 0x19;
    fn_828E9D28(&r, ptr, 0x19);
    if (bits != 0) {
        if ((int)bits <= fn_828E9DA8(&r) - fn_828E9D90(&r)) {
            fn_828E9FF8(&r, bits);
        }
    }
    n = lbl_82024DDC[index];
    fn_8223C478(&r, n, 0);
    fn_828E9DB8(&r, value, n);
    if (p != 0) {
        fn_828B0720(obj, buf, p);
    } else {
        fn_828B0828(obj, buf);
    }
    if (r.mem != 0) {
        fn_8265CA20(r.mem);
    }
}
