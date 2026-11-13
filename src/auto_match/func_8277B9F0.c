typedef struct Fmt_8277B9F0 { int pad0; unsigned int size; } Fmt_8277B9F0;
typedef struct S_8277B9F0 {
    void *busy;              /* 0x0 */
    unsigned int count;      /* 0x4 */
    int pad8;
    Fmt_8277B9F0 *fmt;       /* 0xc */
} S_8277B9F0;

extern Fmt_8277B9F0 *fn_8277B808(S_8277B9F0 *s);

int fn_8277B9F0(S_8277B9F0 *s)
{
    unsigned int bytes;
    if (s->busy != 0)
        return 0;
    bytes = s->fmt->size * s->count;
    s->fmt = fn_8277B808(s);
    s->count = bytes / s->fmt->size;
    return 1;
}
