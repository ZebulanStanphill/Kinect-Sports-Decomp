void *memset(void *dst, int c, unsigned int n);
typedef struct Writer_82327098 {
    int h[4];
    unsigned char *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Writer_82327098;

extern unsigned int lbl_821B0390[15];
extern void fn_828E9D28(Writer_82327098 *w, unsigned char *buf, int size);
extern void fn_8223C478(Writer_82327098 *w, unsigned int bits, int a);
extern void fn_828E9DB8(Writer_82327098 *w, void *src, unsigned int bits);
extern void fn_82329468(void *target, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_82327098(void *target, void *value, unsigned char flag)
{
    void *values[15];
    unsigned char data[1];
    Writer_82327098 w;
    unsigned int i;

    memset(&values[1], 0, sizeof(values) - sizeof(values[0]));
    values[0] = value;
    memset(data, 0, sizeof(data));
    w.alloc = 0;
    w.f1c = 0;
    w.f20 = 0;
    w.buf = data;
    w.size = 1;
    values[1] = (void *)(flag != 0);
    fn_828E9D28(&w, data, 1);
    for (i = 0; i < 2; i++) {
        unsigned int bits = lbl_821B0390[i];
        if (bits != 0) {
            fn_8223C478(&w, bits, 0);
            fn_828E9DB8(&w, values[i], bits);
        }
    }
    fn_82329468(target, data);
    if (w.alloc != 0) {
        fn_8265CA20(w.alloc);
    }
}
