typedef struct {
    int f0;
    void *f4;
    unsigned short count;
    char pad[0x4c - 0xa];
    void *buf1;
    void *buf2;
    char res2[0x20];
    char res1[0x20];
} Obj;

extern void *fn_82549798(unsigned int size, int a, int b, int c);
extern void fn_82A938E8(unsigned int size, int a, int b, int c, void *res);
extern void fn_82A93F70(void *res, void *buf);
extern void *memset(void *p, int c, unsigned int n);

void fn_825330A8(Obj *o)
{
    unsigned int size = o->count << 6;

    if (o->buf1 == 0) {
        o->buf1 = fn_82549798(size, 0, 4, 0);
        if (o->buf1 != 0) {
            memset(o->buf1, 0, o->count << 6);
        }
        fn_82A938E8(o->count << 6, 4, 0, 0, o->res1);
        fn_82A93F70(o->res1, o->buf1);
    }
    if (o->f4 != 0 && o->buf2 == 0) {
        o->buf2 = fn_82549798(size, 0, 4, 0);
        if (o->buf2 != 0) {
            memset(o->buf2, 0, o->count << 6);
        }
        fn_82A938E8(o->count << 6, 4, 0, 0, o->res2);
        fn_82A93F70(o->res2, o->buf2);
    }
}
