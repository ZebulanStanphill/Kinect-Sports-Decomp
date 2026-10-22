extern void *fn_8263A098(void *obj, int a, unsigned int *b, unsigned int *c);
extern void fn_82639F78(void *obj, int a, void *p, unsigned int b, unsigned int c, int d);
extern void *fn_82630108(void *buf, int a, int size, int b);
extern void fn_82630158(void *buf);
extern void fn_8262FEC8(void *p);
extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Obj {
    char pad0[0x38];
    void *dev;
    int pad3C;
    void *buf;
    char pad44[0x90 - 0x44];
    unsigned char data[0x78];
} Obj;

int fn_82BFFF08(Obj *o)
{
    void *prev;
    unsigned int b;
    unsigned int a;

    if (o->dev != 0) {
        prev = fn_8263A098(o->dev, 0, &a, &b);
        fn_82639F78(o->dev, 0, 0, 0, 0, 1);
        memcpy(fn_82630108(o->buf, 0, 0x78, 0), o->data, 0x78);
        fn_82630158(o->buf);
        fn_82639F78(o->dev, 0, prev, a, b, 1);
        if (prev != 0) {
            fn_8262FEC8(prev);
        }
    }
    return 0;
}
