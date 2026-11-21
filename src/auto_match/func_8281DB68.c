typedef struct Quat_8281DB68 {
    float x;
    float y;
    float z;
    float w;
} Quat_8281DB68;

typedef struct Matrix3_8281DB68 {
    float m[9];
} Matrix3_8281DB68;

extern void fn_8280E168(Quat_8281DB68 *out, float x, float y, float z, float w);
extern void fn_8281DA78(Matrix3_8281DB68 *out, const Quat_8281DB68 *rotation);

/* Builds a rotation matrix from a quaternion, then scales its rows. */
void fn_8281DB68(Matrix3_8281DB68 *out, float sx, float sy, float sz, float x, float y, float z, float w)
{
    Quat_8281DB68 rotation;

    if (w != 1.0f) {
        fn_8280E168(&rotation, x, y, z, w);
        fn_8281DA78(out, &rotation);
    } else {
        out->m[0] = 1.0f;
        out->m[3] = 0.0f;
        out->m[6] = 0.0f;
        out->m[1] = 0.0f;
        out->m[4] = 1.0f;
        out->m[7] = 0.0f;
        out->m[2] = 0.0f;
        out->m[5] = 0.0f;
        out->m[8] = 1.0f;
    }
    if (sx != 1.0f) {
        out->m[0] *= sx;
        out->m[1] *= sx;
        out->m[2] *= sx;
    }
    if (sy != 1.0f) {
        out->m[3] *= sy;
        out->m[4] *= sy;
        out->m[5] *= sy;
    }
    if (sz != 1.0f) {
        out->m[6] *= sz;
        out->m[7] *= sz;
        out->m[8] *= sz;
    }
}
