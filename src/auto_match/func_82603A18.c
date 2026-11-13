typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Source_82603A18 {
    unsigned char pad0[0x1c0];
    __vector4 value;
} Source_82603A18;

typedef struct Obj_82603A18 {
    unsigned char pad0[0x18];
    Source_82603A18 *source;
    unsigned char pad1C[0xa0 - 0x1c];
    __vector4 target;
    unsigned char padB0[0xe0 - 0xb0];
    __vector4 start;
    unsigned char padF0[0x108 - 0xf0];
    int a;
    int b;
    int c;
} Obj_82603A18;

extern void fn_82D89BD8(Source_82603A18 *source);
extern void fn_826038C8(Obj_82603A18 *self);

void fn_82603A18(Obj_82603A18 *self, __vector4 target)
{
    Source_82603A18 *source = self->source;

    fn_82D89BD8(source);
    self->target = target;
    self->start = source->value;
    self->a = 0;
    self->c = 1;
    self->b = 0;
    fn_826038C8(self);
}
