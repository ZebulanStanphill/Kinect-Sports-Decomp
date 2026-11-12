// Picks one of two camera paths by the current zoom, stores its start point (w cleared) and
// the yaw/pitch of the path direction, and copies the path's field of view.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vsubfp(__vector4 a, __vector4 b);

extern double fn_82F65018(double y, double x);   /* atan2 */
extern double sqrt(double);

typedef struct Float3_8237E330 {
    float x, y, z;
} Float3_8237E330;

typedef struct Path_8237E330 {
    Float3_8237E330 target;  // 0x00
    Float3_8237E330 eye;     // 0x0c
    float fov;               // 0x18
    char pad1c[0x44 - 0x1c];
} Path_8237E330;

typedef struct Self_8237E330 {
    char pad000[0x1a0];
    __vector4 position;              // 0x1a0
    char pad1b0[0x214 - 0x1b0];
    Float3_8237E330 angles;          // 0x214
    char pad220[0x228 - 0x220];
    float fov;                       // 0x228
    char pad22c[0x288 - 0x22c];
    float zoom;                      // 0x288
    char pad28c[0x29c - 0x28c];
    Path_8237E330 *path;             // 0x29c
} Self_8237E330;

extern float lbl_831CB348[];
extern Path_8237E330 lbl_831D2540[];
extern const Float3_8237E330 lbl_821CA1A0;

static __forceinline __vector4 LoadFloat3(const Float3_8237E330 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadPoint(const Float3_8237E330 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_8237E330(Self_8237E330 *self)
{
    Path_8237E330 *path;
    __vector4 eye, target, d;
    Float3_8237E330 angles;
    float x, z;

    if (self->zoom < lbl_831CB348[19]) {
        path = &lbl_831D2540[1];
    } else {
        path = &lbl_831D2540[2];
    }
    self->path = path;
    target = LoadPoint(&path->target);
    eye = LoadPoint(&path->eye);
    self->position = eye;
    angles = lbl_821CA1A0;
    d = __vsubfp(target, eye);
    x = d.vector4_f32[0];
    z = d.vector4_f32[2];
    angles.y = (float)fn_82F65018(-x, -z);
    angles.x = (float)fn_82F65018(d.vector4_f32[1], (float)sqrt(x * x + z * z));
    self->angles = angles;
    self->fov = self->path->fov;
}
