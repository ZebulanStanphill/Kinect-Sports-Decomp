typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Blend_82344FF8 {
    float from;
    float to;
    float value;
} Blend_82344FF8;

typedef struct Anim_82344FF8 {
    char pad0[0x18];
    Blend_82344FF8 blends[6];   /* 0x18 */
} Anim_82344FF8;

typedef struct Clip_82344FF8 {
    char pad0[0x108];
    float time;                 /* 0x108 */
    float start;                /* 0x10c */
} Clip_82344FF8;

typedef struct Player_82344FF8 {
    char pad0[0x10];
    Clip_82344FF8 *clip;        /* 0x10 */
} Player_82344FF8;

typedef struct State_82344FF8 {
    char pad0[0x188];
    int reset;                  /* 0x188 */
} State_82344FF8;

typedef struct Body_82344FF8 {
    char pad0[0xe0];
    __vector4 velocity;         /* 0xe0 */
    char padf0[0x28];
    Player_82344FF8 *player;    /* 0x118 */
    char pad11c[0x84];
    State_82344FF8 *state;      /* 0x1a0 */
} Body_82344FF8;

typedef struct Self_82344FF8 {
    char pad0[0xc];
    Body_82344FF8 **body;       /* 0x0c */
    char pad10[4];
    Anim_82344FF8 *anim;        /* 0x14 */
} Self_82344FF8;

extern void fn_827F57E8(Clip_82344FF8 *clip, float speed, float blend);
extern void fn_8234E808(Anim_82344FF8 *anim);
extern void fn_82338F48(Body_82344FF8 *body, int flag);
extern float lbl_821CA45C[];
extern const float lbl_8218E8FC[];

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline void Rewind(Clip_82344FF8 *c)
{
    c->time = c->start;
}

static __forceinline void Blend(Anim_82344FF8 *anim, float t)
{
    Blend_82344FF8 *b;

    for (b = anim->blends; b != anim->blends + 6; b++)
        b->value = (b->to - b->from) * t + b->from;
    fn_8234E808(anim);
}

void fn_82344FF8(Self_82344FF8 *self)
{
    __vector4 len = Length3((*self->body)->velocity);

    if (len.vector4_f32[0] == 0.0f) {
        Player_82344FF8 *player = (*self->body)->player;
        fn_827F57E8(player->clip, lbl_821CA45C[1], lbl_8218E8FC[0]);
        Rewind(player->clip);
        Blend(self->anim, 1.0f);
        (*self->body)->state->reset = 1;
        fn_82338F48(*self->body, 1);
    } else {
        Blend(self->anim, 0.0f);
    }
}
