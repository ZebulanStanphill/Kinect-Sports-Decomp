typedef struct Vec3_8301E638 {
    float x;
    float y;
    float z;
} Vec3_8301E638;

float __fsqrts(float);

void fn_8301E638(Vec3_8301E638 *v)
{
    float z = v->z;
    float y = v->y;
    float x = v->x;
    float len = __fsqrts(x * x + y * y + z * z);
    float inv;
    if (len != 0.0f) {
        inv = 1.0f / len;
        v->x = inv * x;
        v->y = inv * y;
        v->z = inv * z;
    }
}
