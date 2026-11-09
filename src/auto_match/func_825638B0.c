typedef struct Transform_825638B0 {
    float m[16];
} Transform_825638B0;

typedef struct Body_825638B0 {
    unsigned char pad0[8];
    void *time;               /* +0x08 */
    unsigned char pad1[0xd4];
    unsigned char motion[4];  /* +0xe0 */
} Body_825638B0;

extern float fn_82D80A40(void *time);
extern void fn_82D93168(void *motion, float time, Transform_825638B0 *out);
extern void fn_82CE6528(const Transform_825638B0 *src, Transform_825638B0 *dst);

Transform_825638B0 *fn_825638B0(Transform_825638B0 *out, Body_825638B0 *body)
{
    Transform_825638B0 transform;
    fn_82D93168(body->motion, fn_82D80A40(body->time), &transform);
    fn_82CE6528(&transform, out);
    return out;
}
