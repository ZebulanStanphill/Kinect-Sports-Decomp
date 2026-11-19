/* Spherical interpolation from the identity quaternion to q by t, taking the shorter arc; close
   rotations fall back to a linear blend. */
typedef struct Quaternion_8280DC58 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
    float w; /* 0xc */
} Quaternion_8280DC58;

extern float lbl_8201E038;
extern float fn_828095F8(float x); /* acosf */
extern float fn_82809950(float x); /* sinf */
extern float fn_8280A550(float x); /* 1 / sqrt(x) */

void fn_8280DC58(const Quaternion_8280DC58 *q, float t, Quaternion_8280DC58 *out)
{
    float cosOmega;
    float sign;
    float scaleFrom;
    float scaleTo;
    float omega;
    float invSinOmega;

    scaleFrom = 1.0f - t;
    cosOmega = q->w;
    scaleTo = t;
    if (cosOmega < 0.0f) {
        cosOmega = -cosOmega;
        sign = -1.0f;
    } else {
        sign = 1.0f;
    }
    if (cosOmega < lbl_8201E038) {
        omega = fn_828095F8(cosOmega);
        invSinOmega = fn_8280A550(1.0f - cosOmega * cosOmega);
        scaleFrom = fn_82809950(omega * scaleFrom) * invSinOmega;
        scaleTo = fn_82809950(omega * t) * invSinOmega;
    }
    scaleTo = sign * scaleTo;
    out->x = q->x * scaleTo;
    out->y = q->y * scaleTo;
    out->z = q->z * scaleTo;
    out->w = q->w * scaleTo + scaleFrom;
}
