void *memset(void *dst, int c, unsigned int n);
typedef struct Writer_822D5B50 {
    int h[4];
    unsigned char *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Writer_822D5B50;

typedef struct Obj_822D5B50 Obj_822D5B50;
typedef struct ObjVtbl_822D5B50 {
    void *slots[2];
    char *(*getOwner)(Obj_822D5B50 *self);
} ObjVtbl_822D5B50;

struct Obj_822D5B50 {
    ObjVtbl_822D5B50 *vt;
};

extern unsigned int lbl_821AD83C[15];
extern void fn_828E9D28(Writer_822D5B50 *w, unsigned char *buf, int size);
extern void fn_8223C478(Writer_822D5B50 *w, unsigned int bits, int a);
extern void fn_828E9DB8(Writer_822D5B50 *w, void *src, unsigned int bits);
extern void fn_822D6EA8(void *target, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_822D5B50(Obj_822D5B50 *self, void *value)
{
    char *target = self->vt->getOwner(self) + 0x1ec;
    void *values[15];
    unsigned char data[6];
    Writer_822D5B50 w;
    unsigned int i;

    memset(&values[1], 0, sizeof(values) - sizeof(values[0]));
    values[0] = value;
    memset(data, 0, sizeof(data));
    w.alloc = 0;
    w.f1c = 0;
    w.f20 = 0;
    w.buf = data;
    w.size = 6;
    values[1] = 0;
    fn_828E9D28(&w, data, 6);
    for (i = 0; i < 2; i++) {
        unsigned int bits = lbl_821AD83C[i];
        if (bits != 0) {
            fn_8223C478(&w, bits, 0);
            fn_828E9DB8(&w, values[i], bits);
        }
    }
    fn_822D6EA8(target, data);
    if (w.alloc != 0) {
        fn_8265CA20(w.alloc);
    }
}
