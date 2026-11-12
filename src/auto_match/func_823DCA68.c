typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct Float3_823DCA68 {
    float x, y, z;
} Float3_823DCA68;

extern int fn_823DC6E8(const __vector4 *a, const __vector4 *b, const __vector4 *c, const __vector4 *d,
                       __vector4 *out, float *tOut);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline int Contains(const __vector4 *p, const Float3_823DCA68 *min, const Float3_823DCA68 *max)
{
    return p->vector4_f32[0] >= min->x && p->vector4_f32[0] < max->x &&
           p->vector4_f32[2] >= min->z && p->vector4_f32[2] < max->z;
}

int fn_823DCA68(const __vector4 *from, __vector4 *point, const Float3_823DCA68 *min, const Float3_823DCA68 *max)
{
    __vector4 corners[4];
    __vector4 hit;
    float t;
    unsigned int i;

    if (!Contains(point, min, max)) {
        corners[0] = VectorSet(min->x, 0.0f, min->z, 0.0f);
        corners[1] = VectorSet(min->x, 0.0f, max->z, 0.0f);
        corners[2] = VectorSet(max->x, 0.0f, max->z, 0.0f);
        corners[3] = VectorSet(max->x, 0.0f, min->z, 0.0f);
        for (i = 0; i < 4; i++) {
            if (fn_823DC6E8(point, from, &corners[i], &corners[(i + 1) % 4], &hit, &t) != 0) {
                *point = hit;
                break;
            }
        }
        return 1;
    }
    return 0;
}
