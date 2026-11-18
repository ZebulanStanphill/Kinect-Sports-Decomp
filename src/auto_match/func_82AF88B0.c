typedef struct Operand_82AF88B0 {
    unsigned int pad0 : 4; /* 0x00 */
    unsigned int count : 3;
    unsigned int pad1 : 12;
    unsigned int swizzle : 8;
    unsigned int modifiers : 5;
    unsigned char pad04[8];
    void *source; /* 0x0c */
} Operand_82AF88B0;

extern void fn_82B86C90(void *source, double *values, unsigned int *types);
extern double fn_82B80CD0(double value, unsigned int type, unsigned int modifiers);

static __forceinline unsigned int GetBits_82AF88B0(const unsigned int *bits, unsigned int first,
                                                   unsigned int last)
{
    unsigned int high = (2u << (last & 31)) - 1;
    unsigned int low = ~0u << (first & 31);

    return (bits[first >> 5] & high & low) >> (first & 31);
}

void fn_82AF88B0(Operand_82AF88B0 *operand, double *values)
{
    unsigned int types[1];
    unsigned int modifiers;
    unsigned int i;
    unsigned int component;

    fn_82B86C90(operand->source, values, types);
    modifiers = operand->modifiers;
    for (i = 0; i < operand->count; i++) {
        component = (operand->swizzle >> (i * 2)) & 3;
        values[i] = fn_82B80CD0(values[component], GetBits_82AF88B0(types, component * 2, component * 2 + 1),
                                modifiers);
    }
}
