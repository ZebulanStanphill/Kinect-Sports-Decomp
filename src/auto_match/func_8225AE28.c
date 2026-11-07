typedef struct Obj_8225AE28 Obj_8225AE28;

typedef struct Vtbl_8225AE28 {
    void *slots[5];
    void (*Get)(Obj_8225AE28 *self, int key, void *out);
} Vtbl_8225AE28;

struct Obj_8225AE28 {
    Vtbl_8225AE28 *vt;
};

extern void *fn_8225AE88(void *ctx);
extern void fn_8225ADC0(void *ctx, void *buf);

void fn_8225AE28(Obj_8225AE28 *self, int key, void *ctx)
{
    void *dst;
    int buf[4];

    dst = fn_8225AE88(ctx);
    if (dst != 0) {
        self->vt->Get(self, key, dst);
    } else {
        self->vt->Get(self, key, buf);
        fn_8225ADC0(ctx, buf);
    }
}
