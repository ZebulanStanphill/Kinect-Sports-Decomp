typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_82506C58 {
    float x, y, z;
} Float3_82506C58;

typedef struct Node_82506C58 {
    char pad00[0xc];
    Float3_82506C58 position;   /* 0x0c */
} Node_82506C58;

typedef struct Component_82506C58 Component_82506C58;

typedef struct ComponentVtbl_82506C58 {
    void *slot0;
    void *slot1;
    void *slot2;
    Node_82506C58 *(*getNode)(Component_82506C58 *self, int index);
    void *slot4;
    int (*findBone)(Component_82506C58 *self, int id);
} ComponentVtbl_82506C58;

struct Component_82506C58 {
    const ComponentVtbl_82506C58 *vt;
};

typedef struct Owner_82506C58 {
    char pad000[0x1b4];
    Component_82506C58 *component;   /* 0x1b4 */
} Owner_82506C58;

typedef struct Self_82506C58 {
    char pad000[0x8c0];
    Owner_82506C58 *owner;           /* 0x8c0 */
} Self_82506C58;

static __forceinline __vector4 LoadFloat3(const Float3_82506C58 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline int FindBone(Self_82506C58 *self, int id)
{
    Owner_82506C58 *owner = self->owner;

    if (owner != 0) {
        Component_82506C58 *c = owner->component;
        if (c != 0)
            return c->vt->findBone(c, id);
    }
    return -1;
}

static __forceinline __vector4 BonePosition(Owner_82506C58 *owner, int index)
{
    Component_82506C58 *c = owner->component;
    __vector4 v, zero, mask;

    v = LoadFloat3(&c->vt->getNode(c, index)->position);
    mask = __VMXGetReg(67);
    zero = __VMXGetReg(77);
    return __vsel(v, zero, mask);
}

float fn_82506C58(Self_82506C58 *self)
{
    float height = 0.0f;
    Owner_82506C58 *owner = self->owner;

    if (owner != 0) {
        __vector4 top = BonePosition(owner, FindBone(self, 0x13));
        int bottom;

        height = top.vector4_f32[1];
        bottom = FindBone(self, 0x15);
        if (bottom != -1) {
            Component_82506C58 *c = owner->component;
            height -= c->vt->getNode(c, bottom)->position.y;
        }
    }
    return height;
}
