// Finds the object nearest to `me` in the current set (a std::set of object pointers picked
// by the owner's current index): returns the closest other object nearer than the starting
// limit, or 0.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Object_822AA860 {
    char pad00[0x80];
    __vector4 position;          // 0x80
} Object_822AA860;

typedef struct Node_822AA860 {
    struct Node_822AA860 *left;  // 0x00
    struct Node_822AA860 *parent;
    struct Node_822AA860 *right;
    int pad0c;
    Object_822AA860 *value;      // 0x10
} Node_822AA860;

typedef struct Set_822AA860 {
    int pad00;
    Node_822AA860 *head;         // 0x04
} Set_822AA860;

typedef struct Owner_822AA860 {
    Set_822AA860 **sets;         // 0x00
    char pad04[0xc];
    int current;                 // 0x10
} Owner_822AA860;

extern const float lbl_821954B0[];

extern void fn_82381BC0(Node_822AA860 **it);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
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

Object_822AA860 *fn_822AA860(Owner_822AA860 *self, Object_822AA860 *me)
{
    Set_822AA860 *set = self->sets[self->current];
    __vector4 position = me->position;
    Object_822AA860 *nearest = 0;
    float best = lbl_821954B0[32];
    Node_822AA860 *head = set->head;
    Node_822AA860 *it = head->left;

    while (it != head) {
        Object_822AA860 *other = it->value;

        if (other != me) {
            __vector4 length = Length3(__vsubfp(position, other->position));

            if (length.vector4_f32[0] < best) {
                best = length.vector4_f32[0];
                nearest = other;
            }
        }
        fn_82381BC0(&it);
    }
    return nearest;
}
