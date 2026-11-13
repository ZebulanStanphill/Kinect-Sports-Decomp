extern void *memset(void *dst, int c, unsigned int n);

typedef struct Obj_82A399F8 {
    char pad0[0xa18];
    unsigned char a[0xcb8 - 0xa18];
    unsigned char b[0x2b14 - 0xcb8];
    unsigned char c[0x2db4 - 0x2b14];
    unsigned char d[0x2eb5 - 0x2db4];
    unsigned char count;
} Obj_82A399F8;

void fn_82A399F8(Obj_82A399F8 *o)
{
    memset(o->a, 0, (o->count + 0x20) * 8);
    memset(o->c, 0, (o->count + 0x20) * 8);
    memset(o->b, 0, 0xf9);
    memset(o->d, 0, 0xf9);
}
