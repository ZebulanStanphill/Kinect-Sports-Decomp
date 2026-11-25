typedef struct Point_8285CBC8 {
    float x;
    float y;
    float z;
} Point_8285CBC8;

typedef struct Vertex_8285CBC8 {
    float x;
    float y;
    float z;
    float w;
} Vertex_8285CBC8;

typedef struct ClipData_8285CBC8 {
    float transform[0x248 / 4];
    unsigned short count; /* 0x248 */
    short pad24a;
    Point_8285CBC8 *points;    /* 0x24c */
    Vertex_8285CBC8 *vertices; /* 0x250 */
} ClipData_8285CBC8;

extern ClipData_8285CBC8 lbl_83211340;
extern void fn_8280ADB0(float *, Point_8285CBC8 *, Point_8285CBC8 *);
extern void fn_82862BC8(const void *, const void *, float, void *, unsigned char *);
extern void fn_8306B530(void *, float, float, float, float);

void fn_8285CBC8(float plane, unsigned short *count)
{
    ClipData_8285CBC8 *clip = &lbl_83211340;
    int i;
    unsigned char parallel = 0;
    plane = -plane;
    *count = 0;
    for (i = 0; i < clip->count; ++i) {
        Point_8285CBC8 *point = &clip->points[i];
        fn_8280ADB0(clip->transform, point, point);
    }
    for (i = 0; i < clip->count; ++i) {
        Point_8285CBC8 *first = &clip->points[i];
        int next = i + 1;
        Vertex_8285CBC8 *out = &clip->vertices[*count];
        Point_8285CBC8 *last = &clip->points[next == clip->count ? 0 : next];
        float firstZ = first->z;
        if (plane >= firstZ && plane >= last->z) {
            fn_8306B530(out, last->x, last->y, last->z, 1.0f);
            ++*count;
        } else if (first->z <= plane && plane < last->z) {
            fn_82862BC8(last, first, plane, out, &parallel);
            ++*count;
        } else if (last->z <= plane && plane < firstZ) {
            fn_82862BC8(first, last, plane, out, &parallel);
            ++*count;
            fn_8306B530(&clip->vertices[*count], last->x, last->y, last->z, 1.0f);
            ++*count;
        }
    }
}
