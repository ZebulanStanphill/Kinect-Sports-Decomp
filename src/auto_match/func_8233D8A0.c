typedef struct Reader_8233D8A0 {
    int f0;
    int f4;
    int f8;
    int fc;
    void *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Reader_8233D8A0;

typedef struct Obj_8233D8A0 Obj_8233D8A0;
typedef struct ObjVtbl_8233D8A0 {
    void *slots[16];
    void (*getKey)(Obj_8233D8A0 *self, unsigned char *out);
} ObjVtbl_8233D8A0;
struct Obj_8233D8A0 {
    ObjVtbl_8233D8A0 *vt;
};

extern void fn_828E9D28(Reader_8233D8A0 *r, void *buf, int size);
extern unsigned int fn_8223C610(Reader_8233D8A0 *r, int bits, int a, int b);
extern void fn_8265CA20(void *p);

void fn_8233D8A0(Obj_8233D8A0 *o, unsigned int *a, unsigned int *b, unsigned int *c, unsigned int *d)
{
    unsigned char key[16];
    Reader_8233D8A0 r;

    o->vt->getKey(o, key);
    r.alloc = 0;
    r.f1c = 0;
    r.f20 = 0;
    r.buf = key;
    r.size = 0x10;
    fn_828E9D28(&r, key, 0x10);
    *a = fn_8223C610(&r, 0x20, 0, 0);
    *b = fn_8223C610(&r, 0x20, 0, 0);
    *c = fn_8223C610(&r, 0x20, 0, 0);
    *d = fn_8223C610(&r, 0x20, 0, 0);
    if (r.alloc != 0) {
        fn_8265CA20(r.alloc);
    }
}
