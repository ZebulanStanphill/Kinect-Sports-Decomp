typedef struct Rec_82AC3BA8 { unsigned int w0; unsigned int w1; unsigned char b8; char pad[3]; } Rec_82AC3BA8;
typedef struct Ctx_82AC3BA8 { char pad[0x28]; char f28; } Ctx_82AC3BA8;

int fn_82AC3BA8(Rec_82AC3BA8 *recs, int idx, unsigned char need, Ctx_82AC3BA8 *ctx)
{
    Rec_82AC3BA8 *r = &recs[idx];
    int a = 0, b = 0;
    unsigned char c = 0;
    unsigned int k = r->b8 & 0x1f;
    unsigned int t;
    unsigned int k2, t2;
    if (k <= 0x1b) {
        if (k < 0x18) {
            if (k >= 0x14) {
                k2 = r->b8 & 0x1f;
                if (k2 >= 0x18)
                    goto fail;
                a = 1;
                c = 1;
            }
        } else {
            if (ctx->f28 == 0)
                goto fail;
            a = 1;
        }
    } else if (k != 0x1c) {
        if (k != 0x1d)
            goto fail;
        b = 1;
    }
    t = r->w0 >> 26;
    if (t <= 0x22) {
        if (t < 0x1b) {
            if (t >= 0x17) {
                if (t >= 0x19) {
                    t2 = r->w0 >> 26;
                    if (t2 >= 0x1b)
                        goto fail;
                } else
                    b = b + 1;
            }
            goto check;
        }
        c = 1;
    } else {
        t2 = r->w0 >> 26;
        if (t2 < 0x23)
            goto fail;
        if (t > 0x27) {
            if (t != 0x28) {
                if (t <= 0x29)
                    goto fail;
                if (t > 0x32)
                    goto fail;
            }
            goto check;
        }
        if (ctx->f28 == 0)
            goto fail;
    }
    a = a + 1;
check:
    if (a <= 1 && b <= 1 && (c == 0 || need != 0))
        return 0;
fail:
    return 0x80004005;
}
