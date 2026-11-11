// Looks in the global set (lbl_83276560) for an element with another key that lies within
// the tuning distance of `position`; stores the position of the last element examined and
// returns 1 when one is close enough, else 0.
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

typedef struct Node_82385B80 {
    struct Node_82385B80 *left;  // 0x00
    struct Node_82385B80 *parent;
    struct Node_82385B80 *right;
    int value0;                  // 0x0c (start of the set's element)
    unsigned int key;            // 0x10
    int pad14[3];
    __vector4 position;          // 0x20
} Node_82385B80;

typedef struct Tree_82385B80 {
    int pad00;
    Node_82385B80 *head;         // 0x04
} Tree_82385B80;

extern Tree_82385B80 *lbl_83276560;
extern float lbl_831CB000[];

extern void fn_824A30C8(Node_82385B80 **it);

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

int fn_82385B80(unsigned int key, __vector4 *found, __vector4 position)
{
    Tree_82385B80 *tree = lbl_83276560;
    Node_82385B80 *head = tree->head;
    Node_82385B80 *it = head->left;

    if (it != head) {
        float limit = lbl_831CB000[0xb8 / 4];

        do {
            if (it->key != key) {
                __vector4 other = it->position;
                __vector4 length;

                *found = other;
                length = Length3(__vsubfp(position, other));
                if (length.vector4_f32[0] <= limit) {
                    return 1;
                }
            }
            fn_824A30C8(&it);
        } while (it != head);
    }
    return 0;
}
