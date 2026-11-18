typedef struct Tween_827F4868 {
    unsigned char pad0[0x22];
    unsigned short curve; /* 0x22 */
    float target;         /* 0x24 */
    float range;          /* 0x28 */
    float duration;       /* 0x2c */
    float elapsed;        /* 0x30 */
} Tween_827F4868;

extern float fn_82809868(float angle);
extern const float lbl_82196284;

float fn_827F4868(Tween_827F4868 *self)
{
    float t;

    if (self->elapsed >= self->duration) {
        return self->target;
    } else {
        t = self->elapsed / self->duration;
        switch (self->curve) {
        case 1:
            t = 1.0f - fn_82809868(t * 1.57079637f);
            break;
        case 2:
            t = fn_82809868((t - 1.0f) * 1.57079637f);
            break;
        case 3:
            t = (1.0f - fn_82809868(t * 3.14159265f)) * lbl_82196284;
            break;
        }
        return (t - 1.0f) * self->range + self->target;
    }
}
