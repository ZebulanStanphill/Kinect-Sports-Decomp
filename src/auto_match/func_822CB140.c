typedef struct Writer_822CB140 {
    int f0;
    int f4;
    int f8;
    int fc;
    void *buf;
    int size;
    void *alloc;
    int f1c;
    int f20;
} Writer_822CB140;

extern void fn_828E9D28(Writer_822CB140 *w, void *buf, int size);
extern void fn_822CB7F8(Writer_822CB140 *w, int value, int a, int b, int c, int d, int e, int f);
extern void fn_822CB340(void *self, unsigned char *data);
extern void fn_8265CA20(void *p);

void fn_822CB140(void *self, int value)
{
    unsigned char data[8] = {0};
    Writer_822CB140 w;

    w.alloc = 0;
    w.f1c = 0;
    w.f20 = 0;
    w.buf = data;
    w.size = 8;
    fn_828E9D28(&w, data, 8);
    fn_822CB7F8(&w, value, 0xb, 7, 0xb, 7, 0xb, 7);
    fn_822CB340(self, data);
    if (w.alloc != 0) {
        fn_8265CA20(w.alloc);
    }
}
