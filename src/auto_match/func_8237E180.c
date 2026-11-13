/* Camera on the current path: target and eye scaled in x/z and offset by the followed
   object's position; stores the eye and the yaw/pitch of the view direction, and copies
   the path's field of view. */
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

typedef struct Float3_8237E180 {
    float x, y, z;
} Float3_8237E180;

typedef struct Path_8237E180 {
    Float3_8237E180 target;  // 0x00
    Float3_8237E180 eye;     // 0x0c
    float fov;               // 0x18
} Path_8237E180;

typedef struct Followed_8237E180 {
    char pad00[0x80];
    __vector4 position;      // 0x80
} Followed_8237E180;

typedef struct Self_8237E180 {
    char pad000[0x1a0];
    __vector4 position;              // 0x1a0
    char pad1b0[0x214 - 0x1b0];
    Float3_8237E180 angles;          // 0x214
    char pad220[0x228 - 0x220];
    float fov;                       // 0x228
    char pad22c[0x28c - 0x22c];
    float scaleX;                    // 0x28c
    float scaleZ;                    // 0x290
    Followed_8237E180 *followed;     // 0x294
    char pad298[0x29c - 0x298];
    Path_8237E180 *path;             // 0x29c
} Self_8237E180;

extern const Float3_8237E180 lbl_821CA1A0;

static __forceinline __vector4 LoadFloat3(const Float3_8237E180 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadPoint(const Float3_8237E180 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_8237E180(Self_8237E180 *self)
{
    const Path_8237E180 *path;
    __vector4 eye, target, offset, a, b, d;
    Float3_8237E180 angles;
    float x, z;

    path = self->path;
    b = __VMXGetReg(77);
    a = __VMXGetReg(77);
    target = LoadPoint(&path->target);
    eye = LoadPoint(&path->eye);
    offset = self->followed->position;
    a.vector4_f32[0] = self->scaleX * target.vector4_f32[0] + offset.vector4_f32[0];
    a.vector4_f32[1] = offset.vector4_f32[1] + target.vector4_f32[1];
    a.vector4_f32[2] = self->scaleZ * target.vector4_f32[2] + offset.vector4_f32[2];
    b.vector4_f32[0] = self->scaleX * eye.vector4_f32[0] + offset.vector4_f32[0];
    b.vector4_f32[1] = eye.vector4_f32[1] + offset.vector4_f32[1];
    b.vector4_f32[2] = self->scaleZ * eye.vector4_f32[2] + offset.vector4_f32[2];
    self->position = b;
    angles = lbl_821CA1A0;
    d = __vsubfp(a, b);
    x = d.vector4_f32[0];
    z = d.vector4_f32[2];
    angles.y = (float)fn_82F65018(-x, -z);
    angles.x = (float)fn_82F65018(d.vector4_f32[1], (float)sqrt(x * x + z * z));
    self->angles = angles;
    self->fov = self->path->fov;
}
