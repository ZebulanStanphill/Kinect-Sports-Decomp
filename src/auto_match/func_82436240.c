typedef struct Board_82436240 { char pad[0xd4]; void *ui; } Board_82436240;
typedef struct Ctx_82436240 { Board_82436240 *board; char pad[0xf4]; int isTime; } Ctx_82436240;
typedef struct Self_82436240 { char pad[0x40]; Ctx_82436240 *ctx; } Self_82436240;
extern void fn_82358FD8(Board_82436240 *strings, unsigned short *buf, int size, const char *id);
extern void fn_82291F90(void *ui, int slot, int whole, int frac, const char *name);
extern void fn_82292100(void *ui, int slot, int whole, int frac, unsigned short *suffix, const char *name);

void fn_82436240(Self_82436240 *self, int slot, int *value, const char *name)
{
    Ctx_82436240 *ctx = self->ctx;
    if (ctx->isTime != 0) {
        fn_82291F90(ctx->board->ui, slot, *value / 100, *value % 100, name);
    } else {
        unsigned short suffix[32];
        fn_82358FD8(ctx->board, suffix, 0x20, "leaderboard_postfix_distance");
        fn_82292100(self->ctx->board->ui, slot, *value / 100, *value % 100, suffix, name);
    }
}
