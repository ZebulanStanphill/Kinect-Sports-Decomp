typedef struct Obj_82460D38 {
    unsigned char pad[0x98];
    void *converter;
} Obj_82460D38;

extern int fn_82528BF8(void *converter, const char *src, unsigned short *buf, int size, int a, int b);
extern int fn_82528EE0(unsigned short *buf, int size, const unsigned short *fmt, ...);

int fn_82460D38(Obj_82460D38 *self, const char *src, unsigned short *buf, int size)
{
    if (self->converter != 0)
        return fn_82528BF8(self->converter, src, buf, size, 0, 1);
    fn_82528EE0(buf, size, L"%hs", src);
    return 0;
}
