typedef struct Vec3_8281E7B8 {
    float x;
    float y;
    float z;
} Vec3_8281E7B8;

typedef __declspec(align(16)) struct Quat_8281E7B8 {
    float v[4];
} Quat_8281E7B8;

extern void fn_8280DD50(Quat_8281E7B8 *q);
extern void fn_828105C8(Vec3_8281E7B8 *out, float x, float y, float z);
extern void fn_8281E528(Quat_8281E7B8 *out, const Vec3_8281E7B8 *from, const Vec3_8281E7B8 *to);
extern void fn_8280DF98(Quat_8281E7B8 *q, const Vec3_8281E7B8 *v, Vec3_8281E7B8 *out);
extern void fn_82810B78(const Vec3_8281E7B8 *v, Vec3_8281E7B8 *out);
extern void fn_8280D8E0(Quat_8281E7B8 *a, Quat_8281E7B8 *b, Quat_8281E7B8 *out);
extern void fn_8280E418(Quat_8281E7B8 *q, Quat_8281E7B8 *out);

void fn_8281E7B8(Quat_8281E7B8 *out, const Vec3_8281E7B8 *forward, const Vec3_8281E7B8 *up)
{
    Quat_8281E7B8 twist;
    Vec3_8281E7B8 upAxis;
    Vec3_8281E7B8 backAxis;
    Vec3_8281E7B8 rotatedUp;

    fn_8280DD50(&twist);
    fn_828105C8(&upAxis, 0.0f, 1.0f, 0.0f);
    fn_828105C8(&backAxis, 0.0f, 0.0f, -1.0f);
    fn_8281E528(out, &backAxis, forward);
    fn_8280DF98(out, &upAxis, &rotatedUp);
    fn_82810B78(&rotatedUp, &rotatedUp);
    fn_8281E528(&twist, &rotatedUp, up);
    fn_8280D8E0(&twist, out, out);
    fn_8280E418(out, out);
}
