typedef struct World_82D8B760 {
    char pad0[0x8c];
    int pendingOperations;        /* 0x8c */
    int pendingBodyOperations;    /* 0x90 */
    int criticalOperationsLocked; /* 0x94 */
    int pad98;                    /* 0x98 */
    unsigned char blockExecution; /* 0x9c */
    char pad9d[0xa4 - 0x9d];
    int simulationType; /* 0xa4 */
} World_82D8B760;

typedef struct Entity_82D8B760 {
    void *vtable;          /* 0x00 */
    int pad4;              /* 0x04 */
    World_82D8B760 *world; /* 0x08 */
    int userData;          /* 0x0c */
    void *shape;           /* 0x10 */
    char pad14[0x5c - 0x14];
    float allowedPenetrationDepth; /* 0x5c */
} Entity_82D8B760;

typedef struct Operation_82D8B760 {
    unsigned char type;      /* 0x0 */
    Entity_82D8B760 *entity; /* 0x4 */
    void *shape;             /* 0x8 */
} Operation_82D8B760;

typedef struct Extents_82D8B760 {
    float x;
    float y;
    float z;
    float w;
} Extents_82D8B760;

extern void fn_82CE4040(void *object);
extern void fn_82CE4118(void *object);
extern void fn_82D80C18(World_82D8B760 *world);
extern void fn_82D80C30(World_82D8B760 *world);
extern void fn_82D80C48(World_82D8B760 *world, Operation_82D8B760 *operation);
extern void fn_82D899D8(Entity_82D8B760 *entity, World_82D8B760 *world, void *shape);
extern void fn_82D8B400(Entity_82D8B760 *entity, void *shape, Extents_82D8B760 *extents);
extern void fn_82D91018(World_82D8B760 *world, Entity_82D8B760 *entity);
extern void fn_82D912B0(World_82D8B760 *world, Entity_82D8B760 *entity);
extern void fn_82DACD78(Entity_82D8B760 *entity);
extern void fn_82DAD980(World_82D8B760 *world, Entity_82D8B760 *entity);

static __forceinline float Min2(float a, float b)
{
    return a - b >= 0.0f ? b : a;
}

static __forceinline void LockCriticalOperations(Entity_82D8B760 *entity)
{
    if (entity->world != 0) {
        entity->world->criticalOperationsLocked++;
        fn_82D912B0(entity->world, entity);
    }
}

int fn_82D8B760(Entity_82D8B760 *entity, void *shape)
{
    World_82D8B760 *world = entity->world;
    void *oldShape;
    Extents_82D8B760 extents;
    float extent;

    if (world != 0 && world->criticalOperationsLocked != 0) {
        Operation_82D8B760 operation;
        operation.type = 5;
        operation.entity = entity;
        operation.shape = shape;
        fn_82D80C48(world, &operation);
        return 0;
    }
    LockCriticalOperations(entity);
    oldShape = entity->shape;
    entity->shape = shape;
    fn_82CE4040(shape);
    if (oldShape != 0) {
        fn_82CE4118(oldShape);
    }
    fn_82D8B400(entity, shape, &extents);
    if (oldShape != 0 && entity->allowedPenetrationDepth != 3.40282e38f) {
        entity->allowedPenetrationDepth = -1.0f;
    }
    if (entity->allowedPenetrationDepth <= 0.0f) {
        extent = Min2(Min2(extents.x, extents.y), extents.z);
        if (extent < 0.5f) {
            entity->allowedPenetrationDepth = extent * 0.2f;
        } else {
            entity->allowedPenetrationDepth = 0.1f;
        }
    }
    if (entity->world != 0) {
        fn_82D899D8(entity, entity->world, shape);
    }
    if (entity->world != 0) {
        fn_82DAD980(entity->world, entity);
    }
    fn_82DACD78(entity);
    if (entity->world != 0) {
        fn_82D91018(entity->world, entity);
        world = entity->world;
        if (--world->criticalOperationsLocked == 0 && !world->blockExecution) {
            if (world->pendingOperations != 0) {
                fn_82D80C18(world);
            }
            if (world->simulationType == 1 && world->pendingBodyOperations != 0) {
                fn_82D80C30(world);
            }
        }
    }
    return 1;
}
