typedef struct {
    char pad[0x28];
    int scale;
    char pad2C[8];
} Entry_82F1CBA0;

typedef struct {
    char pad[0x60];
    int index;
    char pad64[0xb0];
} Channel_82F1CBA0;

typedef struct {
    char pad[0x2d0];
    int current;
    char pad2D4[0x6d24 - 0x2d4];
    Entry_82F1CBA0 *table;
} Ctx_82F1CBA0;

extern short fn_82E85220(Ctx_82F1CBA0 *ctx, int value, int scale);

void fn_82F1CBA0(Ctx_82F1CBA0 *ctx, int mode, short *in, short *out, Channel_82F1CBA0 *ch)
{
    int i;
    if (mode == 0 || mode == 1 || mode == 4 || mode == 5) {
        Channel_82F1CBA0 *base = ch - ctx->current;
        out[0] = out[8] = fn_82E85220(ctx,
            ctx->table[base->index].scale * in[0],
            ctx->table[ch->index].scale);
        for (i = 1; i < 8; i++) {
            out[i] = fn_82E85220(ctx, (ch - ctx->current)->index * in[i], ch->index);
            out[i + 8] = fn_82E85220(ctx, (ch - ctx->current)->index * in[i + 8], ch->index);
        }
    } else {
        for (i = 0; i < 16; i++) {
            out[i] = in[i];
        }
    }
}
