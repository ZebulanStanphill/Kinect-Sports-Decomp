typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_8257F0E8 {
    __vector4 rows[4];
} Matrix_8257F0E8;

typedef struct Bones_8257F0E8 {
    char pad0[0x80];
    void *skeletons[1]; /* 0x80 */
} Bones_8257F0E8;

typedef struct Spinner_8257F0E8 {
    Bones_8257F0E8 *bones; /* 0x00 */
    void *model;           /* 0x04 */
    void *attachment;      /* 0x08 */
    int node;              /* 0x0c */
    unsigned int bone;     /* 0x10 */
    float rate;            /* 0x14 */
    unsigned int axis;     /* 0x18 */
    int flags;             /* 0x1c */
} Spinner_8257F0E8;

typedef struct Scene_8257F0E8 {
    char pad000[0x40];
    int frame;  /* 0x40 */
    int player; /* 0x44 */
    char pad048[0x828 - 0x48];
    float time; /* 0x828 */
} Scene_8257F0E8;

typedef struct Spinners_8257F0E8 {
    Scene_8257F0E8 *scene;   /* 0x0 */
    Spinner_8257F0E8 *begin; /* 0x4 */
    Spinner_8257F0E8 *end;   /* 0x8 */
} Spinners_8257F0E8;

extern double __fctid(double);
extern double __fcfid(double);

extern void fn_8253B250(Matrix_8257F0E8 *out, float angle);
extern void fn_8253B420(Matrix_8257F0E8 *out, float angle);
extern void fn_8253B5F0(Matrix_8257F0E8 *out, float angle);
extern void fn_82532CF8(void *skeleton, unsigned int bone, Matrix_8257F0E8 matrix);
extern void fn_82555FF8(void *attachment, Matrix_8257F0E8 *matrix, int a, int frame);
extern void fn_82556240(void *model, Matrix_8257F0E8 *matrix, int node, int flags, int frame);

/* Maps an angle to [0, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns - 0.49999999))) * 6.2831854820251465);
}

void fn_8257F0E8(Spinners_8257F0E8 *self)
{
    float time = self->scene->time;
    Spinner_8257F0E8 *spinner = self->begin;
    Spinner_8257F0E8 *end = self->end;

    for (; spinner < end; spinner++) {
        Matrix_8257F0E8 rotation;
        float angle = WrapTurns(spinner->rate * time);
        void *skeleton;

        switch (spinner->axis) {
        case 0:
            fn_8253B250(&rotation, angle);
            break;
        case 1:
            fn_8253B420(&rotation, angle);
            break;
        default:
            fn_8253B5F0(&rotation, angle);
            break;
        }
        skeleton = spinner->bones->skeletons[self->scene->player];
        if (skeleton != 0) {
            fn_82532CF8(skeleton, spinner->bone, rotation);
            if (spinner->attachment != 0) {
                fn_82555FF8(spinner->attachment, &rotation, 1, self->scene->frame);
            }
        } else {
            fn_82556240(spinner->model, &rotation, spinner->node, spinner->flags, self->scene->frame);
        }
    }
}
