typedef struct Body_82D80F08 Body_82D80F08;
typedef struct Filter_82D80F08 Filter_82D80F08;
typedef struct PairFilter_82D80F08 PairFilter_82D80F08;

typedef struct Result_82D80F08 {
    unsigned char value;
} Result_82D80F08;

typedef struct FilterVtbl_82D80F08 {
    void *slots[19];
    unsigned char (*isEnabled)(Filter_82D80F08 *self, void *a, void *b); /* 0x4c */
} FilterVtbl_82D80F08;

struct Filter_82D80F08 {
    FilterVtbl_82D80F08 *vt;
};

typedef struct PairFilterVtbl_82D80F08 {
    void *slot0;
    Result_82D80F08 *(*check)(Result_82D80F08 *result, void *self, void *a, void *b); /* 0x4 */
} PairFilterVtbl_82D80F08;

typedef struct PairFilterBase_82D80F08 {
    PairFilterVtbl_82D80F08 *vt;
} PairFilterBase_82D80F08;

struct PairFilter_82D80F08 {
    int pad0;
    int pad4;
    PairFilterBase_82D80F08 base; /* 0x8 */
};

struct Body_82D80F08 {
    char pad0[0x10];
    char collidable[0x14]; /* 0x10 */
    char shape[4];         /* 0x24 */
};

typedef struct Event_82D80F08 {
    unsigned char type; /* 0x0 */
    Body_82D80F08 *a;   /* 0x4 */
    Body_82D80F08 *b;   /* 0x8 */
} Event_82D80F08;

typedef struct World_82D80F08 {
    char pad0[0x58];
    Filter_82D80F08 *filter; /* 0x58 */
    char pad5c[8];
    void *dispatcher; /* 0x64 */
    char pad68[0x14];
    PairFilter_82D80F08 *pairFilter; /* 0x7c */
    char pad80[8];
    void *queue; /* 0x88 */
    char pad8c[8];
    int locked; /* 0x94 */
} World_82D80F08;

extern void fn_82DA6530(void *queue, Event_82D80F08 *event);
extern void *fn_82D7C120(void *a, void *b);
extern void fn_83088518(void *dispatcher, void **pairs, int count, PairFilterBase_82D80F08 *filter);

void fn_82D80F08(World_82D80F08 *world, Body_82D80F08 *a, Body_82D80F08 *b)
{
    Event_82D80F08 event;
    Result_82D80F08 result;
    void *pair[2];
    PairFilter_82D80F08 *pairFilter;

    if (world->locked != 0) {
        event.type = 0x13;
        event.a = a;
        event.b = b;
        fn_82DA6530(world->queue, &event);
        return;
    }
    if (world->filter->vt->isEnabled(world->filter, a->shape, b->shape)) {
        if (world->pairFilter->base.vt->check(&result, &world->pairFilter->base, a->collidable, b->collidable)
                ->value) {
            if (fn_82D7C120(a->collidable, b->collidable) == 0) {
                pairFilter = world->pairFilter;
                pair[0] = a->shape;
                pair[1] = b->shape;
                fn_83088518(world->dispatcher, pair, 1, pairFilter ? &pairFilter->base : 0);
            }
        }
    }
}
