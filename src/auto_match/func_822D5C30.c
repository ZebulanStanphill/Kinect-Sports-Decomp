typedef struct Writer_822D5C30 {
    int h[4];
    unsigned char *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Writer_822D5C30;

typedef struct Obj_822D5C30 Obj_822D5C30;
typedef struct ObjVtbl_822D5C30 {
    void *slots[2];
    char *(*getOwner)(Obj_822D5C30 *self);
} ObjVtbl_822D5C30;

struct Obj_822D5C30 {
    ObjVtbl_822D5C30 *vt;
};

typedef struct Source_822D5C30 Source_822D5C30;
typedef struct SourceVtbl_822D5C30 {
    void *slots[16];
    void (*read)(Source_822D5C30 *self, unsigned char *data);
} SourceVtbl_822D5C30;

struct Source_822D5C30 {
    SourceVtbl_822D5C30 *vt;
};

extern unsigned int lbl_821AD83C[15];
extern void fn_828E9D28(Writer_822D5C30 *w, unsigned char *buf, int size);
extern void *fn_8223C610(Writer_822D5C30 *w, unsigned int bits, int a, int b);
extern void fn_8265CA20(void *p);

void fn_822D5C30(Obj_822D5C30 *self, void **out0, void **out1)
{
    Source_822D5C30 *source = (Source_822D5C30 *)(self->vt->getOwner(self) + 0x1ec);
    void *values[15] = {0};
    unsigned char data[6];
    Writer_822D5C30 w;
    unsigned int i;

    source->vt->read(source, data);
    w.alloc = 0;
    w.f1c = 0;
    w.f20 = 0;
    w.buf = data;
    w.size = 6;
    fn_828E9D28(&w, data, 6);
    for (i = 0; i < 2; i++) {
        unsigned int bits = lbl_821AD83C[i];
        values[i] = bits != 0 ? fn_8223C610(&w, bits, 0, 0) : 0;
    }
    if (w.alloc != 0) {
        fn_8265CA20(w.alloc);
    }
    *out0 = values[0];
    *out1 = values[1];
}
