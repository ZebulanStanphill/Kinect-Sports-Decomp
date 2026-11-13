typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Source_82603968 {
    unsigned char pad0[0x1b0];
    __vector4 value1B0;
    __vector4 value1C0;
} Source_82603968;

typedef struct Obj_82603968 {
    unsigned char pad0[0x18];
    Source_82603968 *source;
    unsigned char pad1C[0x20 - 0x1c];
    __vector4 v20;
    unsigned char pad30[0x60 - 0x30];
    __vector4 v60;
    unsigned char pad70[0xa0 - 0x70];
    __vector4 vA0;
    unsigned char padB0[0xe0 - 0xb0];
    __vector4 vE0;
    unsigned char padF0[0x108 - 0xf0];
    int a;
    int b;
    int c;
} Obj_82603968;

extern void fn_82D89BD8(Source_82603968 *source);
extern void fn_826038C8(Obj_82603968 *self);

void fn_82603968(Obj_82603968 *self, __vector4 first, __vector4 second)
{
    Source_82603968 *source = self->source;

    fn_82D89BD8(source);
    self->v60 = source->value1B0;
    self->vE0 = source->value1C0;
    self->v20 = first;
    self->vA0 = second;
    self->a = 0;
    self->c = 1;
    self->b = 1;
    fn_826038C8(self);
}
