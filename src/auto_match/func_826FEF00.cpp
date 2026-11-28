extern "C" long _InterlockedExchangeAdd(volatile long *value, long amount);

typedef struct Text_826FEF00 {
    unsigned int length; /* 0x00 */
    long refs;           /* 0x04 */
} Text_826FEF00;

class Interface_826FEF00
{
  public:
    virtual void *GetRoot();                  /* 0x00 */
    virtual void Attach(void *object);        /* 0x04 */
    virtual void Slot8();                     /* 0x08 */
    virtual Interface_826FEF00 *Find(int id); /* 0x0c */
};

typedef struct Definition_826FEF00 {
    char pad0[0x14];
    void *resource; /* 0x14 */
} Definition_826FEF00;

typedef struct Owner_826FEF00 {
    char pad0[8];
    Interface_826FEF00 container; /* 0x08 */
    char padC[0x6c - 0xc];
    Definition_826FEF00 *definition; /* 0x6c */
} Owner_826FEF00;

typedef struct Self_826FEF00 {
    void *vt;              /* 0x00 */
    int unk4;              /* 0x04 */
    int unk8;              /* 0x08 */
    Owner_826FEF00 *owner; /* 0x0c */
    char *source;          /* 0x10 */
    void *listener;        /* 0x14 */
    void *shape;           /* 0x18 */
} Self_826FEF00;

extern "C" {
extern char lbl_8200DDD4[];
extern void *lbl_831E7E64;
extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void fn_8267C4F0(void *object);
extern void fn_8267BE38(void *data);
extern void fn_8268B330(unsigned int *text);
extern void *fn_826F5070(void *memory, void *resource, void *root, int flags);
extern void fn_826F7480(Owner_826FEF00 *owner, unsigned int *text);
extern void *fn_826FC880(void *memory, void *shape, unsigned int *text, char *name);
}

static __forceinline void Assign_826FEF00(void **slot, void *object)
{
    if (*slot != 0) {
        fn_8267C4F0(*slot);
    }
    *slot = object;
}

extern "C" Self_826FEF00 *fn_826FEF00(Self_826FEF00 *self, char *source, Owner_826FEF00 *owner)
{
    void *listener;
    void *shape;
    void *memory;
    unsigned int text;
    Interface_826FEF00 *found;
    Text_826FEF00 *data;

    self->owner = owner;
    self->source = source;
    self->unk4 = 0;
    self->vt = lbl_8200DDD4;
    self->unk8 = 0;
    self->listener = 0;
    self->shape = 0;
    memory = fn_8267B890(lbl_831E7E64, 0x54, 0);
    if (memory != 0) {
        Owner_826FEF00 *shapeOwner = self->owner;
        void *resource = shapeOwner->definition->resource;

        shape = fn_826F5070(memory, resource, shapeOwner->container.GetRoot(), 0);
    } else {
        shape = 0;
    }
    Assign_826FEF00(&self->shape, shape);
    fn_8268B330(&text);
    fn_826F7480(self->owner, &text);
    memory = fn_8267B890(lbl_831E7E64, 0x2c, 0);
    if (memory != 0) {
        listener = fn_826FC880(memory, self->shape, &text, source + 0xc);
    } else {
        listener = 0;
    }
    Assign_826FEF00(&self->listener, listener);
    found = self->owner->container.Find(0x17);
    found->Attach(self->listener);
    fn_8267C4F0(found);
    data = (Text_826FEF00 *)(text & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
    return self;
}
