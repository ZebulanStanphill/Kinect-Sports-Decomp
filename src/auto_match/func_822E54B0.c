typedef struct Params_822E54B0 {
    char pad00[0x4];
    float scale;        /* 0x04 */
    float depth;        /* 0x08 */
} Params_822E54B0;

typedef struct Camera_822E54B0 {
    char pad000[0x24];
    int mode;                   /* 0x024 */
    char pad028[0xd8];
    float offset[4];            /* 0x100 */
    char pad110[0x98];
    Params_822E54B0 *params;    /* 0x1a8 */
    char pad1ac[0x10];
    void *target;               /* 0x1bc */
    char pad1c0[0x110];
    float zoom;                 /* 0x2d0 */
} Camera_822E54B0;

extern float lbl_831CD218[];

extern int fn_82397F88(void *target);

void fn_822E54B0(Camera_822E54B0 *self)
{
    if (self->mode == 0) {
        float z = self->params->scale * self->zoom;
        float w = self->params->depth;
        self->offset[0] = lbl_831CD218[15];
        self->offset[1] = lbl_831CD218[16];
        self->offset[2] = z;
        self->offset[3] = w;
    } else if (fn_82397F88(self->target) != 0) {
        float z = self->zoom * lbl_831CD218[17];
        float w = lbl_831CD218[18];
        self->offset[0] = lbl_831CD218[15];
        self->offset[1] = lbl_831CD218[16];
        self->offset[2] = z;
        self->offset[3] = w;
    }
}
