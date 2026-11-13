typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern unsigned __int64 __mftb();
typedef struct TimerStream_83097E18 { void *pad0; unsigned int *next; void *pad8; unsigned int *end; } TimerStream_83097E18;
extern TimerStream_83097E18 *KeTlsGetValue(unsigned int index);
extern unsigned int lbl_8323B4A0;
extern const __vector4 lbl_8323B230[16];

typedef struct Range_83097E18 {
    int start;
    int count;
} Range_83097E18;

typedef struct Job_83097E18 {
    char pad0[0x20];
    int a20;
    int a24;
    int a28;
    int a2c;
    int a30;
    int a34;
    int a38;
    int pad3c;
    __vector4 v40;
    int *out;
    int a54;
    int a58;
} Job_83097E18;

typedef struct Tree_83097E18 {
    char data[0x110];
} Tree_83097E18;

typedef struct Build_83097E18 {
    Range_83097E18 *range;
    int a28;
    int a54;
    int a34;
    int a38;
    int pad14[3];
    __vector4 v40;
    Tree_83097E18 *tree;
    int pad34[3];
    __vector4 mask;
} Build_83097E18;

extern void fn_83085A80(Tree_83097E18 *tree);
extern void fn_83085AB0(Tree_83097E18 *tree);
extern int fn_83086A30(Build_83097E18 *build, int *a, int b, int *one, int *c);
extern int fn_82CE8E78(void *self, Job_83097E18 *a, Job_83097E18 *b, int c);

static __forceinline void timer(const char *name)
{
    TimerStream_83097E18 *t = KeTlsGetValue(lbl_8323B4A0);
    if (t->next < t->end) {
        unsigned int *p = t->next;
        p[0] = (unsigned int)name;
        p[1] = (unsigned int)__mftb();
        t->next = p + 3;
    }
}

static __forceinline void Build_init(Build_83097E18 *b, Tree_83097E18 *tree, Range_83097E18 *r, int x28, int x34, int x38, __vector4 v, int x54)
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

int fn_83097E18(void *self, Job_83097E18 *job)
{
    Range_83097E18 range;
    Build_83097E18 build;
    Tree_83097E18 tree;
    int a;
    int one;
    int c;
    int result;

    timer("TtCpuKdTreeBuildFastDistributedSub");
    range.start = job->a2c;
    range.count = job->a30;
    Build_init(&build, &tree, &range, job->a28, job->a34, job->a38, job->v40, job->a54);
    c = job->a58;
    a = job->a20;
    build.tree = &tree;
    one = 1;
    *job->out = fn_83086A30(&build, &a, job->a24, &one, &c) + 2;
    result = fn_82CE8E78(self, job, job, 0);
    fn_83085AB0(&tree);
    timer("Et");
    return result;
}
