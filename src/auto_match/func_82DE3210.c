typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
void __stvewx(__vector4 v, void *p, int offset);
double fabs(double);

typedef struct Face_82DE3210 Face_82DE3210;

typedef struct Edge_82DE3210 {
    __vector4 *start;           /* 0x0 */
    struct Edge_82DE3210 *next; /* 0x4 */
    struct Edge_82DE3210 *twin; /* 0x8 */
    Face_82DE3210 *face;        /* 0xc */
} Edge_82DE3210;

struct Face_82DE3210 {
    __vector4 normal;       /* 0x00 */
    Edge_82DE3210 edges[3]; /* 0x10 */
    float cost;             /* 0x40 */
    int mark;               /* 0x44 */
};

extern void fn_82DE35A0(void *mesh);

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Cross(__vector4 a, __vector4 b)
{
    __vector4 c0 = __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135));
    __vector4 c1 = __vmulfp(__vpermwi(a, 135), __vpermwi(b, 99));
    return __vsubfp(c0, c1);
}

Face_82DE3210 *fn_82DE3210(void *mesh, Face_82DE3210 *start)
{
    Face_82DE3210 *face;
    Edge_82DE3210 *entry;
    char done;
    int i;
    Edge_82DE3210 *edge;

    fn_82DE35A0(mesh);
    face = start;
    entry = 0;
    done = 0;
    do {
        if (done) {
            return face;
        }
        face->mark = 3;
        for (i = 0, edge = face->edges; i < 3; i++, edge++) {
            if (edge != entry) {
                __vector4 origin = *edge->start;
                __vector4 direction = __vsubfp(*edge->next->start, origin);
                float lengthSquared = GetReal(__vmsum3fp(direction, direction));
                float side = GetReal(__vmsum3fp(Cross(direction, face->normal), origin));
                if ((float)fabs(side) * side < lengthSquared * -9.9999994e-11f) {
                    Face_82DE3210 *neighbor = edge->twin->face;
                    if (start->cost <= 0.0f || neighbor->cost >= start->cost * 0.9f) {
                        done = neighbor->mark == 3;
                        entry = face->edges[i].twin;
                        face = neighbor;
                        break;
                    }
                }
            }
        }
    } while (i != 3);
    return face;
}
