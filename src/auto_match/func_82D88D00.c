typedef struct Allocator_82D88D00 Allocator_82D88D00;

typedef struct AllocatorVtbl_82D88D00 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Allocator_82D88D00 *self, void *data, int count, int elemSize); /* 0x10 */
} AllocatorVtbl_82D88D00;

struct Allocator_82D88D00 {
    AllocatorVtbl_82D88D00 *vtbl;
};

typedef struct Memory_82D88D00 {
    char pad0[0x10];
    Allocator_82D88D00 *alloc; /* 0x10 */
} Memory_82D88D00;

typedef struct Island_82D88D00 {
    char pad0[0x20];
    unsigned short storageIndex; /* 0x20 */
    char pad22[0x3];
    unsigned char splitCheckRequested : 2; /* 0x25 */
    unsigned char isSparse : 2;
    unsigned char actionListCleanupNeeded : 2;
    unsigned char allowIslandLocking : 2;
} Island_82D88D00;

typedef struct Entity_82D88D00 Entity_82D88D00;

/* hkInplaceArray<hkpEntity *, 4> */
typedef struct EntityArray_82D88D00 {
    Entity_82D88D00 **data;      /* 0x00 */
    int size;                    /* 0x04 */
    int capacityAndFlags;        /* 0x08 */
    Entity_82D88D00 *storage[4]; /* 0x0c */
} EntityArray_82D88D00;

typedef struct Action_82D88D00 Action_82D88D00;

typedef struct ActionVtbl_82D88D00 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*GetEntities)(Action_82D88D00 *self, EntityArray_82D88D00 *entities); /* 0x10 */
} ActionVtbl_82D88D00;

struct Action_82D88D00 {
    ActionVtbl_82D88D00 *vtbl; /* 0x00 */
    int refCount;              /* 0x04 */
    void *world;               /* 0x08 */
    Island_82D88D00 *island;   /* 0x0c */
};

/* hkSmallArray<hkpAction *> */
typedef struct ActionArray_82D88D00 {
    Action_82D88D00 **data;  /* 0x00 */
    unsigned short size;     /* 0x04 */
    unsigned short capacity; /* 0x06 */
} ActionArray_82D88D00;

struct Entity_82D88D00 {
    char pad0[0xcc];
    Island_82D88D00 *simulationIsland; /* 0xcc */
    char padD0[0x208 - 0xd0];
    ActionArray_82D88D00 actions; /* 0x208 */
};

extern Memory_82D88D00 *fn_82CE5410(void);
extern void fn_82DAF6D0(Island_82D88D00 *island, Action_82D88D00 *action);
extern void fn_82DAFB58(Island_82D88D00 *island, Action_82D88D00 *action);

static __forceinline void RemoveActionAt(ActionArray_82D88D00 *array, int index)
{
    array->size--;
    array->data[index] = array->data[array->size];
}

void fn_82D88D00(void *world, Action_82D88D00 *action, Entity_82D88D00 *entity)
{
    EntityArray_82D88D00 entities;
    Island_82D88D00 *newIsland;
    Action_82D88D00 **slot;
    int index;
    Allocator_82D88D00 *alloc;
    int i;

    index = 0;
    if (index < entity->actions.size) {
        slot = entity->actions.data;
        for (; index < entity->actions.size; index++, slot++) {
            if (*slot == action) {
                goto found;
            }
        }
    }
    index = -1;
found:
    RemoveActionAt(&entity->actions, index);
    entity->simulationIsland->splitCheckRequested = 1;

    entities.data = entities.storage;
    entities.size = 0;
    entities.capacityAndFlags = 0x80000004;
    action->vtbl->GetEntities(action, &entities);

    newIsland = 0;
    for (i = 0; i < entities.size; i++) {
        if (entities.data[i] != entity) {
            newIsland = entities.data[i]->simulationIsland;
            if (newIsland->storageIndex != 0xffff) {
                break;
            }
        }
    }
    if (newIsland != action->island) {
        fn_82DAF6D0(action->island, action);
        fn_82DAFB58(newIsland, action);
    }

    alloc = fn_82CE5410()->alloc;
    entities.size = 0;
    if ((entities.capacityAndFlags & (int)0x80000000) == 0) {
        alloc->vtbl->Free(alloc, entities.data, entities.capacityAndFlags & 0x3fffffff, 4);
    }
}
