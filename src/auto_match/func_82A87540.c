typedef struct Stream Stream;
typedef struct StreamVtbl {
    void *f0;
    unsigned char (*isOpen)(Stream *s);
    void *f8;
    void *fc;
    unsigned char (*read)(Stream *s, void *buf, int size, void *out);
} StreamVtbl;
struct Stream {
    StreamVtbl *vtbl;
};

extern int fn_82A86EA8(void *reader, void *buf, int size);
extern int fn_82A87148(void *reader, int bit, int bits, void *out);
extern int fn_82A8C620(void *reader, int bit, int bits, void *out);

unsigned char fn_82A87540(int *out, Stream *s)
{
    unsigned char got[16];
    unsigned char reader[32];
    unsigned char buf[32];
    int i;

    if (s->vtbl->isOpen(s) && s->vtbl->read(s, buf, 0x18, got)) {
        fn_82A86EA8(reader, buf, 0x18);
        fn_82A8C620(reader, 0, 0x20, out);
        fn_82A8C620(reader, 0x20, 0x20, out + 1);
        if (*out == 1) {
            fn_82A87148(reader, 0x40, 0x10, out + 2);
            fn_82A87148(reader, 0x50, 0x10, (char *)out + 10);
            fn_82A8C620(reader, 0x60, 0x20, out + 3);
        } else {
            int bit = 0x40;
            int *p = out + 2;
            for (i = 4; i != 0; i--) {
                fn_82A8C620(reader, bit, 0x20, p);
                p++;
                bit += 0x20;
            }
        }
        return 1;
    }
    return 0;
}
