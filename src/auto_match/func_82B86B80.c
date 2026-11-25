typedef struct Info_82B86B80 {
    char pad[0x94];
    void *context; /* 0x94 */
} Info_82B86B80;

typedef struct PageHeader_82B86B80 {
    Info_82B86B80 *owner;
} PageHeader_82B86B80;

typedef struct Literal_82B86B80 {
    char pad0[0x14];
    unsigned int pad0bits : 22;
    unsigned int types : 8; /* two bits per component */
    unsigned int pad1bits : 2;
    char pad18[0x14];
    float values[4]; /* 0x2C */
} Literal_82B86B80;

typedef struct Constant_82B86B80 {
    float value;       /* 0x0 */
    unsigned int type; /* 0x4 */
} Constant_82B86B80;

typedef union Bits_82B86B80 {
    float f;
    int i;
    unsigned int u;
} Bits_82B86B80;

extern void *memset(void *dst, int value, unsigned int size);
extern double fn_82B167E0(Literal_82B86B80 *literal, unsigned int index);
extern double fn_82B80CD0(double value, unsigned int type, unsigned int modifiers);
extern __declspec(noreturn) void fn_82AA66A8(void *context, int code, ...);

static __forceinline unsigned int GetBits(const unsigned int *words, unsigned int lo, unsigned int hi)
{
    return (words[lo >> 5] & ((2u << (hi & 31)) - 1) & (0xffffffff << (lo & 31))) >> (lo & 31);
}

Constant_82B86B80 *fn_82B86B80(Constant_82B86B80 *out, Literal_82B86B80 *literal, unsigned int index,
                               unsigned int modifiers)
{
    unsigned int types[1];
    double value;
    Bits_82B86B80 bits;
    float result;

    memset(types, 0, sizeof(types));
    types[0] |= literal->types;
    out->type = GetBits(types, index * 2, index * 2 + 1);
    if (modifiers == 0) {
        result = literal->values[index];
    } else {
        value = fn_82B167E0(literal, index);
        value = fn_82B80CD0(value, out->type, modifiers);
        switch (out->type) {
        case 0:
            result = (float)value;
            break;
        case 1:
            bits.i = (int)value;
            result = bits.f;
            break;
        default:
            fn_82AA66A8(((PageHeader_82B86B80 *)((unsigned int)literal & 0xfffff000))->owner->context,
                        0x12c0);
        case 2:
            bits.u = (unsigned int)value;
            result = bits.f;
            break;
        }
    }
    out->value = result;
    return out;
}
