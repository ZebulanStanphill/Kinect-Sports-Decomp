typedef struct Matrix4_8280BCC0 {
    float m[4][4];
} Matrix4_8280BCC0;

extern void fn_8280A668(float angle, float *sine, float *cosine);

/* Builds a transform from scale, Euler angles and translation. */
void fn_8280BCC0(Matrix4_8280BCC0 *out, float sx, float sy, float sz, float rx, float ry, float rz, float tx,
                 float ty, float tz)
{
    float sinX;
    float cosX;
    float sinY;
    float cosY;
    float sinZ;
    float cosZ;

    fn_8280A668(rx, &sinX, &cosX);
    fn_8280A668(ry, &sinY, &cosY);
    fn_8280A668(rz, &sinZ, &cosZ);
    out->m[3][0] = tx;
    out->m[3][1] = ty;
    out->m[3][2] = tz;
    out->m[0][0] = cosZ * cosY;
    out->m[0][1] = sinZ * cosY;
    out->m[0][2] = -sinY;
    out->m[1][0] = cosZ * sinY * sinX - sinZ * cosX;
    out->m[1][1] = sinZ * sinY * sinX + cosZ * cosX;
    out->m[1][2] = cosY * sinX;
    out->m[2][0] = cosZ * sinY * cosX + sinZ * sinX;
    out->m[2][1] = sinZ * sinY * cosX - cosZ * sinX;
    out->m[2][2] = cosY * cosX;
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
    out->m[3][3] = 1.0f;
    out->m[0][3] = 0.0f;
    out->m[1][3] = 0.0f;
    out->m[2][3] = 0.0f;
}
