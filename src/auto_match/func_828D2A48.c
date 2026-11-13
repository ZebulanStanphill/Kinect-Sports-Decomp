typedef struct String_828D2A48 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_828D2A48;

typedef struct Object_828D2A48 {
    char pad0[0x80];
    unsigned int type;          /* 0x80 */
    char name[0x24];            /* 0x84 */
    unsigned int kind;          /* 0xa8 */
    unsigned int id;            /* 0xac */
    unsigned char enabled;      /* 0xb0 */
    unsigned int count;         /* 0xb4 */
    String_828D2A48 text;       /* 0xb8 */
} Object_828D2A48;

extern void fn_8223C478(void *out, int bits, int flags);
extern void fn_828E9DB8(void *out, unsigned int value, int bits);
extern void fn_828D2958(void *out, char *data, int size, int flags);
extern void fn_8224BF30(void *out, const char *text, int flags);

static __forceinline const char *String_Ptr(String_828D2A48 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static __forceinline void Write(void *out, unsigned int value, int bits)
{
    fn_8223C478(out, bits, 0);
    fn_828E9DB8(out, value, bits);
}

static __forceinline void WriteBool(void *out, unsigned char value)
{
    unsigned int bit = value != 0;
    fn_8223C478(out, 1, 0);
    fn_828E9DB8(out, bit, 1);
}

void fn_828D2A48(Object_828D2A48 *o, void *out)
{
    unsigned char hasText;
    Write(out, o->type, 2);
    switch (o->type) {
    case 0: {
        unsigned char many;
        fn_828D2958(out, o->name, 0x24, 0);
        Write(out, o->kind, 2);
        Write(out, o->id, 16);
        WriteBool(out, o->enabled);
        many = o->count > 1;
        WriteBool(out, many);
        if (many)
            Write(out, o->count - 1, 2);
        break;
    }
    case 1:
    case 3:
        Write(out, o->id, 16);
        break;
    }
    hasText = o->text.size != 0;
    WriteBool(out, hasText);
    if (hasText)
        fn_8224BF30(out, String_Ptr(&o->text), 0);
}
