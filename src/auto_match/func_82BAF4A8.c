typedef struct { char pad0[0x2c]; int min; int max; } Range_82BAF4A8;
typedef struct {
    char pad0[0x10];
    char jb[0x540];
    Range_82BAF4A8 *range;
    int error;
} Ctx_82BAF4A8;
typedef struct {
    Ctx_82BAF4A8 *ctx;
    char pad4[0x1c];
    unsigned char up;
    char pad21[7];
    int value;
} Obj_82BAF4A8;

extern __declspec(noreturn) void longjmp(void *jb, int v);
int fn_82BAF4A8(Obj_82BAF4A8 *o)
{
    int v;
    Ctx_82BAF4A8 *c;
    if (o->up)
        o->value = o->value + 1;
    else
        o->value = o->value - 1;
    v = o->value;
    c = o->ctx;
    if (v < c->range->min || v > c->range->max) {
        c->error = 0x1f;
        longjmp(c->jb, 1);
    }
    return v;
}
