typedef struct Obj_8255DA40 {
    char pad0[0xa0];
    float c; /* 0xa0 */
    float a; /* 0xa4 */
    float b; /* 0xa8 */
    char padAC[0x2b0 - 0xac];
    float scale2; /* 0x2b0 */
    char pad2B4[0x8bc - 0x2b4];
    float scale1; /* 0x8bc */
} Obj_8255DA40;

static __forceinline float Max(float x, float y)
{
    return x - y >= 0.0f ? x : y;
}

float fn_8255DA40(Obj_8255DA40 *o)
{
    return Max(o->c, Max(o->a, o->b)) * o->scale1 * o->scale2;
}
