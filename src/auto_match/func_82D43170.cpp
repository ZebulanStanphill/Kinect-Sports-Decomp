// Havok AABB tree: appends a copy of a leaf (fn_82D43098 grows the leaf array, fn_82D43AA0
// copies), grows the tree's centre/half-extent box by the leaf's AABB (fn_82D41C68), adds the
// leaf's count and returns the new leaf's index. Classes as in func_82D42A28.cpp.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4
{
  public:
    __vector4 q;

    hkVector4()
    {
    }

    hkVector4(const hkVector4 &v)
    {
        q = v.q;
    }

    hkVector4 &operator=(const hkVector4 &v)
    {
        q = v.q;
        return *this;
    }

    void setAdd4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vaddfp(a.q, b.q);
    }

    void setSub4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vsubfp(a.q, b.q);
    }

    void setMul4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmulfp(a.q, b.q);
    }

    void setMin4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vminfp(a.q, b.q);
    }

    void setMax4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmaxfp(a.q, b.q);
    }
};

struct hkAabb {
    hkVector4 m_min;
    hkVector4 m_max;
};

struct Leaf_82D43170 {
    char pad0[0x18];
    int count; /* 0x18 */
};

struct LeafArray_82D43170 {
    Leaf_82D43170 *data; /* 0x00 */
    int size;            /* 0x04 */
    int capacity;        /* 0x08 */
};

struct Tree_82D43170 {
    char pad0[0x90];
    hkVector4 halfExtents; /* 0x90 */
    hkVector4 center;      /* 0xa0 */
    char padb0[0x10];
    LeafArray_82D43170 leaves; /* 0xc0 */
    char padcc[0x14];
    int count; /* 0xe0 */
};

extern "C" {
extern const hkVector4 lbl_82132D70; /* 0.5 */
Leaf_82D43170 *fn_82D43098(Tree_82D43170 *self);
void fn_82D43AA0(Leaf_82D43170 *slot, const Leaf_82D43170 *leaf);
void fn_82D41C68(const Leaf_82D43170 *leaf, hkAabb *out);
}

extern "C" int fn_82D43170(Tree_82D43170 *self, const Leaf_82D43170 *leaf)
{
    Leaf_82D43170 *slot = fn_82D43098(self);
    fn_82D43AA0(slot, leaf);

    hkVector4 oldMin;
    oldMin.setSub4(self->center, self->halfExtents);
    hkVector4 oldMax;
    oldMax.setAdd4(self->center, self->halfExtents);

    hkAabb box;
    fn_82D41C68(slot, &box);

    hkVector4 newMin;
    newMin.setMin4(oldMin, box.m_min);
    hkVector4 newMax;
    newMax.setMax4(oldMax, box.m_max);

    hkVector4 sum;
    sum.setAdd4(newMin, newMax);
    self->center.setMul4(lbl_82132D70, sum);
    hkVector4 diff;
    diff.setSub4(newMax, newMin);
    self->halfExtents.setMul4(lbl_82132D70, diff);

    self->count += leaf->count;
    return self->leaves.size - 1;
}
