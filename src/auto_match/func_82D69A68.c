typedef struct Hdr_82D69A68 {
    char pad0[0xb];
    unsigned char flags;     /* 0x0b */
    union {
        int word;
        unsigned char b[4];
    } u;                     /* 0x0c */
} Hdr_82D69A68;

typedef struct Fmt_82D69A68 {
    char pad0[0xc];
    int kind;                /* 0x0c */
} Fmt_82D69A68;

typedef struct Self_82D69A68 {
    int *src;                /* 0x00 */
    Fmt_82D69A68 **fmt;      /* 0x04 */
    char pad8[0x18];
    char state[1];           /* 0x20 */
} Self_82D69A68;

extern void fn_82DD9A10(Hdr_82D69A68 *h, int src, Fmt_82D69A68 *fmt, void *state);
extern void fn_82DD9828(Hdr_82D69A68 *h, int src, Fmt_82D69A68 *fmt, void *state);

static __forceinline void ClearFlag(unsigned char *f) { *f &= ~0x10; }

char *fn_82D69A68(Self_82D69A68 *self, char *out, Hdr_82D69A68 *h)
{
    Fmt_82D69A68 *fmt = *self->fmt;
    int src = *self->src;
    if (fmt->kind == 3) {
        fn_82DD9A10(h, src, fmt, self->state);
    } else {
        fn_82DD9828(h, src, fmt, self->state);
    }
    out[2] = 0;
    ClearFlag(&h->flags);
    h->u.word = 0;
    return (char *)h + ((h->u.b[2] * 4 + h->u.b[1] + h->u.b[0]) * 2 + 0x1f & ~0xf);
}
