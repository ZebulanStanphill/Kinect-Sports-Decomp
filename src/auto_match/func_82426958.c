typedef struct Limits_82426958 {
    char pad0[0x7bc];
    unsigned int f7bc; /* 0x7bc */
    unsigned int f7c0; /* 0x7c0 */
} Limits_82426958;

typedef struct Player_82426958 {
    Limits_82426958 *limits; /* 0x0 */
} Player_82426958;

typedef struct Ctx_82426958 {
    char pad0[0x2b20];
    Player_82426958 *active; /* 0x2b20 */
    char pad2b24[0x2b50 - 0x2b24];
    int target; /* 0x2b50 */
} Ctx_82426958;

typedef struct Self_82426958 {
    int f0;
    Player_82426958 *player; /* 0x4 */
    Ctx_82426958 *ctx;       /* 0x8 */
} Self_82426958;

typedef struct Info_82426958 {
    char pad0[0x14];
    unsigned int f14; /* 0x14 */
} Info_82426958;

typedef struct Arg_82426958 {
    unsigned int f0; /* 0x0 */
    int f4;
    int f8;
    int fc; /* 0xc */
} Arg_82426958;

extern void fn_82414950(int target, int value, int code);

void fn_82426958(Self_82426958 *self, Info_82426958 *info, Arg_82426958 *arg, int kind)
{
    Ctx_82426958 *ctx = self->ctx;
    unsigned int n;

    if (self->player != ctx->active)
        return;
    if (kind != 9 && info->f14 > self->player->limits->f7c0) {
        fn_82414950(ctx->target, 0, 0xe);
        return;
    }
    switch (kind) {
        int typeMatches;
    case 2:
    case 5:
        fn_82414950(ctx->target, 0, 0x16);
        break;
    case 3:
        fn_82414950(ctx->target, 0, 0x19);
        break;
    case 4:
        fn_82414950(ctx->target, 0, 0x18);
        break;
    case 6:
    case 7:
        fn_82414950(ctx->target, 0, 0x13);
        break;
    case 8:
        if (arg->f0 > self->player->limits->f7bc)
            fn_82414950(ctx->target, 0, 0x10);
        else
            fn_82414950(ctx->target, 0, 0xf);
        break;
    case 11:
    case 13:
        typeMatches = arg->fc == 6 || arg->fc == 7;
        if (typeMatches)
            fn_82414950(ctx->target, 0, 0x14);
        else
            fn_82414950(ctx->target, 0, 0x12);
        break;
    case 9:
        n = info->f14 + 1;
        switch (n) {
        case 1:
            fn_82414950(ctx->target, n, 9);
            break;
        case 2:
            fn_82414950(ctx->target, n, 0xa);
            break;
        case 3:
            fn_82414950(ctx->target, n, 0xb);
            break;
        case 0xc:
            fn_82414950(ctx->target, n, 0xd);
            break;
        default:
            fn_82414950(ctx->target, n, 0xc);
            break;
        }
        break;
    case 10:
        typeMatches = arg->fc == 6 || arg->fc == 7;
        if (typeMatches)
            fn_82414950(ctx->target, 0, 0x15);
        else
            fn_82414950(ctx->target, 0, 0x11);
        break;
    case 12:
        break;
    }
}
