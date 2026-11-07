typedef struct Reader_822438B0 {
    unsigned char hdr[16];
    unsigned char *ptr;
    int size;
    void *buf;
    int b;
    int c;
} Reader_822438B0;

typedef struct Obj_822438B0 Obj_822438B0;
typedef struct ObjVtbl_822438B0 {
    void *slots[16];
    void (*read)(Obj_822438B0 *self, unsigned char *dst);
} ObjVtbl_822438B0;

struct Obj_822438B0 {
    ObjVtbl_822438B0 *vt;
};

extern unsigned int lbl_821974E8[];
extern void fn_828E9D28(Reader_822438B0 *r, unsigned char *p, int size);
extern void fn_8223C610(Reader_822438B0 *r, unsigned int bits, int a, int b);
extern void fn_8223C478(Reader_822438B0 *r, unsigned int bits, int a);
extern void fn_828EA2D8(Reader_822438B0 *r, int a, unsigned int b);
extern void fn_82243A00(Obj_822438B0 *o, unsigned char *buf);
extern void fn_8265CA20(void *p);

void fn_822438B0(Obj_822438B0 *param_1, int param_2, int param_3, unsigned int param_4)
{
    Reader_822438B0 r;
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
    fn_8223C478(&r, param_4 << 3, 0);
    fn_828EA2D8(&r, param_3, param_4);
    fn_82243A00(param_1, buf);
    if (r.buf != 0) {
        fn_8265CA20(r.buf);
    }
}
