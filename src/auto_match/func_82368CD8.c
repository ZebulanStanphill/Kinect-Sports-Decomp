typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

typedef struct Triple_82368CD8 {
    int a;
    int b;
    int c;
} Triple_82368CD8;

typedef struct Obj_82368CD8 {
    char pad0[0x54];
    unsigned int type;
    char pad58[0xea4 - 0x58];
    int state;
    char padEA8[0xeb0 - 0xea8];
    __vector4 position;
    __vector4 direction;
    float scale;
    Triple_82368CD8 info;
} Obj_82368CD8;

int fn_82368CD8(Obj_82368CD8 *self, __vector4 *position, __vector4 *direction, float *scale, Triple_82368CD8 *info)
{
    if (self->type == 9 && self->state == 2) {
        int b;
        __vector4 pos = self->position;
        float sc;
        *direction = self->direction;
        sc = self->scale;
        info->a = self->info.a;
        b = self->info.b;
        *scale = sc;
        info->b = b;
        *position = pos;
        info->c = self->info.c;
        return 1;
    }
    return 0;
}
