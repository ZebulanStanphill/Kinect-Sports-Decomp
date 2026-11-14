typedef struct Writer_82327178 {
    int h[4];
    unsigned char *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Writer_82327178;

typedef struct Source_82327178 Source_82327178;
typedef struct SourceVtbl_82327178 {
    void *slots[16];
    void (*read)(Source_82327178 *self, unsigned char *data);
} SourceVtbl_82327178;

struct Source_82327178 {
    SourceVtbl_82327178 *vt;
};

extern unsigned int lbl_821B0390[15];
extern void fn_828E9D28(Writer_82327178 *w, unsigned char *buf, int size);
extern void *fn_8223C610(Writer_82327178 *w, unsigned int bits, int a, int b);
extern void fn_8265CA20(void *p);

void fn_82327178(Source_82327178 *source, void **out0, unsigned char *out1)
{
    void *values[15] = {0};
    unsigned char data[1];
    Writer_82327178 w;
    unsigned int i;

    source->vt->read(source, data);
    w.alloc = 0;
    w.f1c = 0;
    w.f20 = 0;
    w.buf = data;
    w.size = 1;
    fn_828E9D28(&w, data, 1);
    for (i = 0; i < 2; i++) {
        unsigned int bits = lbl_821B0390[i];
        values[i] = bits != 0 ? fn_8223C610(&w, bits, 0, 0) : 0;
    }
    if (w.alloc != 0) {
        fn_8265CA20(w.alloc);
    }
    *out1 = values[1] != 0;
    *out0 = values[0];
}
