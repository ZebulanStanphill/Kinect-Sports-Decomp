typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Camera_82464F40 {
    void *vt;
    int pad4;
    void *handle; /* 0x08 */
    int padC;
    float target;  /* 0x10 */
    float current; /* 0x14 */
    float startY;  /* 0x18 */
    float endY;    /* 0x1c */
    float startX;  /* 0x20 */
    float endX;    /* 0x24 */
    char pad28[0x30 - 0x28];
    __vector4 position;     /* 0x30 */
    unsigned char relative; /* 0x40 */
} Camera_82464F40;

extern void fn_8257E950(void *h, int a, int b, float x, float y, int c, __vector4 v);
extern void fn_8257E880(void *h, float v);

void fn_82464F40(Camera_82464F40 *self, float step, __vector4 offset)
{
    __vector4 position;
    float t;

    if (self->current < self->target - 0.01f || self->current > self->target + 0.01f) {
        if (self->current > self->target) {
            self->current = self->current - step;
        } else {
            self->current = self->current + step;
        }
    }
    position = self->relative ? __vaddfp(offset, self->position) : self->position;
    position.vector4_f32[1] += 5.0f;
    t = self->current;
    fn_8257E950(self->handle, 0, 1, self->startX - (self->startX - self->endX) * t,
                self->startY - (self->startY - self->endY) * t, 0, position);
    fn_8257E880(self->handle, 1.0f - self->current);
}
