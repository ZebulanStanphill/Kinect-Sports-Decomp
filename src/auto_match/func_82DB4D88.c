extern unsigned __int64 __mftb();
extern void __dcbt(int offset, const void *base);
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
    TimerStream *s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        TimerEntryB *eb = (TimerEntryB *)s->current;
        eb->name = name;
        eb->time = (unsigned)__mftb();
        s->current = (char *)(eb + 1);
    }
}

typedef struct AabbU_82DB4D88 {
    unsigned int min[3];
    unsigned char expMin[3];
    unsigned char shift;
    unsigned int max[3];
    unsigned char expMax[3];
    unsigned char pad1f;
} AabbU_82DB4D88;

typedef struct Collidable_82DB4D88 {
    char pad00[0x14];
    int handle;
    int pad18[2];
    AabbU_82DB4D88 aabb;
} Collidable_82DB4D88;

typedef struct Entity_82DB4D88 {
    char pad00[0x10];
    Collidable_82DB4D88 collidable;
} Entity_82DB4D88;

typedef struct Aabb_82DB4D88 {
    unsigned int min[3];
    int pad0c;
    unsigned int max[3];
    int pad1c;
} Aabb_82DB4D88;

typedef struct Pairs_82DB4D88 {
    int pad00;
    int size;
} Pairs_82DB4D88;

typedef struct Sweep_82DB4D88 Sweep_82DB4D88;
typedef struct SweepVtbl_82DB4D88 {
    void *slot[11];
    void (*AddObjects)(Sweep_82DB4D88 *self, int **handles, Aabb_82DB4D88 *aabbs, int count,
                       Pairs_82DB4D88 *added, Pairs_82DB4D88 *removed);
} SweepVtbl_82DB4D88;
struct Sweep_82DB4D88 {
    SweepVtbl_82DB4D88 *vt;
    int pad04[3];
    void *locked;
};

typedef struct World_82DB4D88 {
    char pad00[0x58];
    Sweep_82DB4D88 *sweep;
    char pad5c[0x1c];
    void *updater;
} World_82DB4D88;

extern int *fn_82CE5410(void);
extern void fn_82DBA1E0(void *updater, Entity_82DB4D88 **entities, int count);
extern void fn_83088640(Pairs_82DB4D88 *added, Pairs_82DB4D88 *removed);
extern void fn_83096038(Sweep_82DB4D88 *sweep);
extern void fn_83096040(Sweep_82DB4D88 *sweep);

void fn_82DB4D88(void *self, Entity_82DB4D88 **entities, int count, World_82DB4D88 *world,
                 Pairs_82DB4D88 *added, Pairs_82DB4D88 *removed)
{
    Aabb_82DB4D88 *aabbs;
    int **handles;
    int *stack;
    int i;

    if (count == 0) {
        return;
    }
    {
        TimerStream *s = KeTlsGetValue(lbl_8323B4A0);
        if (s->current < s->end) {
            TimerEntryA *ea = (TimerEntryA *)s->current;
            ea->name = "LtBroadPhase";
            ea->name2 = "StGatherAabbs";
            ea->time = (unsigned)__mftb();
            s->current = (char *)(ea + 1);
        }
    }
    stack = fn_82CE5410();
    aabbs = (Aabb_82DB4D88 *)*stack;
    *stack = ((count * 32 + 0x7f) & ~0x7f) + (int)aabbs;
    stack = fn_82CE5410();
    handles = (int **)*stack;
    *stack = ((count * 4 + 0x7f) & ~0x7f) + (int)handles;
    {
        Aabb_82DB4D88 *a = aabbs;
        int **h = handles;
        Entity_82DB4D88 **p = entities;
        for (i = count - 1; i >= 0; i--) {
            Entity_82DB4D88 *e = *p;
            Collidable_82DB4D88 *c;
            AabbU_82DB4D88 *src;
            if (i >= 4) {
                __dcbt(0, (char *)p[4] + 0x10);
            }
            c = &e->collidable;
            *h = &c->handle;
            src = &c->aabb;
            if (src->min[0] > src->max[0]) {
                fn_82DBA1E0(world->updater, &e, 1);
            }
            p++;
            {
                unsigned int shift = src->shift;
                unsigned int m0 = src->min[0] - (src->expMin[0] << shift);
                unsigned int m1 = src->min[1] - (src->expMin[1] << shift);
                unsigned int m2 = src->min[2] - (src->expMin[2] << shift);
                unsigned int x0, x1, x2;
                a->min[0] = m0;
                a->min[1] = m1;
                a->min[2] = m2;
                x0 = src->max[0] + (src->expMax[0] << shift);
                x1 = src->max[1] + (src->expMax[1] << shift);
                x2 = src->max[2] + (src->expMax[2] << shift);
                a->max[0] = x0;
                a->max[1] = x1;
                a->max[2] = x2;
            }
            h++;
            a++;
        }
    }
    timer("St3AxisSweep");
    if (world->sweep->locked != 0) {
        fn_83096038(world->sweep);
    }
    world->sweep->vt->AddObjects(world->sweep, handles, aabbs, count, added, removed);
    if (world->sweep->locked != 0) {
        fn_83096040(world->sweep);
    }
    *fn_82CE5410() = (int)handles;
    *fn_82CE5410() = (int)aabbs;
    if (added->size + removed->size > 0) {
        timer("StRemoveDup");
        fn_83088640(added, removed);
    }
    timer("lt");
}
