/* Initialises a path query between two points of a point table: the step count and
   squared radius from the distance scale, the start/target cells (fn_829F3488), whether
   either cell lies outside the 80 x 60 grid, and the straight-line length as the default
   distance. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

void *memset(void *dst, int value, unsigned int size);

typedef struct Cell_829F4728 {
    int x, y, z;
} Cell_829F4728;

typedef struct Query_829F4728 {
    __vector4 start;            /* 0x00 */
    char pad10[0x10];
    __vector4 target;           /* 0x20 */
    char pad30[0x10];
    Cell_829F4728 startCell;    /* 0x40 */
    Cell_829F4728 targetCell;   /* 0x4c */
    Cell_829F4728 current;      /* 0x58 */
    int startIndex;             /* 0x64 */
    char pad68[0x90 - 0x68];
    int outside;                /* 0x90 */
    char pad94[0x98 - 0x94];
    float distance;             /* 0x98 */
} Query_829F4728;

typedef struct Config_829F4728 {
    char pad000[0x140];
    float scale;                /* 0x140 */
} Config_829F4728;

typedef struct Work_829F4728 {
    char pad000[0x240];
    int steps;                  /* 0x240 */
    int radiusSq;               /* 0x244 */
} Work_829F4728;

extern const float lbl_82079FC8;
extern void fn_829F3488(Cell_829F4728 *cell, __vector4 point);
extern void fn_829F2758(int *x, int *y);

static __forceinline __vector4 Length4(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum4fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_829F4728(int startIndex, int targetIndex, const Config_829F4728 *config,
                 const __vector4 *points, Query_829F4728 *query, Work_829F4728 *work)
{
    __vector4 start, target, length;
    float steps, radius;
    int n;
    Cell_829F4728 *cell;

    start = points[startIndex];
    steps = config->scale * 20.0f;
    steps = steps / start.vector4_f32[2];
    memset(work, 0, 0x248);
    n = (int)steps;
    if (n >= 6)
        n = 6;
    work->steps = n;
    radius = steps * 4.0f;
    if (radius >= lbl_82079FC8)
        radius = lbl_82079FC8;
    work->radiusSq = (int)(radius * radius);
    query->target = points[targetIndex];
    query->start = points[startIndex];
    fn_829F3488(&query->targetCell, query->target);
    cell = &query->startCell;
    fn_829F3488(cell, points[startIndex]);
    query->outside = cell->x < 0 || cell->x > 0x4f || cell->y < 0 || cell->y > 0x3b;
    {
        Cell_829F4728 c = *cell;
        query->current = c;
    }
    fn_829F2758(&query->current.x, &query->current.y);
    query->startIndex = startIndex;
    length = Length4(__vsubfp(query->target, query->start));
    if (query->distance == 0.0f)
        query->distance = length.vector4_f32[0];
}
