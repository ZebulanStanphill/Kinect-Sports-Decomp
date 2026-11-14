typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_8239AA78 {
    char pad0[0x20];
    __vector4 dir;          /* 0x20 */
    __vector4 pos;          /* 0x30 */
    __vector4 min;          /* 0x40 */
    __vector4 max;          /* 0x50 */
    char pad60[0x48];
    int fa8;                /* 0xa8 */
    char padac[0x68];
    int f114;               /* 0x114 */
    char pad118[0x3c];
    int f154;               /* 0x154 */
} Obj_8239AA78;

typedef struct Self_8239AA78 {
    char pad[0x178];
    int mode;               /* 0x178 */
} Self_8239AA78;

int fn_8239AA78(Self_8239AA78 *self, Obj_8239AA78 *obj)
{
    __vector4 v;

    if (obj->fa8 != 0 && obj->f154 != 0 && obj->f114 != 0) {
        v = obj->pos;
        if (v.vector4_f32[0] >= obj->min.vector4_f32[0] && v.vector4_f32[0] < obj->max.vector4_f32[0]
            && v.vector4_f32[2] >= obj->min.vector4_f32[2] && v.vector4_f32[2] < obj->max.vector4_f32[2]) {
            if (self->mode != 2)
                return 1;
            v = obj->dir;
            if (v.vector4_f32[2] < 0.0f)
                return 1;
        }
    }
    return 0;
}
