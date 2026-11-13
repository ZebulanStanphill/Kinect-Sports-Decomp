typedef struct Obj_82800BF8 {
    char pad0[8];
    float value;     /* 0x08 */
    float angle;     /* 0x0c */
} Obj_82800BF8;

extern float fn_82809CB0(float v);

void fn_82800BF8(Obj_82800BF8 *self, float d, float x)
{
    float inv;

    if (d != 0.0f) {
        inv = 1.0f / d;
        self->value = inv * x;
        if (self->angle < 0.0f) {
            self->angle = -fn_82809CB0(inv);
        } else {
            self->angle = fn_82809CB0(inv);
        }
    }
}
