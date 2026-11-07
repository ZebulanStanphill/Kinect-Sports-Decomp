typedef struct View_826F0540 {
    const char *ptr;
    unsigned int len;
} View_826F0540;

typedef struct Bits_826F0540 {
    unsigned int a : 5;
    unsigned int b : 5;
    unsigned int rest : 22;
} Bits_826F0540;

extern unsigned int fn_826F0360(View_826F0540 *v, unsigned int value, int delim);

static int findChar_826F0540(View_826F0540 *v, char c)
{
    unsigned int i;
    for (i = 0; i < v->len; i++) {
        if (v->ptr[i] == c) {
            return (int)i;
        }
    }
    return -1;
}

void fn_826F0540(Bits_826F0540 *bits, View_826F0540 *v)
{
    if (v->len != 0) {
        int pos = findChar_826F0540(v, '.');
        bits->b = fn_826F0360(v, bits->b, 0x3a);
        if (pos >= 0) {
            unsigned int n;
            unsigned int len;
            bits->a = 0;
            n = 1;
            len = v->len;
            if (len < 1) {
                n = len;
            }
            v->len = len - n;
            v->ptr += n;
            bits->a = fn_826F0360(v, bits->a, 0x3a);
        }
    }
}
