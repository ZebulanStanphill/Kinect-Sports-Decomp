typedef struct Msg_828DDC20 {
    char pad0[0x80];
    unsigned int type;
    unsigned int pad84;
    unsigned __int64 value;
    unsigned char flag;
} Msg_828DDC20;

extern int fn_8223C478(void *stream, int bits, int b);
extern int fn_828E9DB8(void *stream, unsigned int value, int bits);
extern int fn_828E9F18(void *stream, unsigned __int64 value, int bits);

static __forceinline void WriteBits_828DDC20(void *s, unsigned int value, int bits)
{
    fn_8223C478(s, bits, 0);
    fn_828E9DB8(s, value, bits);
}

static __forceinline void WriteBits64_828DDC20(void *s, unsigned __int64 value, int bits)
{
    fn_8223C478(s, bits, 0);
    fn_828E9F18(s, value, bits);
}

static __forceinline void WriteBool_828DDC20(void *s, unsigned char value)
{
    fn_8223C478(s, 1, 0);
    fn_828E9DB8(s, value != 0, 1);
}

void fn_828DDC20(Msg_828DDC20 *p, void *s)
{
    WriteBits_828DDC20(s, p->type, 2);
    switch (p->type) {
    case 0:
        WriteBits64_828DDC20(s, p->value, 0x40);
        break;
    case 1:
        WriteBool_828DDC20(s, p->flag);
        break;
    }
}
