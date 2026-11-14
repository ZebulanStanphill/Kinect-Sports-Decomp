typedef struct Result_822964C0 {
    unsigned char failed;
    void *handle;
} Result_822964C0;

typedef struct Facet_822964C0 {
    char pad[0x8];
    char cvt[1]; /* 0x08 */
} Facet_822964C0;

extern int fn_82F85C08(unsigned short *out, const char *in, unsigned int n, int *state, void *cvt);
extern unsigned short fn_82296E38(void *handle, unsigned short ch);

Result_822964C0 *fn_822964C0(Result_822964C0 *out, Facet_822964C0 *self, Result_822964C0 result,
                             const char *s, unsigned int count)
{
    for (; count != 0; count--, s++) {
        char c = *s;
        unsigned short wc = 0;
        int state = 0;
        fn_82F85C08(&wc, &c, 1, &state, self->cvt);
        if (result.handle == 0 || fn_82296E38(result.handle, wc) == 0xffff)
            result.failed = 1;
    }
    *out = result;
    return out;
}
