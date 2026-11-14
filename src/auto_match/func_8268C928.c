extern long _InterlockedExchangeAdd(long *, long);

typedef struct DataDesc_8268C928 {
    unsigned int size;
    long refs;
    char data[1];
} DataDesc_8268C928;

typedef struct String_8268C928 {
    unsigned int data;
} String_8268C928;

typedef struct Ref_8268C928 {
    DataDesc_8268C928 *p;
} Ref_8268C928;

extern DataDesc_8268C928 lbl_83155184;
extern unsigned int fn_8268ACE8(String_8268C928 *s);
extern int fn_826BD7D0(int index, const char *utf8, int length);
extern void fn_8268C6A8(Ref_8268C928 *out, const char *text, unsigned int size);

static __forceinline unsigned char IsAscii(DataDesc_8268C928 *d)
{
    return (unsigned char)(d->size >> 31);
}

Ref_8268C928 *fn_8268C928(Ref_8268C928 *out, String_8268C928 *s, unsigned int start, unsigned int end)
{
    if (start < fn_8268ACE8(s) && start < end) {
        DataDesc_8268C928 *desc = (DataDesc_8268C928 *)(s->data & ~3u);
        if (IsAscii(desc)) {
            fn_8268C6A8(out, desc->data + start, end - start);
            return out;
        } else {
            int i = fn_826BD7D0(start, desc->data, -1);
            fn_8268C6A8(out, desc->data + i, fn_826BD7D0(end - start, desc->data + i, -1));
        }
        return out;
    }
    out->p = &lbl_83155184;
    _InterlockedExchangeAdd(&lbl_83155184.refs, 1);
    return out;
}
