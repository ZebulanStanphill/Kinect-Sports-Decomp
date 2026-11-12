typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct Float3_8258B2F0 {
    float x, y, z;
} Float3_8258B2F0;

typedef struct Grid_8258B2F0 {
    char data[1];
} Grid_8258B2F0;

typedef struct Query_8258B2F0 {
    int owner;
    char pad4[4];
    Grid_8258B2F0 grid;
} Query_8258B2F0;

extern void fn_8258B3F8(Grid_8258B2F0 *grid, const __vector4 *min, const __vector4 *max, int *first, int *last);
extern void fn_8258B720(int owner, Grid_8258B2F0 *grid, const __vector4 *min, const __vector4 *max, int *first,
                        int *last, int a, int b, int c);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 0x4, 3);
    vz = __vrlimi(vz, vw, 0x4, 3);
    return __vrlimi(vx, vz, 0x3, 2);
}

void fn_8258B2F0(Query_8258B2F0 *self, const Float3_8258B2F0 *center, float radius, int a, int b, int c)
{
    __vector4 min;
    __vector4 max;
    int first;
    int last;

    min = VectorSet(center->x - radius, center->y - radius, center->z - radius, 0.0f);
    max = VectorSet(center->x + radius, center->y + radius, center->z + radius, 0.0f);
    fn_8258B3F8(&self->grid, &min, &max, &first, &last);
    fn_8258B720(self->owner, &self->grid, &min, &max, &first, &last, a, b, c);
}
