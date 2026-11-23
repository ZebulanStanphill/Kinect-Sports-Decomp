typedef struct Vec3_8280C240 {
    float x;
    float y;
    float z;
} Vec3_8280C240;

typedef struct Matrix_8280C240 {
    float m[4][4];
} Matrix_8280C240;

extern void fn_82810240(const Vec3_8280C240 *a, const Vec3_8280C240 *b, Vec3_8280C240 *out);
extern void fn_82810328(const Vec3_8280C240 *a, const Vec3_8280C240 *b, Vec3_8280C240 *out);
extern void fn_82810B78(const Vec3_8280C240 *v, Vec3_8280C240 *out);
extern float fn_82810BE8(const Vec3_8280C240 *v);
extern void fn_828102A8(const Vec3_8280C240 *v, Vec3_8280C240 *out, float scale);

void fn_8280C240(Matrix_8280C240 *out, const Vec3_8280C240 *eye, const Vec3_8280C240 *up,
                 const Vec3_8280C240 *target)
{
    Vec3_8280C240 forward;
    Vec3_8280C240 right;
    Vec3_8280C240 trueUp;

    fn_82810328(target, eye, &forward);
    fn_828102A8(&forward, &forward, -1.0f / fn_82810BE8(&forward));
    fn_82810240(up, &forward, &right);
    fn_82810B78(&right, &right);
    fn_82810240(&forward, &right, &trueUp);
    fn_82810B78(&trueUp, &trueUp);
    out->m[0][0] = right.x;
    out->m[1][0] = trueUp.x;
    out->m[2][0] = forward.x;
    out->m[3][0] = eye->x;
    out->m[0][1] = right.y;
    out->m[1][1] = trueUp.y;
    out->m[2][1] = forward.y;
    out->m[3][1] = eye->y;
    out->m[0][2] = right.z;
    out->m[1][2] = trueUp.z;
    out->m[2][2] = forward.z;
    out->m[3][2] = eye->z;
    out->m[0][3] = 0.0f;
    out->m[1][3] = 0.0f;
    out->m[2][3] = 0.0f;
    out->m[3][3] = 1.0f;
}
