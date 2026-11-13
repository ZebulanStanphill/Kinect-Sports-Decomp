typedef struct Obj_82800B90 {
    char pad0[8];
    float value;     /* 0x08 */
    float angle;     /* 0x0c */
} Obj_82800B90;

extern float fn_82809CB0(float v);

void fn_82800B90(Obj_82800B90 *self, float x, float d)
{
    self->value = x;
    if (d == 0.0f) {
        self->angle = 0.0f;
    } else if (self->angle < 0.0f) {
        self->angle = -fn_82809CB0(x / d);
    } else {
        self->angle = fn_82809CB0(x / d);
    }
}
