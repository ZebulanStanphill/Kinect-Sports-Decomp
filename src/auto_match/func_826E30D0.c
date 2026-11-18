extern void fn_826E1E10(void *first, unsigned int count);
extern void fn_826E1F68(void *vec, void *heapAddr, unsigned int count);
extern char lbl_8200D0F8[];

typedef struct Elem_826E30D0 {
    char bytes[0x28];
} Elem_826E30D0;

typedef struct Vec_826E30D0 {
    Elem_826E30D0 *data;   /* 0x00 */
    unsigned int count;    /* 0x04 */
    unsigned int capacity; /* 0x08 */
} Vec_826E30D0;

typedef struct Handle_826E30D0 {
    void *object; /* 0x00 */
} Handle_826E30D0;

typedef struct Object_826E30D0 {
    void *vtable;           /* 0x00 */
    int refCount;           /* 0x04 */
    int unk8;               /* 0x08 */
    int unkC;               /* 0x0c */
    int unk10;              /* 0x10 */
    int unk14;              /* 0x14 */
    Vec_826E30D0 items;     /* 0x18 */
    Handle_826E30D0 handle; /* 0x24 */
    unsigned char flag;     /* 0x28 */
} Object_826E30D0;

/* The capacity (the size policy's member) and the handle are written through their own
   pointers, as members with their own constructors are. */
static __forceinline void VecInit(Vec_826E30D0 *vec)
{
    vec->data = 0;
    vec->count = 0;
    {
        unsigned int *capacity = &vec->capacity;

        *capacity = 0;
    }
}

static __forceinline void VecResize(Vec_826E30D0 *vec, unsigned int count)
{
    unsigned int old = vec->count;

    fn_826E1F68(vec, vec, count);
    if (count > old) {
        fn_826E1E10(vec->data + old, count - old);
    }
}

Object_826E30D0 *fn_826E30D0(Object_826E30D0 *self, unsigned int count, unsigned char flag)
{
    {
        int *refs = &self->refCount;

        *refs = 1;
    }
    self->vtable = lbl_8200D0F8;
    self->unk10 = 0x400;
    self->unk8 = 0x30;
    self->unkC = 3;
    self->unk14 = 0x400;
    VecInit(&self->items);
    {
        Handle_826E30D0 *handle = &self->handle;

        handle->object = 0;
    }
    self->flag = flag;
    VecResize(&self->items, count);
    return self;
}
