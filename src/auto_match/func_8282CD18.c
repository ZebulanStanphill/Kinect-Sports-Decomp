typedef struct Entry_8282CD18 {
    unsigned int a;
    unsigned int pad[3];
    unsigned int b;
} Entry_8282CD18;

typedef struct Obj_8282CD18 {
    char pad0[0x1c];
    unsigned int base;              /* 0x1c */
    char pad20[0x31];
    unsigned char count;            /* 0x51 */
    unsigned char flag;             /* 0x52 */
    char pad53[5];
    Entry_8282CD18 e[2];            /* 0x58 */
    char pad80[0x94];
    unsigned char *recs;            /* 0x114 */
    char pad118[0x1c];
    unsigned char flags;            /* 0x134 */
} Obj_8282CD18;

typedef struct Stream_8282CD18 {
    void *ctx;
    int pad4;
    int (*read)(void *ctx, unsigned int a, unsigned int b);   /* 0x8 */
    int (*seek)(void *ctx, unsigned int pos, int whence);     /* 0xc */
    void (*done)(void *ctx);                                  /* 0x10 */
} Stream_8282CD18;

extern unsigned int fn_828252D0(unsigned int size);
extern void fn_8282F2A0(unsigned int dst, unsigned int src, unsigned int buf, unsigned int *len);

#define REC_SIZE(r) (*(unsigned int *)((r) + 9))
#define REC_PTR(r)  (*(unsigned int *)((r) + 0xd))
#define REC_OFF(r)  (*(unsigned int *)((r) + 0x1d))

int fn_8282CD18(Obj_8282CD18 *o, Stream_8282CD18 *s)
{
    unsigned int sum;
    unsigned int v;
    int i;
    unsigned char j;
    unsigned char *r;
    unsigned int buf;
    unsigned int tmp;

    if ((o->flags & 4) == 0) {
        sum = 0;
        for (i = 0; i < 2; i++) {
            if (o->flag != 0) {
                v = o->e[i].b;
            } else {
                v = o->e[i].a;
            }
            sum += v;
        }
        if (s->seek(s->ctx, o->base + sum, 0) != 0) {
            return 3;
        }
        for (j = 0; j < o->count; j++) {
            r = o->recs + j * 0x21;
            if (REC_SIZE(r) != 0) {
                buf = fn_828252D0(REC_SIZE(r) + 0x80);
                if (o->flag != 0 && REC_SIZE(r) > REC_OFF(r)) {
                    if (s->read(s->ctx, REC_OFF(r), REC_SIZE(r) - REC_OFF(r) + buf + 0x80) != 0) {
                        return 3;
                    }
                    tmp = REC_SIZE(r);
                    fn_8282F2A0(REC_SIZE(r) - REC_OFF(r) + buf + 0x80, REC_OFF(r), buf, &tmp);
                } else {
                    if (s->read(s->ctx, REC_SIZE(r), buf) != 0) {
                        return 3;
                    }
                }
                REC_PTR(r) = buf;
            } else {
                REC_PTR(r) = 0;
            }
        }
        s->done(s->ctx);
        o->flags |= 4;
    }
    return 0;
}
