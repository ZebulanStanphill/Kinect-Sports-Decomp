typedef struct { int f0; int f4; int bits; unsigned int mask; char pad10[0x2c]; int mode; char pad40[0x94]; int enabled; } Config_82E67B18;
typedef struct { Config_82E67B18 *cfg; } Ctx_82E67B18;
typedef struct { char pad0[0x24]; unsigned char *out; char pad28[0x10]; unsigned int value; char pad3c[0xc]; int bitpos; char pad4c[0x28]; unsigned char *hdr; char pad78[9]; unsigned char count; } State_82E67B18;
typedef union { unsigned int i; unsigned char c[4]; } BE_82E67B18;
static __forceinline unsigned int ToBE(unsigned int x)
{
    BE_82E67B18 u;
    u.i = x;
    return ((unsigned int)(unsigned short)((u.c[0] << 8) | u.c[1]) << 16) | (u.c[2] << 8) | u.c[3];
}
void fn_82E67B18(Ctx_82E67B18 *ctx, State_82E67B18 *s, int flag, int enable)
{
    Config_82E67B18 *c = ctx->cfg;
    if (c->enabled == 1 && enable != 0) {
        if (c->mode <= 2) {
            unsigned char n = (*s->hdr & 0xf) + 1;
            *s->hdr &= 0xf0;
            *s->hdr |= n;
        } else {
            if (s->count == 0) {
                int sh = 0x1a - c->bits;
                unsigned int *w = (unsigned int *)s->hdr;
                unsigned int v = *w & ToBE(~(c->mask << sh));
                *w = v;
                *w = ToBE(s->value << sh) | v;
                if (flag != 0) *s->hdr |= 8;
            }
            if (s->count != 0) {
                if (s->bitpos == 0) {
                    s->out[-1] |= 1;
                } else {
                    *s->out |= 1 << (8 - s->bitpos);
                }
            }
        }
    }
    s->count++;
}
