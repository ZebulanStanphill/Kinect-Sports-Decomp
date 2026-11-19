typedef struct Self_82F0E698 {
    char pad000[0x630];
    int locked; /* 0x630 */
    char pad634[0xaf0 - 0x634];
    int mode; /* 0xaf0 */
} Self_82F0E698;

typedef struct Params_82F0E698 {
    char pad000[0x108];
    int f108; /* 0x108 */
    int f10c; /* 0x10c */
    char pad110[0x120 - 0x110];
    int f120; /* 0x120 */
    char pad124[0x22c - 0x124];
    int f22c; /* 0x22c */
    int f230; /* 0x230 */
    char pad234[0x2a0 - 0x234];
    float f2a0; /* 0x2a0 */
    float f2a4; /* 0x2a4 */
    float f2a8; /* 0x2a8 */
    float f2ac; /* 0x2ac */
    float f2b0; /* 0x2b0 */
    float f2b4; /* 0x2b4 */
    float f2b8; /* 0x2b8 */
    float f2bc; /* 0x2bc */
    float f2c0; /* 0x2c0 */
    float f2c4; /* 0x2c4 */
    float f2c8; /* 0x2c8 */
    float f2cc; /* 0x2cc */
    float f2d0; /* 0x2d0 */
    char pad2d4[0x2f0 - 0x2d4];
    float f2f0; /* 0x2f0 */
    float f2f4; /* 0x2f4 */
    char pad2f8[0x300 - 0x2f8];
    float f300; /* 0x300 */
    float f304; /* 0x304 */
    float f308; /* 0x308 */
} Params_82F0E698;

extern void fn_82ED7E90(Self_82F0E698 *self, int a, int b, int c, int d, int e, float *p0, float *p1,
                        float *p2, float *p3, float *p4, float *p5, float *p6, float *p7, float *p8,
                        float *p9, float *p10);
extern void fn_82ED80E0(Self_82F0E698 *self, int a, int b, int c, int d, int e, float *p0, float *p1,
                        float *p2, float *p3, float *p4, float *p5, float *p6, float *p7, float *p8,
                        float *p9, float *p10, float *p11, float *p12, float *p13, float *p14, float *p15,
                        float *p16, float *p17);

void fn_82F0E698(Self_82F0E698 *self, Params_82F0E698 *params)
{
    int value = params->f10c;

    if (self->mode == 0 || self->mode == 4) {
        if (self->locked == 0)
            fn_82ED7E90(self, params->f108, value, params->f120, params->f22c, params->f230, &params->f2a4,
                        &params->f2a0, &params->f2a8, &params->f2b4, &params->f2b0, &params->f2b8,
                        &params->f2d0, &params->f2cc, &params->f2ac, &params->f2f0, &params->f2f4);
    } else {
        fn_82ED80E0(self, params->f108, value, params->f120, params->f22c, params->f230, &params->f2a4,
                    &params->f2a0, &params->f2a8, &params->f2b4, &params->f2b0, &params->f2b8, &params->f2c0,
                    &params->f2bc, &params->f2c8, &params->f2c4, &params->f2d0, &params->f2cc, &params->f300,
                    &params->f304, &params->f308, &params->f2ac, &params->f2f0, &params->f2f4);
    }
}
