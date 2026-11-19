typedef struct Allocator_82D844A8 Allocator_82D844A8;

typedef struct AllocatorVtbl_82D844A8 {
    void *f0;
    void *(*Alloc)(Allocator_82D844A8 *, int size);
    void *f8;
    void *fc;
    void (*Free)(Allocator_82D844A8 *, void *data, int count, int size);
} AllocatorVtbl_82D844A8;

struct Allocator_82D844A8 {
    AllocatorVtbl_82D844A8 *vtbl;
};

typedef struct Memory_82D844A8 {
    char pad0[0x10];
    Allocator_82D844A8 *alloc; /* 0x10 */
} Memory_82D844A8;

extern "C" Memory_82D844A8 *fn_82CE5410(void);

typedef struct Handle_82D844A8 {
    int id;                  /* 0x00 */
    signed char type;        /* 0x04 */
    signed char ownerOffset; /* 0x05 */
} Handle_82D844A8;

typedef struct Collidable_82D844A8 {
    char pad0[0x10];
    signed char ownerOffset; /* 0x10 */
    char pad11[0x7];
    unsigned char type; /* 0x18 */
} Collidable_82D844A8;

typedef struct Pair_82D844A8 {
    Handle_82D844A8 *a; /* 0x00 */
    Handle_82D844A8 *b; /* 0x04 */
} Pair_82D844A8;

typedef struct Array_82D844A8 {
    Pair_82D844A8 *data; /* 0x00 */
    int count;           /* 0x04 */
    int capacity;        /* 0x08 */
} Array_82D844A8;

class Phase_82D844A8
{
  public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void Query(void *aabb, Array_82D844A8 *pairs);
};

typedef struct Command_82D844A8 {
    unsigned char size; /* 0x00 */
    char pad1[0x3];
    void *data; /* 0x04 */
} Command_82D844A8;

typedef struct World_82D844A8 {
    char pad0[0x58];
    Phase_82D844A8 *phase; /* 0x58 */
    char pad5c[0x2c];
    void *queue; /* 0x88 */
    char pad8c[0x8];
    int locked; /* 0x94 */
} World_82D844A8;

extern "C" void fn_82CFC050(void *dst, const void *src, int size);
extern "C" void fn_82D89BD8(void *entity);
extern "C" void fn_82DA6530(void *queue, Command_82D844A8 *command);

static __forceinline void *GetOwner(Collidable_82D844A8 *collidable)
{
    return (char *)collidable + collidable->ownerOffset;
}

static __forceinline void *GetEntity(Collidable_82D844A8 *collidable)
{
    if (collidable->type == 1) {
        return GetOwner(collidable);
    }
    return 0;
}

extern "C" void fn_82D844A8(World_82D844A8 *self, void *aabb)
{
    Command_82D844A8 command;
    Array_82D844A8 pairs;
    Allocator_82D844A8 *alloc;

    if (self->locked != 0) {
        command.size = 0x20;
        alloc = fn_82CE5410()->alloc;
        command.data = alloc->vtbl->Alloc(alloc, 0x20);
        fn_82CFC050(command.data, aabb, 0x20);
        fn_82DA6530(self->queue, &command);
    } else {
        int i;

        pairs.data = 0;
        pairs.count = 0;
        pairs.capacity = 0x80000000;
        self->phase->Query(aabb, &pairs);
        for (i = 0; i < pairs.count; i++) {
            Handle_82D844A8 *handle = pairs.data[i].b;
            Collidable_82D844A8 *collidable = (Collidable_82D844A8 *)((char *)handle + handle->ownerOffset);
            void *entity = GetEntity(collidable);

            if (entity != 0) {
                fn_82D89BD8(entity);
            }
        }
        alloc = fn_82CE5410()->alloc;
        pairs.count = 0;
        if ((pairs.capacity & (1 << 31)) == 0) {
            alloc->vtbl->Free(alloc, pairs.data, pairs.capacity & 0x3fffffff, 8);
        }
    }
}
