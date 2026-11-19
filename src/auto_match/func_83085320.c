/* Havok kd-tree build: same Build setup as func_83097E18, with the full 16-bit bounds. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_8323B230[16];

typedef struct Range_83085320 {
    int start;
    int count;
} Range_83085320;

typedef struct Tree_83085320 {
    char data[0x110];
} Tree_83085320;

typedef struct Build_83085320 {
    Range_83085320 *range;
    int a28;
    int a54;
    int a34;
    int a38;
    int pad14[3];
    __vector4 v40;
    Tree_83085320 *tree;
    int pad34[3];
    __vector4 mask;
} Build_83085320;

typedef union Bounds_83085320 {
    __vector4 vector;

    struct {
        unsigned short min[4];
        unsigned short max[4];
    } q;
} Bounds_83085320;

extern void fn_83085A80(Tree_83085320 *tree);
extern void fn_83085AB0(Tree_83085320 *tree);
extern int fn_83086A30(Build_83085320 *build, int *a, int b, int *one, int *c);

static __forceinline void Build_init(Build_83085320 *b, Tree_83085320 *tree, Range_83085320 *r, int x28,
                                     int x34, int x38, __vector4 v, int x54)
{
    b->mask = lbl_8323B230[14];
    b->range = r;
    b->a28 = x28;
    b->a34 = x34;
    b->a38 = x38;
    b->v40 = v;
    b->a54 = x54;
    fn_83085A80(tree);
}

void fn_83085320(Range_83085320 *range, int first, int b, int x54, int x38, int last, int *out)
{
    Bounds_83085320 bounds;
    Build_83085320 build;
    Tree_83085320 tree;
    int a;
    int one;
    int c;

    a = first;
    bounds.q.min[2] = 0;
    bounds.q.min[1] = 0;
    bounds.q.min[0] = 0;
    bounds.q.max[2] = 0xffff;
    bounds.q.max[1] = 0xffff;
    bounds.q.max[0] = 0xffff;
    one = 1;
    Build_init(&build, &tree, range, 0, 0, x38, bounds.vector, x54);
    build.tree = &tree;
    c = last;
    *out = fn_83086A30(&build, &a, b, &one, &c);
    fn_83085AB0(&tree);
}
