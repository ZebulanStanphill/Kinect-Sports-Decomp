typedef struct Source_82ABF768 {
    unsigned int pad : 4;
    unsigned int count : 3; /* bits 25-27 */
    unsigned int unused : 12;
    unsigned int swizzle : 8;  /* bits 5-12 */
    unsigned int modifier : 5; /* bits 0-4 */
    int pad4[2];
    void *constant; /* 0x0c */
} Source_82ABF768;

extern unsigned int fn_82B86C90(void *constant, double *values, unsigned int *types);
extern double fn_82B80CD0(double value, unsigned int type, unsigned int modifier);

static __forceinline unsigned int GetBits(const unsigned int *words, unsigned int start, unsigned int count)
{
    unsigned int end = start + count - 1;

    return (words[start >> 5] & ((2 << (end & 31)) - 1) & (-1 << (start & 31))) >> (start & 31);
}

int fn_82ABF768(Source_82ABF768 *source, double value)
{
    double values[4];
    unsigned int types[4];
    unsigned int mask;
    unsigned int i;

    if (source->count == 0) {
        return 0;
    }
    mask = fn_82B86C90(source->constant, values, types);
    for (i = 0; i < source->count; i++) {
        unsigned int component = (source->swizzle >> (i * 2)) & 3;

        if (((1 << component) & mask) == 0) {
            return 0;
        }
        if (fn_82B80CD0(values[component], GetBits(types, component * 2, 2), source->modifier) != value) {
            return 0;
        }
    }
    return 1;
}
