typedef struct Vec3_8281F1B0 {
    float x, y, z;
} Vec3_8281F1B0;

typedef struct Box_8281F1B0 {
    Vec3_8281F1B0 min;          /* 0x00 */
    Vec3_8281F1B0 max;          /* 0x0c */
} Box_8281F1B0;

extern int fn_82810380(const Vec3_8281F1B0 *a, const Vec3_8281F1B0 *b, float tolerance);

int fn_8281F1B0(const Box_8281F1B0 *self, const Box_8281F1B0 *other)
{
    Vec3_8281F1B0 min = other->min;
    Vec3_8281F1B0 max = other->max;

    return fn_82810380(&self->min, &min, 1e-5f) ? fn_82810380(&self->max, &max, 1e-5f) : 0;
}
