typedef struct Obj_822CDC98 Obj_822CDC98;
typedef struct Obj_822CDC98Vtbl {
    void *slot0[5];
    int (*Method14)(Obj_822CDC98 *self, void *arg);
} Obj_822CDC98Vtbl;
struct Obj_822CDC98 { Obj_822CDC98Vtbl *vt; };

typedef struct Ctx_822CDC98 {
    unsigned int unk0[9];
    int enabled;
} Ctx_822CDC98;

extern Ctx_822CDC98 *fn_822CEE40(Obj_822CDC98 *self);

int fn_822CDC98(Obj_822CDC98 *self, void *arg)
{
    Ctx_822CDC98 *ctx = fn_822CEE40(self);
    if (ctx == 0 || ctx->enabled == 0) {
        return 0;
    }
    return self->vt->Method14(self, arg);
}
