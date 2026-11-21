typedef struct Quat_8280D3A8 {
    float x;
    float y;
    float z;
    float w;
} Quat_8280D3A8;

typedef struct Matrix4_8280D3A8 {
    float m[4][4];
} Matrix4_8280D3A8;

extern void fn_8280E168(Quat_8280D3A8 *out, float x, float y, float z, float w);
extern void fn_8280CE38(Matrix4_8280D3A8 *out, const Quat_8280D3A8 *rotation);

/* Builds a transform from scale, rotation quaternion and translation. */
void fn_8280D3A8(Matrix4_8280D3A8 *out, float sx, float sy, float sz, float x, float y, float z, float w,
                 float tx, float ty, float tz)
{
    Quat_8280D3A8 rotation;

    if (w != 1.0f) {
        fn_8280E168(&rotation, x, y, z, w);
        fn_8280CE38(out, &rotation);
    } else {
        out->m[0][0] = 1.0f;
        out->m[1][0] = 0.0f;
        out->m[2][0] = 0.0f;
        out->m[3][0] = 0.0f;
        out->m[0][1] = 0.0f;
        out->m[1][1] = 1.0f;
        out->m[2][1] = 0.0f;
        out->m[3][1] = 0.0f;
        out->m[0][2] = 0.0f;
        out->m[1][2] = 0.0f;
        out->m[2][2] = 1.0f;
        out->m[3][2] = 0.0f;
        out->m[0][3] = 0.0f;
        out->m[1][3] = 0.0f;
        out->m[2][3] = 0.0f;
        out->m[3][3] = 1.0f;
    }
    out->m[3][0] = tx;
    out->m[3][1] = ty;
    out->m[3][2] = tz;
    if (sx != 1.0f) {
        out->m[0][0] *= sx;
        out->m[0][1] *= sx;
        out->m[0][2] *= sx;
    }
    if (sy != 1.0f) {
        out->m[1][0] *= sy;
        out->m[1][1] *= sy;
        out->m[1][2] *= sy;
    }
    if (sz != 1.0f) {
        out->m[2][0] *= sz;
        out->m[2][1] *= sz;
        out->m[2][2] *= sz;
    }
    out->m[0][3] = 0.0f;
    out->m[1][3] = 0.0f;
    out->m[2][3] = 0.0f;
    out->m[3][3] = 1.0f;
}
