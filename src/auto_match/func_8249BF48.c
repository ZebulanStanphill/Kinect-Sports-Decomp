typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int index);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 value, unsigned int index);
__vector4 __vmulfp(__vector4 first, __vector4 second);
extern double fabs(double value);

typedef struct Camera_8249BF48 {
    unsigned char pad0[0x34];
    int moving; /* 0x34 */
} Camera_8249BF48;

typedef struct Tracker_8249BF48 {
    unsigned char pad0[0x24];
    int pending;         /* 0x24 */
    float angle;         /* 0x28 */
    int controllerCount; /* 0x2c */
    float progress;      /* 0x30 */
    unsigned char pad34[0xb8];
    const float *bounds; /* 0xec */
    unsigned char padF0[0x20];
    Camera_8249BF48 *camera; /* 0x110 */
} Tracker_8249BF48;

extern char *fn_8225F670(void);
extern int fn_829C5988(int *angle, unsigned int *flags);
extern unsigned char fn_82E1CAD0(int feature);
extern void fn_82E1CC18(const char *name, int value);
extern void fn_82E1CCA8(void);
extern int fn_82F4DB78(void);
extern int fn_82F4E760(float angle, float extent, unsigned int flags);
extern void *fn_82F4EBC0(unsigned char port);
extern unsigned char fn_82F4EFF8(void);

static __forceinline __vector4 *Build_8249BF48(__vector4 *out, const float *bounds)
{
    float extent = (float)fabs((bounds[1] - bounds[3]) * 0.5f + bounds[3]);
    *out = __vmulfp(__VMXGetReg(68), __vspltw(__lvlx(&extent, 0), 0));
    return out;
}

void fn_8249BF48(Tracker_8249BF48 *self)
{
    int count;
    int port;
    __vector4 extent;
    int angle;
    unsigned int flags;
    int adjusted;

    count = 0;
    for (port = 0; port < 2; port++) {
        if (fn_82F4EBC0((unsigned char)port) != 0 && fn_82F4EFF8()) {
            count++;
        }
    }
    if (self->pending != 0) {
        self->camera->moving = 1;
        self->controllerCount = count;
        {
            float z = Build_8249BF48(&extent, self->bounds)->vector4_f32[2];

            fn_82F4E760(self->angle, (float)fabs(z), 0);
        }
        self->pending = 0;
        self->progress = 0.0f;
    } else {
        if (fn_829C5988(&angle, &flags) >= 0 && (flags & 1)) {
            adjusted = 1;
        } else {
            adjusted = 0;
        }
        if ((fn_82F4DB78() | adjusted) == 0 && self->camera->moving != 0) {
            int value = angle;

            if (*fn_8225F670() != 0 && fn_82E1CAD0(0x6d)) {
                fn_82E1CC18("CameraAngle", value);
                fn_82E1CCA8();
            }
            self->camera->moving = 0;
        }
    }
}
