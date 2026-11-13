typedef struct Reader_8243C3D0 {
    int f0;
    int f4;
    int f8;
    int fc;
    void *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Reader_8243C3D0;

typedef struct Obj_8243C3D0 Obj_8243C3D0;
typedef struct ObjVtbl_8243C3D0 {
    void *slots[16];
    void (*getKey)(Obj_8243C3D0 *self, unsigned char *out);
} ObjVtbl_8243C3D0;
struct Obj_8243C3D0 {
    ObjVtbl_8243C3D0 *vt;
};

extern void fn_828E9D28(Reader_8243C3D0 *r, void *buf, int size);
extern unsigned int fn_8223C610(Reader_8243C3D0 *r, int bits, int a, int b);
extern __int64 fn_823B4900(Reader_8243C3D0 *r, int bits, int a, int b);
extern void fn_8265CA20(void *p);

int fn_8243C3D0(Obj_8243C3D0 *o, __int64 *out)
{
    unsigned char key[16];
    Reader_8243C3D0 r;
    int ok;

    o->vt->getKey(o, key);
    r.alloc = 0;
    r.f1c = 0;
    r.f20 = 0;
    r.buf = key;
    r.size = 4;
    fn_828E9D28(&r, key, 4);
    ok = fn_8223C610(&r, 1, 0, 0) != 0;
    if (out != 0) {
        if (ok) {
            *out = fn_823B4900(&r, 0x1e, 0, 0);
        } else {
            *out = 0;
        }
    }
    if (r.alloc != 0) {
        fn_8265CA20(r.alloc);
    }
    return ok;
}
