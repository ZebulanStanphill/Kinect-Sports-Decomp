typedef struct Inner_82A5F578 {
    unsigned char pad[0x418];
    unsigned int flags;
} Inner_82A5F578;

typedef struct Ctx_82A5F578 {
    int unk0;
    Inner_82A5F578 *inner;
} Ctx_82A5F578;

typedef struct State_82A5F578 {
    unsigned short kind;   /* 0x0 */
    unsigned short f2;     /* 0x2 */
    unsigned int f4;       /* 0x4 */
    unsigned short pad8[3];/* 0x8 */
    unsigned short fe;     /* 0xe */
    unsigned short pad10;  /* 0x10 */
    unsigned short f12;    /* 0x12 */
} State_82A5F578;

int fn_82A5F578(Ctx_82A5F578 *ctx, State_82A5F578 *src, State_82A5F578 *dst, int apply)
{
    int hr = 0;

    if (ctx->inner->flags & 1) {
        if (dst->f2 != src->f2) {
            hr = (int)0x88970001;
            if (apply != 0)
                dst->f2 = src->f2;
        }
    }
    if (ctx->inner->flags & 2) {
        if (dst->f4 != src->f4) {
            hr = (int)0x88970001;
            if (apply != 0)
                dst->f4 = src->f4;
        }
    }
    if ((ctx->inner->flags & 4) == 0)
        return hr;
    if (dst->fe != src->fe) {
        hr = (int)0x88970001;
        if (apply != 0)
            dst->fe = src->fe;
    }
    if (src->kind == 0xfffe) {
        if (dst->kind == 0xfffe) {
            if (dst->f12 != src->f12) {
                hr = (int)0x88970001;
                if (apply != 0)
                    dst->f12 = src->f12;
            }
        } else {
            if (dst->fe != src->f12)
                hr = (int)0x88970001;
        }
    } else if (dst->kind == 0xfffe) {
        if (dst->f12 != src->fe) {
            hr = (int)0x88970001;
            if (apply != 0)
                dst->f12 = src->fe;
        }
    }
    return hr;
}
