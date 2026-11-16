extern unsigned __int64 __mftb(void);

typedef struct TimerEntryA_82D57B60 {
    const char *name;
    unsigned int time;
    int unused;
    const char *section;
} TimerEntryA_82D57B60;

typedef struct TimerEntryB_82D57B60 {
    const char *name;
    unsigned int time;
    int unused;
} TimerEntryB_82D57B60;

typedef struct TimerStream_82D57B60 {
    void *unused00;
    char *current;
    void *unused08;
    char *end;
} TimerStream_82D57B60;

extern TimerStream_82D57B60 *KeTlsGetValue(unsigned int slot);
extern unsigned int lbl_8323B4A0;
typedef struct Allocator_82D57B60 Allocator_82D57B60;

typedef struct AllocatorVtable_82D57B60 {
    void *unused[4];
    void (*release)(Allocator_82D57B60 *self, void *data, unsigned int count, int size);
} AllocatorVtable_82D57B60;

struct Allocator_82D57B60 {
    AllocatorVtable_82D57B60 *vtable;
};

typedef struct Heap_82D57B60 {
    char unused00[0x10];
    Allocator_82D57B60 *allocator;
} Heap_82D57B60;

extern Heap_82D57B60 *fn_82CE5410(void);

typedef struct Aabb_82D57B60 {
    float min[4];
    float max[4];
} Aabb_82D57B60;

typedef struct KeyArray_82D57B60 {
    unsigned int *data;
    int size;
    int capacityAndFlags;
    unsigned int storage[128];
} KeyArray_82D57B60;
typedef struct Shape_82D57B60 Shape_82D57B60;
typedef struct Container_82D57B60 Container_82D57B60;

typedef struct ShapeVtable_82D57B60 {
    void *unused00[4];
    Container_82D57B60 *(*getContainer)(Shape_82D57B60 *self); /* 0x10 */
    void *unused14[7];
    void (*query)(Shape_82D57B60 *self, const Aabb_82D57B60 *aabb, KeyArray_82D57B60 *keys); /* 0x30 */
} ShapeVtable_82D57B60;

struct Shape_82D57B60 {
    ShapeVtable_82D57B60 *vtable;
    int unused04;
    unsigned int m_userData; /* 0x8 */
    unsigned int m_type;     /* 0xc */
};

typedef struct ContainerVtable_82D57B60 {
    void *unused00[5];
    Shape_82D57B60 *(*getChild)(Container_82D57B60 *self, unsigned int key, void *buffer); /* 0x14 */
} ContainerVtable_82D57B60;

struct Container_82D57B60 {
    ContainerVtable_82D57B60 *vtable;
};

typedef struct Body_82D57B60 {
    Shape_82D57B60 *m_shape; /* 0x0 */
    unsigned int m_shapeKey; /* 0x4 */
    void *m_motion;          /* 0x8 */
    void *m_parent;          /* 0xc */
} Body_82D57B60;
typedef struct Input_82D57B60 Input_82D57B60;
typedef struct Filter_82D57B60 Filter_82D57B60;

typedef struct FilterVtable_82D57B60 {
    void *unused00;
    unsigned char *(*enabled)(unsigned char *out, Filter_82D57B60 *self, Input_82D57B60 *input,
                              Body_82D57B60 *first, Body_82D57B60 *second, Container_82D57B60 *container,
                              unsigned int key);
} FilterVtable_82D57B60;

struct Filter_82D57B60 {
    FilterVtable_82D57B60 *vtable;
};

typedef struct FilterOwner_82D57B60 {
    char unused00[0xc];
    Filter_82D57B60 filter;
} FilterOwner_82D57B60;

typedef void (*Agent_82D57B60)(Body_82D57B60 *, Body_82D57B60 *, Input_82D57B60 *, void *, void *);

typedef struct AgentEntry_82D57B60 {
    Agent_82D57B60 process;
    void *unused[4];
} AgentEntry_82D57B60;

typedef struct Dispatcher_82D57B60 {
    char unused00[0x1a0];
    unsigned char agentTypes[32][32];
    char unused5a0[0x40c];
    AgentEntry_82D57B60 agents[1]; /* 0x9ac */
} Dispatcher_82D57B60;

struct Input_82D57B60 {
    Dispatcher_82D57B60 *dispatcher;
    int unused04[2];
    FilterOwner_82D57B60 *filterOwner;
};

extern void fn_82D583E8(Body_82D57B60 *first, Body_82D57B60 *second, Input_82D57B60 *input,
                        Aabb_82D57B60 *aabb);

void fn_82D57B60(Body_82D57B60 *first, Body_82D57B60 *second, Input_82D57B60 *input, void *collector,
                 void *context)
{
    TimerStream_82D57B60 *stream;
    TimerEntryA_82D57B60 *start;
    TimerEntryB_82D57B60 *section;

    struct {
        unsigned char enabled[16];
        Body_82D57B60 child;
        Aabb_82D57B60 aabb;
    } local;

    KeyArray_82D57B60 keys;
    char buffer[512];
    Shape_82D57B60 *shape;
    Container_82D57B60 *container;
    unsigned int *cursor;
    unsigned int *end;
    unsigned int type;
    Allocator_82D57B60 *allocator;
    stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        start = (TimerEntryA_82D57B60 *)stream->current;
        start->name = "LtBvTree";
        start->section = "StQueryTree";
        start->time = (unsigned int)__mftb();
        stream->current = (char *)(start + 1);
    }
    fn_82D583E8(first, second, input, &local.aabb);
    keys.data = keys.storage;
    keys.capacityAndFlags = 0x80000080;
    keys.size = 0;
    shape = second->m_shape;
    shape->vtable->query(second->m_shape, &local.aabb, &keys);
    stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        section = (TimerEntryB_82D57B60 *)stream->current;
        section->name = "StNarrowPhase";
        section->time = (unsigned int)__mftb();
        stream->current = (char *)(section + 1);
    }
    type = first->m_shape->m_type;
    local.child.m_motion = second->m_motion;
    cursor = keys.data;
    end = keys.data + keys.size;
    local.child.m_parent = second;
    container = shape->vtable->getContainer(shape);
    for (; cursor != end; cursor++) {
        Filter_82D57B60 *filter = &input->filterOwner->filter;
        if (*filter->vtable->enabled(local.enabled, filter, input, first, second, container, *cursor)) {
            Body_82D57B60 *childBody = &local.child;
            Shape_82D57B60 *childShape = container->vtable->getChild(container, *cursor, buffer);
            unsigned int key = *cursor;
            childBody->m_shape = childShape;
            childBody->m_shapeKey = key;
            input->dispatcher->agents[input->dispatcher->agentTypes[type][childShape->m_type]].process(
                first, &local.child, input, collector, context);
        }
    }
    stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        section = (TimerEntryB_82D57B60 *)stream->current;
        section->name = "lt";
        section->time = (unsigned int)__mftb();
        stream->current = (char *)(section + 1);
    }
    allocator = fn_82CE5410()->allocator;
    keys.size = 0;
    if ((keys.capacityAndFlags & (int)0x80000000) == 0) {
        allocator->vtable->release(allocator, keys.data, keys.capacityAndFlags & 0x3fffffff, 4);
    }
}
