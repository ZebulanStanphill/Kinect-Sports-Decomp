extern void *fn_82522DF8(unsigned int);
extern void fn_82A1E658(void *);
extern void *XMemSet(void *, int, unsigned int);
extern void *fn_82A1DD38(void *, const void *, unsigned int);

void fn_8261BF58(char **self, unsigned int value, const char *name, const void *data)
{
    char *object;
    char *out;
    const char *in;
    char *end;
    unsigned char character;
    *self = fn_82522DF8(0x25c);
    *(unsigned int *)*self = value;
    *(unsigned int *)(*self + 0x238) = 0;
    *(unsigned int *)(*self + 0x258) = 0;
    object = *self;
    if (*(void **)(object + 0x248) != 0) {
        fn_82A1E658(*(void **)(object + 0x248));
    }
    XMemSet(object + 0x23c, 0, 0x1c);
    out = *self + 0x138;
    in = name;
    end = out + 0x100;
    while (out < end && (*out++ = *in++) != 0) {
    }
    if (out == end) {
        out[-1] = 0;
    }
    fn_82A1DD38(*self + 4, data, 0x134);
}
