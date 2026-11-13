typedef struct Sprite_826CBBC0 Sprite_826CBBC0;

typedef struct Fn_826CBBC0 {
    char pad[0x18];
    int ctx;
    int argc;
} Fn_826CBBC0;

extern Sprite_826CBBC0 *fn_826C59F8(Fn_826CBBC0 *self);
extern void *fn_826957D0(Fn_826CBBC0 *self, int index);
extern double fn_826972E0(void *arg, int ctx);
extern void fn_826CABB0(Sprite_826CBBC0 *s, float x, float y);

void fn_826CBBC0(Fn_826CBBC0 *self)
{
    Sprite_826CBBC0 *s;
    float x;
    float y;

    s = fn_826C59F8(self);
    if (s != 0 && self->argc >= 2) {
        x = (float)fn_826972E0(fn_826957D0(self, 0), self->ctx);
        y = (float)fn_826972E0(fn_826957D0(self, 1), self->ctx);
        fn_826CABB0(s, x, y);
    }
}
