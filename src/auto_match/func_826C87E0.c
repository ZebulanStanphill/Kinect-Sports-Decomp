typedef struct Sprite_826C87E0 Sprite_826C87E0;

typedef struct Fn_826C87E0 {
    char pad[0x18];
    int ctx;
    int argc;
} Fn_826C87E0;

extern Sprite_826C87E0 *fn_826C59F8(Fn_826C87E0 *self);
extern void *fn_826957D0(Fn_826C87E0 *self, int index);
extern double fn_826972E0(void *arg, int ctx);
extern void fn_826C84C8(Sprite_826C87E0 *s, float a, float b, float c, float d);

void fn_826C87E0(Fn_826C87E0 *self)
{
    Sprite_826C87E0 *s;
    float a;
    float b;
    float c;
    float d;

    s = fn_826C59F8(self);
    if (s != 0 && self->argc >= 4) {
        a = (float)fn_826972E0(fn_826957D0(self, 0), self->ctx);
        b = (float)fn_826972E0(fn_826957D0(self, 1), self->ctx);
        c = (float)fn_826972E0(fn_826957D0(self, 2), self->ctx);
        d = (float)fn_826972E0(fn_826957D0(self, 3), self->ctx);
        fn_826C84C8(s, a, b, c, d);
    }
}
