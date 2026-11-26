#include "havok/hkAabb.h"

struct Key_82D42A28 {
    int v[5];
};

struct Leaf_82D42A28 {
    Key_82D42A28 key;    /* 0x00 */
    int a;               /* 0x14 */
    int b;               /* 0x18 */
    int c;               /* 0x1c */
    int d;               /* 0x20 */
    hkVector4 v;         /* 0x30 */
    int e;               /* 0x40 */
    int f;               /* 0x44 */
    char g;              /* 0x48 */
    char h;              /* 0x49 */
    int i;               /* 0x4c */
    int j;               /* 0x50 */
};

struct Tree_82D42A28 {
    char pad0[0x80];
    char shapes[0x10];       /* 0x80 */
    hkVector4 halfExtents;   /* 0x90 */
    hkVector4 center;        /* 0xa0 */
    char padb0[0x8];
    int depth;               /* 0xb8 */
    char padbc[0x24];
    int count;               /* 0xe0 */
    float tolerance;         /* 0xe4 */
};

extern "C" {
Leaf_82D42A28 *fn_82D42908(Tree_82D42A28 *self);
void fn_82D41B18(const Leaf_82D42A28 *leaf, void *shapes, hkAabb *out);
int fn_82D42730(Tree_82D42A28 *self, const Leaf_82D42A28 *leaf, int depth);
}

extern "C" void fn_82D42A28(Tree_82D42A28 *self, const Leaf_82D42A28 *leaf)
{
    Leaf_82D42A28 *slot = fn_82D42908(self);
    *slot = *leaf;

    hkVector4 oldMin;
    oldMin.setSub4(self->center, self->halfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(self->center, self->halfExtents);

    hkAabb box;
    fn_82D41B18(slot, self->shapes, &box);
    hkVector4 tol;
    tol.setAll(self->tolerance);
    hkVector4 lo;
    lo.setSub4(box.m_min, tol);
    hkVector4 hi;
    hi.setAdd4(box.m_max, tol);

    hkVector4 newMin;
    newMin.setMin4(oldMin, lo);
    hkVector4 newMax;
    newMax.setMax4(oldMax, hi);

    hkVector4 sum;
    sum.setAdd4(newMin, newMax);
    self->center.setMul4(hkVector4::getHalf(), sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    self->halfExtents.setMul4(hkVector4::getHalf(), diff);

    self->count += fn_82D42730(self, leaf, self->depth - 1);
}
