typedef struct { char pad[0xa8]; unsigned char id; } Sub;
typedef struct { char pad[0x14]; char f14[0x64]; Sub *sub; unsigned char flag; } Self;

extern void fn_82BBFDD0(Sub *s);
extern void fn_82BABEF0(void *out, void *a, unsigned char flag);
extern void fn_82BAC750(void *out, unsigned char id, int a, int b);

void fn_82BAD830(Self *self, void *out)
{
    if (self->sub != 0)
        fn_82BBFDD0(self->sub);
    fn_82BABEF0(out, self->f14, self->flag);
    if (self->sub != 0)
        fn_82BAC750(out, self->sub->id, 0, 0);
}
