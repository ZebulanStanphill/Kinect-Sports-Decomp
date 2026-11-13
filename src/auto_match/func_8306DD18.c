typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Skeleton_8306DD18 {
    __vector4 joints[20];
} Skeleton_8306DD18;

typedef struct Tracker_8306DD18 {
    char pad0[0xa40];
    Skeleton_8306DD18 skeleton;     /* 0xa40 */
    char pad[0x1a78 - 0xa40 - sizeof(Skeleton_8306DD18)];
    float lean;                     /* 0x1a78 */
    float pad1a7c[3];
    float left;                     /* 0x1a88 */
    float right;                    /* 0x1a8c */
    char pad1a90[2];
    unsigned char positive;         /* 0x1a92 */
} Tracker_8306DD18;

unsigned char fn_83075D58(Skeleton_8306DD18 *skeleton);
__vector4 *fn_83075D30(__vector4 *out, Skeleton_8306DD18 *skeleton, int joint);
int fn_8306EAD0(float *angle, __vector4 a, __vector4 b);
float fn_8306EA78(float angle);
float fn_8306E7F8(float x, float lo, float hi);
float fn_8306E888(float x);

extern const float lbl_82186D4C;
extern const float lbl_8207F4EC;
extern const float lbl_8201ED80;

void fn_8306DD18(Tracker_8306DD18 *self)
{
    Skeleton_8306DD18 *skeleton = &self->skeleton;
    __vector4 a0, a1, b0, b1;
    float left, right, mid;

    if (fn_83075D58(skeleton)) {
        fn_83075D30(&a0, skeleton, 12);
        fn_83075D30(&a1, skeleton, 16);
        fn_83075D30(&b0, skeleton, 4);
        fn_83075D30(&b1, skeleton, 8);
        left = 0.0f;
        right = 0.0f;
        fn_8306EAD0(&right, a0, a1);
        fn_8306EAD0(&left, b0, b1);
        mid = fn_8306EA78((right + left) * lbl_82186D4C);
        self->left = fn_8306EA78(left - mid);
        self->right = fn_8306EA78(right - mid);
        mid = fn_8306EA78(mid);
        self->left = fn_8306E7F8(self->left, -0.6f, 0.6f);
        self->right = fn_8306E7F8(self->right, -0.6f, 0.6f);
        if (fn_8306E888(mid) < lbl_8201ED80) {
            if (fn_8306E888(mid) < 1.0f || self->positive == (mid > 0.0f)) {
                self->lean = mid;
                self->positive = mid > 0.0f;
            }
        }
    } else {
        self->lean = 0.0f;
        self->left = 0.0f;
        self->right = 0.0f;
    }
}
