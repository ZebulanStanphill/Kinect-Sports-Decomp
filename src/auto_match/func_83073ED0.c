typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Pose_83073ED0 {
    char pad0[0x20];
    __vector4 shoulder; /* 0x20 */
    char pad30[0x40 - 0x30];
    __vector4 elbow; /* 0x40 */
    __vector4 wrist; /* 0x50 */
    char pad60[0x80 - 0x60];
    __vector4 upper; /* 0x80 */
    char pad90[0xc0 - 0x90];
    __vector4 lower; /* 0xc0 */
} Pose_83073ED0;

typedef struct Self_83073ED0 {
    char pad0[0x4f0];
    __vector4 rest; /* 0x4f0 */
} Self_83073ED0;

extern const float lbl_82196080;
extern const float lbl_8208DDCC;

float fn_8306EE38(__vector4 v);              /* Length3 */
__vector4 fn_8306EDB0(__vector4 v);          /* Normalize3 */
float fn_8306ED98(__vector4 a, __vector4 b); /* Dot3 */
float fn_8306E7E8(float a, float b);         /* max */
extern void fn_83075D90(void *output, int index, float value);

void fn_83073ED0(Self_83073ED0 *self, Pose_83073ED0 *pose, void *output, float reach)
{
    __vector4 elbow = pose->elbow;
    __vector4 upperArm = __vsubfp(elbow, pose->shoulder);
    __vector4 foreArm = __vsubfp(pose->wrist, elbow);

    if (fn_8306EE38(upperArm) > lbl_82196080 && fn_8306EE38(foreArm) > lbl_82196080) {
        __vector4 upperDir = fn_8306EDB0(upperArm);
        __vector4 foreDir = fn_8306EDB0(foreArm);

        if (fn_8306ED98(upperDir, foreDir) < 0.1f) {
            fn_83075D90(output, 3, 0.0f);
        } else {
            __vector4 upper = pose->upper;
            __vector4 lower = pose->lower;
            __vector4 lowerElbow = fn_8306EDB0(elbow);
            __vector4 lowerDir = fn_8306EDB0(lower);
            __vector4 upperElbow = fn_8306EDB0(elbow);
            __vector4 upperDir = fn_8306EDB0(upper);

            if (fn_8306E7E8(fn_8306ED98(upperDir, upperElbow), fn_8306ED98(lowerDir, lowerElbow)) >
                lbl_8208DDCC) {
                fn_83075D90(output, 3, 0.0f);
            }
        }
    }
    if (fn_8306EE38(__vsubfp(pose->elbow, self->rest)) / reach > 0.6f) {
        fn_83075D90(output, 3, 0.0f);
    }
}
