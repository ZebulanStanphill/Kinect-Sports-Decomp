typedef struct Obj_828B10F0 Obj_828B10F0;

typedef struct Vtbl_828B10F0 {
    void *slots[14];
    void (*Read38)(Obj_828B10F0 *self, unsigned char *buf, unsigned int arg);
    void *slot3C;
    void (*Read40)(Obj_828B10F0 *self, unsigned char *buf);
} Vtbl_828B10F0;

struct Obj_828B10F0 {
    Vtbl_828B10F0 *vt;
};

typedef struct Stream_828B10F0 {
    int hdr[4];
    unsigned char *ptr;
    int one;
    void *mem;
    int a;
    int b;
} Stream_828B10F0;

extern unsigned int lbl_82024D64[];
extern unsigned int lbl_82024D28[];

extern void fn_828E9D28(Stream_828B10F0 *s, unsigned char *p, int n);
extern int fn_828E9DA8(Stream_828B10F0 *s);
extern int fn_828E9D90(Stream_828B10F0 *s);
extern void fn_828E9FF8(Stream_828B10F0 *s, unsigned int n);
extern void fn_8223C478(Stream_828B10F0 *s, unsigned int n, int z);
extern void fn_828E9DB8(Stream_828B10F0 *s, int v, unsigned int n);
extern void fn_828B0618(Obj_828B10F0 *o, unsigned char *buf, unsigned int arg);
extern void fn_828B0AF0(Obj_828B10F0 *o, unsigned char *buf);
extern void fn_8265CA20(void *p);

void fn_828B10F0(Obj_828B10F0 *param_1, int param_2, int param_3, unsigned int param_4)
{
    unsigned char buf[16];
    Stream_828B10F0 s;
    unsigned int bits;
    unsigned int off;
    unsigned int rem;
    unsigned int n;
    unsigned char *p;

    bits = lbl_82024D64[param_3];
    off = bits >> 3;
    rem = bits & 7;
    if (param_4 != 0) {
        param_1->vt->Read38(param_1, buf, param_4);
    } else {
        param_1->vt->Read40(param_1, buf);
    }
    p = buf + off;
    s.ptr = p;
    s.mem = 0;
    s.a = 0;
    s.b = 0;
    s.one = 1;
    fn_828E9D28(&s, p, 1);
    if (rem != 0) {
        int avail = fn_828E9DA8(&s);
        if ((int)rem <= avail - fn_828E9D90(&s)) {
            fn_828E9FF8(&s, rem);
        }
    }
    n = lbl_82024D28[param_3];
    fn_8223C478(&s, n, 0);
    fn_828E9DB8(&s, param_2, n);
    if (param_4 != 0) {
        fn_828B0618(param_1, buf, param_4);
    } else {
        fn_828B0AF0(param_1, buf);
    }
    if (s.mem != 0) {
        fn_8265CA20(s.mem);
    }
}
