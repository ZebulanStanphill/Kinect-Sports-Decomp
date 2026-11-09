typedef struct Obj_82243668 Obj_82243668;

typedef struct {
    unsigned char hdr[16];
    unsigned char *ptr;
    int size;
    void *buf;
    int b;
    int c;
} Reader_82243668;

typedef struct {
    void *slots[16];
    void (*read)(Obj_82243668 *self, unsigned char *dst);
} ObjVtbl_82243668;

struct Obj_82243668 {
    ObjVtbl_82243668 *vt;
};

extern unsigned int lbl_821974E8[];
extern void fn_828E9D28(Reader_82243668 *r, unsigned char *p, int size);
extern void fn_8223C610(Reader_82243668 *r, unsigned int bits, int a, int b);
extern void fn_8223B610(Reader_82243668 *r, int a, int b, int c, int d);
extern void fn_8265CA20(void *p);

void fn_82243668(Obj_82243668 *param_1, int param_2, int param_3, int param_4)
{
    Reader_82243668 r;
    unsigned char buf[64];
    unsigned int off;
    unsigned int rem;
    unsigned char *p;

    off = lbl_821974E8[param_2] >> 3;
    rem = lbl_821974E8[param_2] & 7;
    param_1->vt->read(param_1, buf);
    p = buf + off;
    r.ptr = p;
    r.buf = 0;
    r.b = 0;
    r.c = 0;
    r.size = 0x3e;
    fn_828E9D28(&r, p, 0x3e);
    if (rem != 0) {
        fn_8223C610(&r, rem, 0, 0);
    }
    fn_8223B610(&r, param_3, param_4, 0, 0);
    if (r.buf != 0) {
        fn_8265CA20(r.buf);
    }
}
