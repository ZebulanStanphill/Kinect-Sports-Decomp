// Havok: AABB query wrapped in the "TtqueryAabb" timer scope. The tree query
// (fn_830B5DA8) takes the AABB as origin + extent; a non-positive stack size
// falls back to 0x80 (func_830B6200 is the sibling with a different collector).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct ProfTls_830B6118 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_830B6118;

typedef struct Query_830B6118 {
    void *tree;             /* 0x00 */
    int pad4[2];
    int stackSize;          /* 0x0c */
    int pad10[3];
    void *root;             /* 0x1c */
    int pad20[4];
    __vector4 min;          /* 0x30 */
    __vector4 max;          /* 0x40 */
} Query_830B6118;

extern void fn_830B5DA8(void *tree, void *root, const __vector4 *extent, const __vector4 *origin,
                        void *a, int stackSize, void *b, void *c, void *d);

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_830B6118(Query_830B6118 *q, void *a, void *b)
{
    ProfTls_830B6118 *t;
    void **p;

    t = (ProfTls_830B6118 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtqueryAabb";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    {
        void *tree = q->tree;
        void *root = q->root;
        __vector4 origin = q->min;
        __vector4 extent = __vsubfp(q->max, q->min);
        fn_830B5DA8(tree, root, &extent, &origin, a, q->stackSize > 0 ? q->stackSize : 0x80, b, 0, 0);
    }

    t = (ProfTls_830B6118 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
