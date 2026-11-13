typedef union {
    struct { int high; unsigned int low; } u;
    __int64 quad;
} Large_82A36838;

typedef struct {
    char pad0[0x4348];
    int f4348;
    int f434c;
    Large_82A36838 f4350;
    Large_82A36838 f4358;
    int f4360;
    int f4364;
    int f4368;
    int f436c;
    int f4370;
    int f4374;
    unsigned char f4378;
} Sub_82A36838;

typedef struct {
    int f0;
    int f4;
    unsigned int flags;
    int fc;
    Sub_82A36838 sub;
} Obj_82A36838;

extern void fn_82A39258(Sub_82A36838 *sub);

int fn_82A36838(Obj_82A36838 *self)
{
    Sub_82A36838 *s = &self->sub;
    fn_82A39258(s);
    if (self->flags & 1) {
        s->f4350.u.high = 0;
        s->f4360 = 0;
    } else if (self->flags & 0x80000000) {
        s->f4348 = 0;
        s->f4350.quad = 0;
        s->f4358.quad = 0;
        s->f4368 = 0;
        s->f436c = 0;
        s->f4370 = 0;
        s->f4374 = 0;
        s->f4378 = 0;
    } else {
        return 0;
    }
    s->f4364 = 0;
    return 0;
}
