// Havok AABB tree: copies a new leaf entry into the slot returned by fn_82D42908, grows the
// tree's centre/half-extent box by the leaf's AABB (fn_82D41B18) widened by the tolerance, then
// inserts it (fn_82D42730) and adds the returned count.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4 {
public:
    __vector4 q;

    hkVector4() {}
    hkVector4(const hkVector4 &v) { q = v.q; }
    hkVector4 &operator=(const hkVector4 &v) { q = v.q; return *this; }
    void setAll(float x) { q.vector4_f32[0] = x; q = __vspltw(q, 0); }
    void setAdd4(const hkVector4 &a, const hkVector4 &b) { q = __vaddfp(a.q, b.q); }
    void setSub4(const hkVector4 &a, const hkVector4 &b) { q = __vsubfp(a.q, b.q); }
    void setMul4(const hkVector4 &a, const hkVector4 &b) { q = __vmulfp(a.q, b.q); }
    void setMin4(const hkVector4 &a, const hkVector4 &b) { q = __vminfp(a.q, b.q); }
    void setMax4(const hkVector4 &a, const hkVector4 &b) { q = __vmaxfp(a.q, b.q); }
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

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
extern const hkVector4 lbl_82132D70;   /* 0.5 */
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
    self->center.setMul4(lbl_82132D70, sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    self->halfExtents.setMul4(lbl_82132D70, diff);

    self->count += fn_82D42730(self, leaf, self->depth - 1);
}
