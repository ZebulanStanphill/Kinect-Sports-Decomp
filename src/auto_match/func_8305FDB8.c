typedef struct Vec3_8305FDB8 {
    float x;
    float y;
    float z;
} Vec3_8305FDB8;

extern float fn_8305FD58(const float *step, float value);
extern float fn_82809CB0(float x);

int fn_8305FDB8(const float *step, const Vec3_8305FDB8 *a, const Vec3_8305FDB8 *b)
{
    float ax;
    float ay;
    float az;
    float bx;
    float by;
    float bz;

    if (*step > 0.0f) {
        ax = fn_8305FD58(step, a->x);
        ay = fn_8305FD58(step, a->y);
        az = fn_8305FD58(step, a->z);
        bx = fn_8305FD58(step, b->x);
        by = fn_8305FD58(step, b->y);
        bz = fn_8305FD58(step, b->z);
        if (fn_82809CB0(bx - ax) < 1.1f && fn_82809CB0(by - ay) < 1.1f && fn_82809CB0(bz - az) < 1.1f) {
            return 0;
        }
    } else {
        ax = a->x;
        ay = a->y;
        az = a->z;
        bx = b->x;
        by = b->y;
        bz = b->z;
    }
    if (ax < bx) {
        return 1;
    }
    if (ax == bx) {
        if (ay < by) {
            return 1;
        }
        if (ay == by) {
            return az < bz;
        }
    }
    return 0;
}
