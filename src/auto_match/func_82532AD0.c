typedef struct Buffers_82532AD0 {
    void *first;
    void *second;
    unsigned short count;
    char padding[2];
    char resource1[0x20]; /* 0xc */
    char resource2[0x20]; /* 0x2c */
    char state[0x48];     /* 0x4c */
} Buffers_82532AD0;

extern void XMemSet(void *, int, unsigned int);
extern void *memset(void *, int, unsigned int);
extern void fn_82A938E8(unsigned int, int, int, int, void *);
extern void fn_82A93F70(void *, void *);
extern void fn_82532BC0(Buffers_82532AD0 *);

void fn_82532AD0(unsigned int count, Buffers_82532AD0 *self, void *first, void *second)
{
    XMemSet(self->state, 0, 0x48);
    self->first = first;
    self->count = (unsigned short)count;
    self->second = second;
    if (first != 0) {
        memset(first, 0, count << 6);
    }
    if (second != 0) {
        memset(second, 0, count << 6);
    }
    fn_82A938E8(self->count << 6, 4, 0, 0, self->resource1);
    fn_82A93F70(self->resource1, self->first);
    if (self->second != 0) {
        fn_82A938E8(self->count << 6, 4, 0, 0, self->resource2);
        fn_82A93F70(self->resource2, self->second);
    } else {
        XMemSet(self->resource2, 0, 0x20);
    }
    fn_82532BC0(self);
}
