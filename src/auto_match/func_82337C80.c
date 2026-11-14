typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Player_82337C80 Player_82337C80;

typedef struct Vec_82337C80 {
    __vector4 v;
} Vec_82337C80;

typedef struct Mgr_82337C80 {
    char pad0[0x1c4];
    Player_82337C80 **players;      /* 0x1c4 */
    char pad1c8[0xc];
    int current;                    /* 0x1d4 */
} Mgr_82337C80;

typedef struct Sub_82337C80 {
    char pad0[0x40];
    Mgr_82337C80 *mgr;              /* 0x40 */
} Sub_82337C80;

typedef struct Ctx_82337C80 {
    char pad0[0x174];
    char *game;                     /* 0x174 */
} Ctx_82337C80;

typedef struct Info_82337C80 {
    float offset;                   /* 0x00 */
    char pad4[0x8];
    Ctx_82337C80 *ctx;              /* 0x0c */
    char pad10[0x34];
    unsigned char side;             /* 0x44 */
} Info_82337C80;

typedef struct Self_82337C80 {
    char pad0[0x90];
    __vector4 position;             /* 0x90 */
    char padA0[0x100];
    Info_82337C80 *info;            /* 0x1a0 */
} Self_82337C80;

extern Vec_82337C80 *fn_82435FA8(Vec_82337C80 *out, Player_82337C80 *player, float offset, unsigned char side);
extern float fn_8255A070(__vector4 dir);

static __forceinline Player_82337C80 *GetCurrent(Ctx_82337C80 *ctx)
{
    Sub_82337C80 *s = (Sub_82337C80 *)(ctx->game + 0x1c);
    if (s->mgr->current == -1)
        return 0;
    return s->mgr->players[s->mgr->current];
}

float fn_82337C80(Self_82337C80 *self)
{
    Vec_82337C80 dir;
    float offset;
    unsigned char side;

    if (GetCurrent(self->info->ctx) != 0) {
        offset = self->info->offset;
        side = self->info->side;
        fn_82435FA8(&dir, GetCurrent(self->info->ctx), offset, side);
        return fn_8255A070(dir.v);
    }
    dir.v = self->position;
    return dir.v.vector4_f32[1];
}
