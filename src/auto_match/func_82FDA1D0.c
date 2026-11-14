typedef struct Range_82FDA1D0 {
    float v[4];
    int a;
    int b;
} Range_82FDA1D0;

typedef struct Ranges_82FDA1D0 {
    Range_82FDA1D0 r[3];
} Ranges_82FDA1D0;

typedef struct Block_82FDA1D0 {
    int a;                          /* 0x144 */
    int b;                          /* 0x148 */
    char pad8[0x14 - 0x8];
    Ranges_82FDA1D0 ranges;         /* 0x158 */
} Block_82FDA1D0;

typedef struct Self_82FDA1D0 {
    void *vt;
    int f4;
    int f8;
    char member[0x128 - 0xc];       /* 0xc */
    float pos[3];                   /* 0x128 */
    char pad134[0x144 - 0x134];
    Block_82FDA1D0 block;           /* 0x144 */
} Self_82FDA1D0;

extern void fn_82FC99C0(void *member);
extern char lbl_8216E424[];

static __forceinline void Ranges_init(Ranges_82FDA1D0 *r)
{
    int i;
    for (i = 0; i < 3; i++) {
        r->r[i].v[0] = 0.0f;
        r->r[i].v[1] = 0.0f;
        r->r[i].v[2] = 0.0f;
        r->r[i].v[3] = 0.0f;
        r->r[i].a = 0;
        r->r[i].b = 0;
    }
}

Self_82FDA1D0 *fn_82FDA1D0(Self_82FDA1D0 *self)
{
    self->vt = lbl_8216E424;
    fn_82FC99C0(self->member);
    self->pos[1] = 0.0f;
    self->pos[2] = 0.0f;
    self->pos[0] = 0.0f;
    {
        Block_82FDA1D0 *b = &self->block;
        Ranges_init(&b->ranges);
        self->f4 = 0;
        self->f8 = 0;
        b->a = 0;
        b->b = 0;
    }
    return self;
}
