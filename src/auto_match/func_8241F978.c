typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);
double fabs(double x);

typedef struct Owner_8241F978 {
    char pad0[0x684];
    float height;       /* 0x684 */
} Owner_8241F978;

typedef struct Obj_8241F978 {
    Owner_8241F978 *owner;  /* 0x0 */
    char pad4[0x1dc];
    __vector4 normal;       /* 0x1e0 */
} Obj_8241F978;

extern float lbl_831E4880;

void fn_8241FA30(Obj_8241F978 *self, __vector4 point);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

void fn_8241F978(Obj_8241F978 *self, __vector4 origin, __vector4 direction)
{
    __vector4 d = __vmsum3fp(direction, self->normal);
    if (d.vector4_f32[0] < lbl_831E4880) {
        if (fabs(direction.vector4_f32[2]) > 0.0f) {
            float t = (self->owner->height - origin.vector4_f32[2]) / direction.vector4_f32[2];
            fn_8241FA30(self, VectorSet(t * direction.vector4_f32[0] + origin.vector4_f32[0], 0.0f, 0.0f, 0.0f));
        }
    }
}
