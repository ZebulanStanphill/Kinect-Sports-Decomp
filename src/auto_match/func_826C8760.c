typedef struct Sprite_826C8760 Sprite_826C8760;

typedef struct Fn_826C8760 {
    char pad[0x18];
    int ctx;
    int argc;
} Fn_826C8760;

extern Sprite_826C8760 *fn_826C59F8(Fn_826C8760 *self);
extern void *fn_826957D0(Fn_826C8760 *self, int index);
extern double fn_826972E0(void *arg, int ctx);
extern void fn_826C8408(Sprite_826C8760 *s, float x, float y);

void fn_826C8760(Fn_826C8760 *self)
{
    Sprite_826C8760 *s;
    float x;
    float y;

    s = fn_826C59F8(self);
    if (s != 0 && self->argc >= 2) {
        x = (float)fn_826972E0(fn_826957D0(self, 0), self->ctx);
        y = (float)fn_826972E0(fn_826957D0(self, 1), self->ctx);
        fn_826C8408(s, x, y);
    }
}
