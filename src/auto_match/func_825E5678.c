typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Bounded_825E5678 Bounded_825E5678;
typedef struct BoundedVtbl_825E5678 {
    void *slots[6];
    void (*getMin)(Bounded_825E5678 *self, __vector4 *out);   /* 0x18 */
    void (*getMax)(Bounded_825E5678 *self, __vector4 *out);   /* 0x1c */
} BoundedVtbl_825E5678;
struct Bounded_825E5678 {
    BoundedVtbl_825E5678 *vt;
};

typedef struct Source_825E5678 {
    char pad0[0x1b0];
    Bounded_825E5678 *bounds;    /* 0x1b0 */
} Source_825E5678;

typedef struct Cell_825E5678 {
    char pad0[0x50];
    void *data;                  /* 0x50 */
} Cell_825E5678;

typedef struct Grid_825E5678 {
    __vector4 min;               /* 0x00 */
    __vector4 max;               /* 0x10 */
    char pad20[0x4a4 - 0x20];
    Cell_825E5678 *levels[3];    /* 0x4a4 */
    int generation;              /* 0x4b0 */
} Grid_825E5678;

typedef struct Level_825E5678 {
    __vector4 scale;             /* 0x00 */
    float size;                  /* 0x10 */
    char pad14[0xc];
} Level_825E5678;

extern Level_825E5678 lbl_831D5070[3];
extern float lbl_831BFA7C[11];

extern void fn_8265CAA0(void *p);
extern void fn_8265CA20(void *p);
extern void *fn_8265C9E0(unsigned int size);
extern Cell_825E5678 *fn_825E5FB8(void *mem, const __vector4 *min, const __vector4 *max,
                                  const __vector4 *cellSize, float size);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

void fn_825E5678(Grid_825E5678 *self, Source_825E5678 *src)
{
    __vector4 min, max;
    int i;

    src->bounds->vt->getMin(src->bounds, &min);
    src->bounds->vt->getMax(src->bounds, &max);
    if (max.vector4_f32[0] - min.vector4_f32[0] > 0.0f &&
        max.vector4_f32[1] - min.vector4_f32[1] > 0.0f &&
        max.vector4_f32[2] - min.vector4_f32[2] > 0.0f) {
        self->generation++;
        self->min = min;
        self->max = max;
        for (i = 0; i < 3; i++) {
            Cell_825E5678 *old = self->levels[i];
            void *mem;
            Cell_825E5678 *cell;
            if (old != 0) {
                fn_8265CAA0(old->data);
                fn_8265CA20(old);
            }
            mem = fn_8265C9E0(0x60);
            if (mem != 0) {
                __vector4 cellSize = __vmulfp(lbl_831D5070[i].scale,
                    VectorSet(lbl_831BFA7C[7], lbl_831BFA7C[8], lbl_831BFA7C[9], 0.0f));
                cell = fn_825E5FB8(mem, &self->min, &self->max, &cellSize, lbl_831D5070[i].size);
            } else {
                cell = 0;
            }
            self->levels[i] = cell;
        }
    }
}
