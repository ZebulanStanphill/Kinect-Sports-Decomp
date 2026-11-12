// Places the camera on one of two fixed views (mode 1 or the other) offset by the current focus
// (fn_8239E930), storing its position (w cleared), yaw/pitch toward the view's target and its
// field of view.
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
__vector4 __vaddfp(__vector4 a, __vector4 b);

extern double fn_82F65018(double y, double x);   /* atan2 */
extern double sqrt(double);

typedef struct Float3_8239F668 {
    float x, y, z;
} Float3_8239F668;

typedef struct Path_8239F668 {
    Float3_8239F668 target;  // 0x00
    char pad0c[0x18 - 0xc];
    Float3_8239F668 eye;     // 0x18
    char pad24[0x30 - 0x24];
    float fov;               // 0x30
    char pad34[0x3c - 0x34];
} Path_8239F668;

typedef struct Views_8239F668 {
    char pad000[0x104];
    Path_8239F668 views[2];  // 0x104
} Views_8239F668;

typedef struct Self_8239F668 {
    char pad000[0x1a0];
    __vector4 position;              // 0x1a0
    char pad1b0[0x214 - 0x1b0];
    Float3_8239F668 angles;          // 0x214
    char pad220[0x228 - 0x220];
    float fov;                       // 0x228
    char pad22c[0x28c - 0x22c];
    int mode;                        // 0x28c
} Self_8239F668;

extern Views_8239F668 lbl_831D2980;
extern void fn_8239E930(Self_8239F668 *self, __vector4 *offset);
extern const Float3_8239F668 lbl_821CA1A0;

static __forceinline __vector4 LoadFloat3(const Float3_8239F668 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline __vector4 LoadPoint(const Float3_8239F668 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

void fn_8239F668(Self_8239F668 *self)
{
    const Path_8239F668 *path;
    __vector4 eye, target, d;
    Float3_8239F668 angles;
    float x, z;

    if (self->mode == 1) {
        path = &lbl_831D2980.views[0];
    } else {
        path = &lbl_831D2980.views[1];
    }
    {
        __vector4 offset = __VMXGetReg(77);
        fn_8239E930(self, &offset);
        eye = LoadPoint(&path->eye);
        target = LoadPoint(&path->target);
        eye = __vaddfp(offset, eye);
        target = __vaddfp(offset, target);
    }
    angles = lbl_821CA1A0;
    d = __vsubfp(target, eye);
    x = d.vector4_f32[0];
    z = d.vector4_f32[2];
    angles.y = (float)fn_82F65018(-x, -z);
    angles.x = (float)fn_82F65018(d.vector4_f32[1], (float)sqrt(x * x + z * z));
    self->fov = path->fov;
    self->angles = angles;
    self->position = eye;
}
