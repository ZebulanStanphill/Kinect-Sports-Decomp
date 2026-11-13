typedef struct Obj_8246F718 {
    unsigned char pad[0x414];
    void *converter;
} Obj_8246F718;

extern int fn_82528BF8(void *converter, const char *src, unsigned short *buf, int size, int a, int b);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);

int fn_8246F718(Obj_8246F718 *self, const char *src, unsigned short *buf, int size)
{
    if (self->converter != 0)
        return fn_82528BF8(self->converter, src, buf, size, 0, 1);
    fn_82528EE0(buf, size, L"%hs", src);
    return 0;
}
