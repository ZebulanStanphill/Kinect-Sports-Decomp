typedef unsigned int size_t;
size_t strlen(const char *s);

typedef struct Digits_829D3A28 {
    int vals[20];       /* 0x00 */
    unsigned int count; /* 0x50 */
} Digits_829D3A28;

int fn_829D3A28(const char *s, Digits_829D3A28 *o)
{
    unsigned int i;

    o->count = strlen(s);
    if (o->count >= 20) {
        return (int)0x8007000E;
    }
    for (i = 0; i < o->count; i++) {
        o->vals[i] = s[i] - '0';
        if (o->vals[i] >= 4) {
            return (int)0x80070057;
        }
    }
    return 0;
}
