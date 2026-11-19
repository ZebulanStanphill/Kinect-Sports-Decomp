/* Rebuilds the w components of two packed quaternions and blends them into the
   first one, depending on which components the flags say were stored. */
typedef struct Quaternion_82800FA8 {
    float x;
    float y;
    float z;
    float w;
} Quaternion_82800FA8;

extern float fn_82809558(float x); /* sqrtf */
extern void fn_8280E180(Quaternion_82800FA8 *from, Quaternion_82800FA8 *to, Quaternion_82800FA8 *out,
                        float t);

void fn_82800FA8(Quaternion_82800FA8 *q, Quaternion_82800FA8 *other, float t, unsigned char flags,
                 unsigned short *state)
{
    Quaternion_82800FA8 from;
    Quaternion_82800FA8 to;
    float rest;

    if ((flags & 0xe0) == 0) {
        q->w = 1.0f;
    } else if ((flags & 0x1c) == 0x1c) {
        rest = 1.0f - (q->x * q->x + q->y * q->y + q->z * q->z);
        if (rest > 0.0f) {
            q->w = fn_82809558(rest);
        } else {
            q->w = 0.0f;
        }
    } else {
        {
            float z = q->z;
            float y = q->y;
            float x = q->x;

            from.y = y;
            from.x = x;
            from.z = z;
            rest = 1.0f - (x * x + y * y + z * z);
            if (rest <= 0.0f) {
                from.w = 0.0f;
            } else {
                from.w = fn_82809558(rest);
            }
        }
        {
            float x = other->x;
            float y = other->y;
            float z = other->z;

            to.y = y;
            to.x = x;
            to.z = z;
            rest = 1.0f - (z * z + y * y + x * x);
            if (rest <= 0.0f) {
                to.w = 0.0f;
            } else {
                to.w = fn_82809558(rest);
            }
        }
        fn_8280E180(&from, &to, q, t);
    }
    *state = 4;
}
