/* hkpWorld::getClosestPoints(const hkpCollidable *collA, const hkpCollisionInput &input,
   hkpCdPointCollector &collector) (Physics/Dynamics/World/hkpWorld.cpp). */
extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time; int pad; const char *name2; } TimerEntryA;
typedef struct { const char *name; unsigned time, pad; } TimerEntryB;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

struct Al_82D87FB8;
typedef struct {
    void *p0;
    void *p4;
    void *p8;
    void *pc;
    void (*f10)(struct Al_82D87FB8 *, void *, unsigned, int);
} AlVt_82D87FB8;
typedef struct Al_82D87FB8 { AlVt_82D87FB8 *vt; } Al_82D87FB8;
typedef struct { char pad[0x10]; Al_82D87FB8 *al; } Heap_82D87FB8;
extern Heap_82D87FB8 *fn_82CE5410(void);

typedef struct { float min[4]; float max[4]; } Aabb_82D87FB8;

struct Shape_82D87FB8;
typedef struct {
    void *slots[7];
    void (*getAabb)(struct Shape_82D87FB8 *, const void *transform, float tolerance, Aabb_82D87FB8 *out);   /* +0x1c */
} ShapeVt_82D87FB8;
typedef struct Shape_82D87FB8 {
    ShapeVt_82D87FB8 *vt;
    int pad4[2];
    unsigned int type;   /* +0xc */
} Shape_82D87FB8;

typedef struct Collidable_82D87FB8 {
    Shape_82D87FB8 *shape;   /* +0x0 */
    int shapeKey;            /* +0x4 */
    const void *motion;      /* +0x8 */
} Collidable_82D87FB8;

typedef struct Handle_82D87FB8 {
    int id;
    char type;
    signed char ownerOffset;   /* +0x5 */
} Handle_82D87FB8;

typedef struct { Handle_82D87FB8 *a; Handle_82D87FB8 *b; } HandlePair_82D87FB8;

typedef struct {
    HandlePair_82D87FB8 *data;
    int size;
    int capacityAndFlags;
    HandlePair_82D87FB8 storage[128];
} HitArray_82D87FB8;

struct BroadPhase_82D87FB8;
typedef struct {
    void *slots[17];
    void (*querySingleAabb)(struct BroadPhase_82D87FB8 *, const Aabb_82D87FB8 *, HitArray_82D87FB8 *);   /* +0x44 */
} BroadPhaseVt_82D87FB8;
typedef struct BroadPhase_82D87FB8 { BroadPhaseVt_82D87FB8 *vt; } BroadPhase_82D87FB8;

struct Filter_82D87FB8;
typedef struct {
    void *p0;
    unsigned char *(*isCollisionEnabled)(unsigned char *result, struct Filter_82D87FB8 *,
                                         const Collidable_82D87FB8 *, const Collidable_82D87FB8 *);   /* +0x4 */
} FilterVt_82D87FB8;
typedef struct Filter_82D87FB8 { FilterVt_82D87FB8 *vt; } Filter_82D87FB8;
typedef struct { char pad[8]; Filter_82D87FB8 collidableFilter; } CollisionFilter_82D87FB8;

typedef void (*GetClosestPointsFunc_82D87FB8)(const Collidable_82D87FB8 *, const Collidable_82D87FB8 *,
                                              const void *input, void *collector);
typedef struct {
    GetClosestPointsFunc_82D87FB8 getClosestPoints;
    void *other[4];
} AgentFuncs_82D87FB8;
typedef struct {
    char pad0[0x1a0];
    unsigned char agent2Types[32][32];       /* +0x1a0 */
    char pad5a0[0x9a8 - 0x5a0];
    AgentFuncs_82D87FB8 agent2Func[1];       /* +0x9a8 */
} Dispatcher_82D87FB8;

typedef struct {
    Dispatcher_82D87FB8 *dispatcher;   /* +0x0 */
    int pad4;
    float tolerance;                   /* +0x8 */
} CollisionInput_82D87FB8;

typedef struct { char pad[8]; float extent; } Quality_82D87FB8;

typedef struct World_82D87FB8 {
    char pad0[0x58];
    BroadPhase_82D87FB8 *broadPhase;            /* +0x58 */
    char pad5c[0x78 - 0x5c];
    Quality_82D87FB8 *quality;                  /* +0x78 */
    CollisionFilter_82D87FB8 *collisionFilter;  /* +0x7c */
} World_82D87FB8;

void fn_82D87FB8(World_82D87FB8 *self, const Collidable_82D87FB8 *collA, const CollisionInput_82D87FB8 *input,
                 void *collector)
{
    TimerStream *s;
    TimerEntryA *ea;
    TimerEntryB *eb;
    Aabb_82D87FB8 aabb;
    HitArray_82D87FB8 hits;
    HandlePair_82D87FB8 *p;
    unsigned int typeA;
    int i;
    Al_82D87FB8 *al;

    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        ea = (TimerEntryA *)s->current;
        ea->name = "LthkpWorld::getClosestPoints";
        ea->name2 = "Stbroadphase";
        ea->time = (unsigned)__mftb();
        s->current = (char *)(ea + 1);
    }
    collA->shape->vt->getAabb(collA->shape, collA->motion, input->tolerance - self->quality->extent * 0.5f, &aabb);
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
        const Collidable_82D87FB8 *collB =
            (const Collidable_82D87FB8 *)((char *)p->b + p->b->ownerOffset);
        unsigned char enabled;
        Filter_82D87FB8 *filter;
        if (collA == collB)
            continue;
        filter = &self->collisionFilter->collidableFilter;
        if (*filter->vt->isCollisionEnabled(&enabled, filter, collA, collB) == 0)
            continue;
        if (collB->shape == 0)
            continue;
        {
            Dispatcher_82D87FB8 *d = input->dispatcher;
            d->agent2Func[d->agent2Types[typeA][collB->shape->type]].getClosestPoints(collA, collB, input, collector);
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
