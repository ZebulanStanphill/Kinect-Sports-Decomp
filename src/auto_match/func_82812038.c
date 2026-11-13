/* Copies a 4-float vector: the w component directly, then x/y/z through the Vec3 copy fn_82810360. */
extern void fn_82810360(const float *src, float *dst);

void fn_82812038(float *dst, const float *src)
{
    dst[3] = src[3];
    fn_82810360(src, dst);
}
