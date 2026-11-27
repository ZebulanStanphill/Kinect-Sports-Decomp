typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Frames_8306DEF0 {
    int type; /* 0x00 */
    char unknown04[0xc];
    __vector4 root;       /* 0x10 */
    __vector4 points[20]; /* 0x20 */
    int states[20];       /* 0x160 */
} Frames_8306DEF0;

typedef struct Info_8306DEF0 {
    int tracked; /* 0x00 */
    char unknown04[0xc];
    int adjust;     /* 0x10 */
    char data14[4]; /* 0x14 */
} Info_8306DEF0;

typedef struct Path_8306DEF0 {
    char unknown0000[0x530];
    char filter[0xa40 - 0x530];  /* 0x0530 */
    char points[0xcd0 - 0xa40];  /* 0x0a40 */
    char solver[0x19fc - 0xcd0]; /* 0x0cd0 */
    float unknown19FC;           /* 0x19fc */
    float weights[20];           /* 0x1a00 */
    __vector4 direction;         /* 0x1a50 */
    char unknown1A60[0x10];
    float signedLean;      /* 0x1a70 */
    float unknown1A74;     /* 0x1a74 */
    float lean;            /* 0x1a78 */
    unsigned char tracked; /* 0x1a7c */
    char unknown1A7D[0x13];
    unsigned char hasFrames; /* 0x1a90 */
    unsigned char hasInfo;   /* 0x1a91 */
    unsigned char positive;  /* 0x1a92 */
    unsigned char ready;     /* 0x1a93 */
    float time;              /* 0x1a94 */
} Path_8306DEF0;

extern __vector4 *fn_8306D6D8(__vector4 *out, Path_8306DEF0 *self, unsigned char adjust);
extern void fn_8306D768(Path_8306DEF0 *self, float dt);
extern unsigned char fn_8306D7E0(Path_8306DEF0 *self);
extern void fn_8306DA38(Path_8306DEF0 *self, void *points);
extern void fn_8306DD18(Path_8306DEF0 *self);
extern __vector4 fn_8306ECD8(void);
extern void fn_8306F850(void *solver, void *points, float dt, void *data);
extern void fn_830758C0(Path_8306DEF0 *self, float time, void *points);
extern void fn_83075BB0(void *filter, void *points, float dt);
extern __vector4 *fn_83075D30(__vector4 *out, void *points, int index);
extern float fn_83075D40(void *points, int index);
extern void fn_83075D90(void *points, int index, float weight);
extern void fn_83075DA8(void *points, unsigned char enabled);
extern __vector4 fn_830763C8(__vector4 axis, float angle);
extern void fn_83076F10(void *points, unsigned char mirror, __vector4 rotation);

void fn_8306DEF0(Path_8306DEF0 *self, float dt, Info_8306DEF0 *info, Frames_8306DEF0 *frames)
{
    void *points;
    int i;
    __vector4 temp;

    self->tracked = info->tracked != 0;
    if (self->ready) {
        self->ready = 0;
        self->time = 0.0f;
    } else {
        self->time = self->time + dt;
    }
    points = self->points;
    fn_830758C0(self, self->time, points);
    fn_83075DA8(points, self->hasFrames);
    if (!self->hasInfo && self->hasFrames) {
        fn_83075BB0(self->filter, points, dt);
    }
    fn_8306F850(self->solver, points, dt, info->data14);
    for (i = 0; i < 20; i++) {
        fn_83075D90(points, i, self->weights[i]);
    }
    if (frames != 0) {
        for (i = 0; i < 20; i++) {
            frames->points[i] = *fn_83075D30(&temp, points, i);
            frames->states[i] = fn_83075D40(points, i) > 0.7f ? 2 : 1;
        }
        frames->root = frames->points[0];
    }
    fn_8306DA38(self, points);
    fn_8306DD18(self);
    {
        __vector4 up = fn_8306ECD8();

        fn_83076F10(points, self->tracked, fn_830763C8(up, self->lean));
    }
    fn_8306D768(self, dt);
    if (!fn_8306D7E0(self)) {
        self->direction = *fn_8306D6D8(&temp, self, info->adjust != 0);
        self->signedLean = self->tracked ? self->lean : -self->lean;
    }
}
