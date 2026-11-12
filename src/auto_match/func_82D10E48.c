// Havok: squared distance from a point to the farthest node position of a linked list
// (hkSimdReal compares through stvewx floats; result returned through a hidden pointer).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct SimdReal_82D10E48 {
    __vector4 q;
} SimdReal_82D10E48;

typedef struct Node_82D10E48 {
    struct Node_82D10E48 *next;     /* 0x00 */
    char pad4[0xc];
    __vector4 position;             /* 0x10 */
} Node_82D10E48;

typedef struct List_82D10E48 {
    char pad0[0x24];
    Node_82D10E48 *first;           /* 0x24 */
} List_82D10E48;

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline float GetReal(SimdReal_82D10E48 s)
{
    float r;
    __stvewx(s.q, &r, 0);
    return r;
}

static __forceinline SimdReal_82D10E48 DistanceSquared(__vector4 a, __vector4 b)
{
    SimdReal_82D10E48 r;
    __vector4 d = __vsubfp(a, b);
    r.q = __vmsum3fp(d, d);
    return r;
}

SimdReal_82D10E48 *fn_82D10E48(SimdReal_82D10E48 *result, const List_82D10E48 *list, const __vector4 *point)
{
    __vector4 p = *point;
    __vector4 farthest = p;
    SimdReal_82D10E48 maxDist;
    Node_82D10E48 *node;

    maxDist.q = Replicate(0.0f);
    for (node = list->first; node != 0; node = node->next) {
        SimdReal_82D10E48 dist = DistanceSquared(p, node->position);
        if (GetReal(dist) > GetReal(maxDist)) {
            farthest = node->position;
            maxDist = dist;
        }
    }
    result->q = DistanceSquared(p, farthest).q;
    return result;
}
