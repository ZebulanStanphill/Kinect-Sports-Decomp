typedef struct Ref_8268A3E8 { int pad; long refs; } Ref_8268A3E8;
typedef struct Str_8268A3E8 {
    unsigned int tagged;
} Str_8268A3E8;
typedef struct Entry_8268A3E8 {
    Str_8268A3E8 name;
    float value;
    int extra;
} Entry_8268A3E8;
typedef struct S_8268A3E8 {
    char pad[0xc];
    void *table;           /* 0x0c */
} S_8268A3E8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268C510(Str_8268A3E8 *s, const char *text);
extern Entry_8268A3E8 *fn_8268A388(void *table, Str_8268A3E8 **key);
extern void fn_8268BA10(Entry_8268A3E8 *dst, Entry_8268A3E8 *src);

int fn_8268A3E8(S_8268A3E8 *self, Entry_8268A3E8 *out, const char *text)
{
    Str_8268A3E8 s;
    Str_8268A3E8 *key;
    Entry_8268A3E8 *e;
    Ref_8268A3E8 *r;

    if (self->table != 0) {
        fn_8268C510(&s, text);
        key = &s;
        e = fn_8268A388(self->table, &key);
        r = (Ref_8268A3E8 *)(s.tagged & ~3u);
        if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
            fn_8267BE38(r);
        }
        if (e != 0) {
            fn_8268BA10(out, e);
            out->value = e->value;
            out->extra = e->extra;
            return 1;
        }
    }
    return 0;
}
