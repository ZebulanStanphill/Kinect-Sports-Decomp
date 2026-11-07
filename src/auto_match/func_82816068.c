typedef struct Ctx_82816068 Ctx_82816068;
typedef struct Obj_82816068 Obj_82816068;

typedef int (*Cb_82816068)(Obj_82816068 *obj, Ctx_82816068 *ctx, int r);

typedef struct Entry_82816068 {
    unsigned a;     /* 0x00 (0x58) */
    unsigned b;     /* 0x04 (0x5c) */
    unsigned c;     /* 0x08 (0x60) */
    unsigned size;  /* 0x0c (0x64) */
    unsigned e;     /* 0x10 (0x68) */
} Entry_82816068;

typedef struct Info_82816068 {
    char pad[0x58];
    Entry_82816068 ent[2];
} Info_82816068;

struct Ctx_82816068 {
    int pad0;
    int pad4;
    int pos;            /* 0x08 */
    int state;          /* 0x0c */
    unsigned flags;     /* 0x10 */
    int arg14;          /* 0x14 */
    int handle;         /* 0x18 */
    Info_82816068 *info;/* 0x1c */
    void *src;          /* 0x20 */
    char pad24[0x6c - 0x24];
    unsigned count;     /* 0x6c */
};

struct Obj_82816068 {
    int pad0;
    void (*read)(int h, int pos, unsigned size, unsigned t, Cb_82816068 cb, Ctx_82816068 *ctx);
    void (*readEx)(int h, int pos, unsigned size, unsigned t, unsigned a, Cb_82816068 cb, Ctx_82816068 *ctx);
};

extern int fn_828220E0(Ctx_82816068 *ctx);
extern int fn_82814E30(Ctx_82816068 *ctx);
extern int fn_82815268(Obj_82816068 *obj, Ctx_82816068 *ctx, int a);
extern int fn_82815E50(Obj_82816068 *obj, Ctx_82816068 *ctx, int r);
extern void fn_82820290(void *src, int idx, unsigned *out);
extern int (*lbl_8320A5C8)(int h, int pos, unsigned size, unsigned t);
extern int (*lbl_8320A5CC)(int h, int pos, unsigned size, unsigned t, unsigned a);

int fn_82816068(Obj_82816068 *obj, Ctx_82816068 *ctx)
{
    void *src = ctx->src;
    int result = 0;
    unsigned char i;

    if (fn_828220E0(ctx) != 0) {
        ctx->state |= 1;
    } else {
        ctx->flags |= 8;
    }
    if (ctx->state != 0) {
        return fn_82815268(obj, ctx, ctx->arg14);
    }
    if (fn_82814E30(ctx) != 0) {
        ctx->state |= 8;
        return fn_82815268(obj, ctx, ctx->arg14);
    }

    ctx->count = 0;
    for (i = 0; i < 2; i++) {
        if (ctx->info->ent[i].size != 0) {
            ctx->count++;
        }
    }

    if (ctx->count != 0) {
        for (i = 0; i < 2; i++) {
            Entry_82816068 *e = &ctx->info->ent[i];
            unsigned size = e->size;
            if (size != 0) {
                int flag;
                int pos;
                unsigned t;
                unsigned v;

                if ((ctx->flags & 0x1000) && e->e < e->a) {
                    flag = 1;
                } else {
                    flag = 0;
                }
                pos = ctx->pos;
                t = e->c + e->b;
                if (src != 0) {
                    fn_82820290(src, i + 1, &v);
                    t = v + t;
                }
                if (e->e < e->a && !flag) {
                    t = (e->a - e->e + t + 0x43) & ~3u;
                }
                ctx->pos = size + ctx->pos;
                if (ctx->flags & 2) {
                    if (flag) {
                        obj->readEx(ctx->handle, pos, size, t, e->a, fn_82815E50, ctx);
                    } else {
                        obj->read(ctx->handle, pos, size, t, fn_82815E50, ctx);
                    }
                } else {
                    int r;
                    if (flag) {
                        r = lbl_8320A5CC(ctx->handle, pos, size, t, e->a);
                    } else {
                        r = lbl_8320A5C8(ctx->handle, pos, size, t);
                    }
                    result = fn_82815E50(obj, ctx, r);
                }
            }
        }
    } else {
        ctx->count = 1;
        result = fn_82815E50(obj, ctx, 0);
    }
    return result;
}
