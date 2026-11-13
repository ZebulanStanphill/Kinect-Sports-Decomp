typedef struct S_826D7EC0 S_826D7EC0;

typedef struct {
    int f0;
    char s[0x4c];
} Src_826D8D40;

typedef struct {
    char s[0x4c];
    int f4c;
    int f50;
    int f54;
} Dst_826D8D40;

extern S_826D7EC0 *fn_826D7EC0(S_826D7EC0 *d, S_826D7EC0 *s);

S_826D7EC0 *fn_826D8D40(Src_826D8D40 *src, Dst_826D8D40 *dst)
{
    dst->f50 = 0;
    dst->f4c = 0;
    dst->f54 = 0;
    return fn_826D7EC0((S_826D7EC0 *)dst->s, (S_826D7EC0 *)src->s);
}
