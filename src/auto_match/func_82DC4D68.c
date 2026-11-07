typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { const char *name; unsigned time, unused; const char *detail; } TimerEntryEx;
typedef struct { void *pad; char *current; void *pad2; char *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;
extern unsigned __int64 __mftb();

static __forceinline void timerEx(const char *name, const char *detail)
{
    TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntryEx *entry = (TimerEntryEx *)stream->current;
        entry->name = name;
        entry->detail = detail;
        entry->time = (unsigned)__mftb();
        stream->current = (char *)(entry + 1);
    }
}

static __forceinline void timer(const char *name)
{
    TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntry *entry = (TimerEntry *)stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = (char *)(entry + 1);
    }
}

typedef struct Motion_82DC4D68 {
    char data[0x80];
} Motion_82DC4D68;

typedef struct Body_82DC4D68 {
    char pad0[0x30];
    Motion_82DC4D68 *motions;
    char pad34[0x1c];
    int *states;
} Body_82DC4D68;

typedef struct Item_82DC4D68 {
    char pad0[0x18];
    Body_82DC4D68 *body;
    char pad1c[0x18];
    unsigned short count;
    unsigned short index;
    int result;
} Item_82DC4D68;

typedef struct World_82DC4D68 {
    char pad0[0x78];
    void *solver;
    char pad7c[0x154];
    char a[0x10];
    char b[0x10];
} World_82DC4D68;

typedef struct Ctx_82DC4D68 {
    World_82DC4D68 *world;
} Ctx_82DC4D68;

extern int fn_82DBDD58(void *b, void *a, Motion_82DC4D68 *motion, int *states, unsigned int count, int stride);
extern void fn_82DBA1E0(void *solver, int *states, unsigned int count);
extern void fn_82CE8E78(void *owner, Item_82DC4D68 *a, Item_82DC4D68 *b, int flags);

void fn_82DC4D68(Ctx_82DC4D68 *ctx, void *owner, Item_82DC4D68 *item)
{
    Motion_82DC4D68 *motion;
    int *states;
    unsigned int count;

    timerEx("LtIntegrate", "StIntegrateMotions");
    motion = &item->body->motions[item->index + 1];
    count = item->count;
    states = item->body->states + item->index;
    item->result = fn_82DBDD58(ctx->world->b, ctx->world->a, motion, states, count, 0xe0);
    fn_82DBA1E0(ctx->world->solver, states, count);
    timer("lt");
    fn_82CE8E78(owner, item, item, 0);
}
