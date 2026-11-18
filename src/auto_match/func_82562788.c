typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Camera_82562788 {
    char pad0[0x40];
    __vector4 orientation; /* 0x40 */
    float yaw;             /* 0x50 */
    float pitch;           /* 0x54 */
    float roll;            /* 0x58 */
    char pad5c[0xa8 - 0x5c];
    unsigned int flags; /* 0xa8 */
    char padac[0xd0 - 0xac];
    int dirty; /* 0xd0 */
} Camera_82562788;

extern void fn_828100D0(__vector4 *quaternion, float *yaw, float *pitch, float *roll, int order);

void fn_82562788(Camera_82562788 *self, const __vector4 *orientation)
{
    __vector4 value;
    __vector4 copy;
    float yaw;
    float pitch;
    float roll;

    value = *orientation;
    if (self->flags & 1) {
        copy = value;
        fn_828100D0(&copy, &yaw, &pitch, &roll, 0);
        self->yaw = -yaw;
        self->pitch = pitch + 3.14159265f;
        self->roll = roll;
    } else {
        self->orientation = value;
    }
    self->dirty = 1;
}
