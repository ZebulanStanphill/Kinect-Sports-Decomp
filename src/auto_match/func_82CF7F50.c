typedef struct Allocator_82CF7F50 Allocator_82CF7F50;

typedef struct AllocatorVtable_82CF7F50 {
    void *slot0;
    void *(*blockAlloc)(Allocator_82CF7F50 *self, int size); /* 0x04 */
    void *slots08[9];
    int (*getAllocatedSize)(Allocator_82CF7F50 *self, void *p, int size); /* 0x2c */
} AllocatorVtable_82CF7F50;

struct Allocator_82CF7F50 {
    AllocatorVtable_82CF7F50 *vtable;
};

typedef struct AllocInfo_82CF7F50 {
    unsigned int traceId;   /* 0x00 */
    int size;               /* 0x04 */
    unsigned char isPooled; /* 0x08 */
} AllocInfo_82CF7F50;

typedef struct Tracker_82CF7F50 {
    int pad00;
    void *stackTracer;             /* 0x04 */
    char traceTree[0x10];          /* 0x08 */
    char lock[0x1c];               /* 0x18 */
    Allocator_82CF7F50 *allocator; /* 0x34 */
    void *callbackContext;         /* 0x38 */
    char pad3C[8];
    void *callback;    /* 0x44 */
    int allocatedSize; /* 0x48 */
} Tracker_82CF7F50;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82D00D50(void *stackTracer, unsigned int *trace, int maxDepth);
extern unsigned int fn_82D00E00(void *traceTree, unsigned int *trace, int count);
extern void fn_82CF84B0(void *callback, void *context, void *p, AllocInfo_82CF7F50 info);

void *fn_82CF7F50(Tracker_82CF7F50 *self, int pooled, int size)
{
    void *p;
    AllocInfo_82CF7F50 info;
    unsigned int trace[32];
    int actual;

    RtlEnterCriticalSection(self->lock);
    p = self->allocator->vtable->blockAlloc(self->allocator, size);
    actual = self->allocator->vtable->getAllocatedSize(self->allocator, p, size);
    self->allocatedSize += actual;
    info.size = size;
    info.isPooled = pooled != 0;
    if (self->stackTracer != 0) {
        int depth = fn_82D00D50(self->stackTracer, trace, 0x20);
        info.traceId = fn_82D00E00(self->traceTree, trace, depth);
    } else {
        info.traceId = 0;
    }
    fn_82CF84B0(self->callback, self->callbackContext, p, info);
    RtlLeaveCriticalSection(self->lock);
    return p;
}
