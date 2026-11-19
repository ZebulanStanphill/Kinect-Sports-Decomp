typedef struct Allocator_82D916B8 Allocator_82D916B8;

typedef struct AllocatorVtbl_82D916B8 {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Allocator_82D916B8 *, void *, int, int);
} AllocatorVtbl_82D916B8;

struct Allocator_82D916B8 {
    AllocatorVtbl_82D916B8 *vtbl;
};

typedef struct Context_82D916B8 {
    char pad[0x10];
    Allocator_82D916B8 *alloc;
} Context_82D916B8;

extern "C" Context_82D916B8 *fn_82CE5410(void);

struct Entity_82D916B8;
struct Island_82D916B8;

struct EntityList_82D916B8 {
    Entity_82D916B8 **data; /* 0x0 */
    int count;              /* 0x4 */
    int capacity;           /* 0x8 */
};

struct InplaceList_82D916B8 {
    Entity_82D916B8 **data;       /* 0x0 */
    int count;                    /* 0x4 */
    int capacity;                 /* 0x8 */
    Entity_82D916B8 *storage[16]; /* 0xc */
};

class Body_82D916B8
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void GetLinked(InplaceList_82D916B8 *out);
};

struct Entity_82D916B8 {
    void *vtbl;
    int pad4;
    int world; /* 0x8 */
    char padc[0xcc - 0xc];
    Island_82D916B8 *island; /* 0xcc */
    char padd0[0xe8 - 0xd0];
    unsigned char motionType; /* 0xe8 */
};

struct World_82D916B8 {
    char pad0[0x20];
    Island_82D916B8 *fixedIsland; /* 0x20 */
};

extern "C" {
void fn_82DAFB58(Island_82D916B8 *island, Body_82D916B8 *body);
void fn_82CE4118(Body_82D916B8 *body);
void fn_82D909F0(int world, Entity_82D916B8 *entity, Entity_82D916B8 *other);
}

/* Motion type 5 is the fixed motion. The original tests it twice: once on the widened byte and once
   after narrowing it back to the byte this helper takes (the redundant clrlwi). */
static __forceinline int IsFixed(unsigned char type)
{
    return type == 5;
}

extern "C" void fn_82D916B8(World_82D916B8 *world, Entity_82D916B8 *entity, EntityList_82D916B8 *entities)
{
    InplaceList_82D916B8 linked;
    Allocator_82D916B8 *alloc;
    Body_82D916B8 *body;
    Entity_82D916B8 *other;
    Island_82D916B8 *island;
    int i;
    int j;
    unsigned int type;

    island = entity->island;
    linked.data = linked.storage;
    linked.count = 0;
    linked.capacity = 0x80000010;
    for (i = 0; i < entities->count; i++) {
        body = (Body_82D916B8 *)entities->data[i];
        if (island != world->fixedIsland) {
            fn_82DAFB58(island, body);
            fn_82CE4118(body);
            linked.count = 0;
            body->GetLinked(&linked);
            for (j = 0; j < linked.count; j++) {
                other = linked.data[j];
                if (other != entity) {
                    type = other->motionType;
                    if (type != 5 && !IsFixed(type) && entity->motionType != 5 &&
                        (int)other->island != (int)entity->island) {
                        fn_82D909F0(other->world, other, entity);
                    }
                }
            }
        } else {
            fn_82DAFB58(world->fixedIsland, body);
            fn_82CE4118(body);
        }
    }
    alloc = fn_82CE5410()->alloc;
    linked.count = 0;
    if ((linked.capacity & (1 << 31)) == 0) {
        alloc->vtbl->Free(alloc, linked.data, linked.capacity & 0x3fffffff, 4);
    }
}
