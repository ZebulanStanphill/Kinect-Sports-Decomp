long _InterlockedExchange(long volatile *target, long value);

extern char lbl_8320A3E0[];
extern unsigned int fn_827F3AB0(void *self);
extern long *fn_827EFC80(void);
extern void *fn_827EFC70(void);
extern void fn_82811438(void *out, void *in, int size);
extern void *fn_82811080(void *heap, unsigned int size, void *desc);
extern void fn_827F3B90(void *self, void *buf, unsigned int size);

int fn_8255EF20(void *self)
{
    unsigned int size = fn_827F3AB0(self);
    int fromPool = 0;
    void *buf;
    int desc[4];
    char info[16];

    if (size <= 0x19000 && _InterlockedExchange(fn_827EFC80(), 1) == 0) {
        fromPool = 1;
        buf = fn_827EFC70();
    } else {
        desc[0] = 0;
        fn_82811438(info, desc, 0x10);
        buf = fn_82811080(lbl_8320A3E0, size, info);
    }
    fn_827F3B90(self, buf, size);
    return fromPool;
}
