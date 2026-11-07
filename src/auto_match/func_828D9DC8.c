typedef struct Msg_828D9DC8 {
    unsigned int a;
    unsigned char flag;
    unsigned char pad[3];
    unsigned int c;
} Msg_828D9DC8;

extern int fn_8223C478(void *stream, int bits, int b);
extern int fn_828E9DB8(void *stream, unsigned int value, int bits);

static __forceinline void WriteBits_828D9DC8(void *s, unsigned int value, int bits)
{
    fn_8223C478(s, bits, 0);
    fn_828E9DB8(s, value, bits);
}

void fn_828D9DC8(Msg_828D9DC8 *p, void *s)
{
    WriteBits_828D9DC8(s, p->a, 0x10);
    WriteBits_828D9DC8(s, p->flag != 0, 1);
    if (p->flag != 0) {
        WriteBits_828D9DC8(s, p->c, 4);
    }
}
