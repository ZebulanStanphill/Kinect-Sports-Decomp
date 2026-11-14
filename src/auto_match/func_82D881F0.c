/* hkpWorld::getPenetrations(const hkpCollidable *collA, const hkpCollisionInput &input,
   hkpCdBodyPairCollector &collector) (Physics/Dynamics/World/hkpWorld.cpp). */
extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

struct Al_82D881F0;
typedef struct {
    void *p0;
    void *p4;
    void *p8;
    void *pc;
    void (*f10)(struct Al_82D881F0 *, void *, unsigned, int);
} AlVt_82D881F0;
typedef struct Al_82D881F0 { AlVt_82D881F0 *vt; } Al_82D881F0;
typedef struct { char pad[0x10]; Al_82D881F0 *al; } Heap_82D881F0;
extern Heap_82D881F0 *fn_82CE5410(void);

typedef struct { float min[4]; float max[4]; } Aabb_82D881F0;

double __fsel(double a, double b, double c);
static __forceinline float max2(float x, float y) { return (float)__fsel(x - y, x, y); }

struct Shape_82D881F0;
typedef struct {
    void *slots[7];
    void (*getAabb)(struct Shape_82D881F0 *, const void *transform, float tolerance, Aabb_82D881F0 *out);   /* +0x1c */
} ShapeVt_82D881F0;
typedef struct Shape_82D881F0 {
    ShapeVt_82D881F0 *vt;
    int pad4[2];
    unsigned int type;   /* +0xc */
} Shape_82D881F0;

typedef struct Collidable_82D881F0 {
    Shape_82D881F0 *shape;   /* +0x0 */
    int shapeKey;            /* +0x4 */
    const void *motion;      /* +0x8 */
} Collidable_82D881F0;

typedef struct Handle_82D881F0 {
    int id;
    char type;
    signed char ownerOffset;   /* +0x5 */
} Handle_82D881F0;

typedef struct { Handle_82D881F0 *a; Handle_82D881F0 *b; } HandlePair_82D881F0;

typedef struct {
    HandlePair_82D881F0 *data;
    int size;
    int capacityAndFlags;
    HandlePair_82D881F0 storage[128];
} HitArray_82D881F0;

struct BroadPhase_82D881F0;
typedef struct {
    void *slots[17];
    void (*querySingleAabb)(struct BroadPhase_82D881F0 *, const Aabb_82D881F0 *, HitArray_82D881F0 *);   /* +0x44 */
} BroadPhaseVt_82D881F0;
typedef struct BroadPhase_82D881F0 { BroadPhaseVt_82D881F0 *vt; } BroadPhase_82D881F0;

struct Filter_82D881F0;
typedef struct {
    void *p0;
    unsigned char *(*isCollisionEnabled)(unsigned char *result, struct Filter_82D881F0 *,
                                         const Collidable_82D881F0 *, const Collidable_82D881F0 *);   /* +0x4 */
} FilterVt_82D881F0;
typedef struct Filter_82D881F0 { FilterVt_82D881F0 *vt; } Filter_82D881F0;
typedef struct { char pad[8]; Filter_82D881F0 collidableFilter; } CollisionFilter_82D881F0;

typedef struct { char pad[4]; unsigned char earlyOut; } Collector_82D881F0;
typedef void (*GetPenetrationsFunc_82D881F0)(const Collidable_82D881F0 *, const Collidable_82D881F0 *,
                                             const void *input, Collector_82D881F0 *collector);
typedef struct {
    GetPenetrationsFunc_82D881F0 getPenetrations;
    void *other[4];
} AgentFuncs_82D881F0;
typedef struct {
    char pad0[0x1a0];
    unsigned char agent2Types[32][32];       /* +0x1a0 */
    char pad5a0[0x9a4 - 0x5a0];
    AgentFuncs_82D881F0 agent2Func[1];       /* +0x9a4 */
} Dispatcher_82D881F0;

typedef struct {
    Dispatcher_82D881F0 *dispatcher;   /* +0x0 */
    int pad4;
    float tolerance;                   /* +0x8 */
} CollisionInput_82D881F0;

typedef struct { char pad[8]; float extent; } Quality_82D881F0;

typedef struct World_82D881F0 {
    char pad0[0x58];
    BroadPhase_82D881F0 *broadPhase;            /* +0x58 */
    char pad5c[0x78 - 0x5c];
    Quality_82D881F0 *quality;                  /* +0x78 */
    CollisionFilter_82D881F0 *collisionFilter;  /* +0x7c */
} World_82D881F0;

void fn_82D881F0(World_82D881F0 *self, const Collidable_82D881F0 *collA, const CollisionInput_82D881F0 *input,
                 Collector_82D881F0 *collector)
{
    TimerStream *s;
    TimerEntryA *ea;
    TimerEntryB *eb;
    Aabb_82D881F0 aabb;
    HitArray_82D881F0 hits;
    HandlePair_82D881F0 *p;
    unsigned int typeA;
    int i;
    Al_82D881F0 *al;

    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        ea = (TimerEntryA *)s->current;
        ea->name = "LthkpWorld::getPenetrations";
        ea->name2 = "Stbroadphase";
        ea->time = (unsigned)__mftb();
        s->current = (char *)(ea + 1);
    }
    collA->shape->vt->getAabb(collA->shape, collA->motion, max2(0.0f, input->tolerance - self->quality->extent * 0.5f), &aabb);
    hits.data = hits.storage;
    hits.size = 0;
    hits.capacityAndFlags = 0x80000080;
    self->broadPhase->vt->querySingleAabb(self->broadPhase, &aabb, &hits);
    p = hits.data;
    typeA = collA->shape->type;
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        eb = (TimerEntryB *)s->current;
        eb->name = "Stnarrowphase";
        eb->time = (unsigned)__mftb();
        s->current = (char *)(eb + 1);
    }
    for (i = hits.size - 1; i >= 0; p++, i--) {
        const Collidable_82D881F0 *collB =
            (const Collidable_82D881F0 *)((char *)p->b + p->b->ownerOffset);
        unsigned char enabled;
        Filter_82D881F0 *filter;
        if (collA == collB)
            continue;
        filter = &self->collisionFilter->collidableFilter;
        if (*filter->vt->isCollisionEnabled(&enabled, filter, collA, collB) == 0)
            continue;
        if (collB->shape == 0)
            continue;
        {
            Dispatcher_82D881F0 *d = input->dispatcher;
            d->agent2Func[d->agent2Types[typeA][collB->shape->type]].getPenetrations(collA, collB, input, collector);
            if (collector->earlyOut)
                break;
        }
    }
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        eb = (TimerEntryB *)s->current;
        eb->name = "lt";
        eb->time = (unsigned)__mftb();
        s->current = (char *)(eb + 1);
    }
    al = fn_82CE5410()->al;
    hits.size = 0;
    if ((hits.capacityAndFlags & (int)0x80000000) == 0)
        al->vt->f10(al, hits.data, hits.capacityAndFlags & 0x3fffffff, 8);
}
