typedef struct Movie_8273DC88 {
    char pad0[0xc];
    char root; /* 0xc */
    char padD[0x254 - 0xd];
    char name; /* 0x254 */
    char pad255[0x2a0 - 0x255];
    void *heap; /* 0x2a0 */
} Movie_8273DC88;

typedef struct Owner_8273DC88 {
    char pad0[0x78];
    Movie_8273DC88 *movie; /* 0x78 */
} Owner_8273DC88;

typedef struct RefCounted_8273DC88 {
    char pad0[8];
    int refCount; /* 0x8 */
} RefCounted_8273DC88;

typedef struct Handler_8273DC88 Handler_8273DC88;

typedef struct HandlerVtbl_8273DC88 {
    void *slots[3];
    void (*invoke)(Handler_8273DC88 *self, Owner_8273DC88 *owner, RefCounted_8273DC88 **name, void *value,
                   unsigned char *handled); /* 0xc */
} HandlerVtbl_8273DC88;

struct Handler_8273DC88 {
    HandlerVtbl_8273DC88 *vt;
};

typedef struct Entry_8273DC88 {
    char pad0[0x10];
    Handler_8273DC88 handler; /* 0x10 */
} Entry_8273DC88;

typedef struct Array_8273DC88 {
    Entry_8273DC88 **data; /* 0x0 */
    int size;              /* 0x4 */
} Array_8273DC88;

typedef struct Self_8273DC88 {
    char pad0[8];
    Owner_8273DC88 *owner; /* 0x8 */
    char padC[0x10 - 0xc];
    Array_8273DC88 stack; /* 0x10 */
    char pad18[0x1c - 0x18];
    unsigned char started; /* 0x1c */
} Self_8273DC88;

typedef struct Value_8273DC88 {
    unsigned char d[16];
} Value_8273DC88;

extern void *fn_826B32D0(Owner_8273DC88 *owner, void *heap, void *root, int flags, int index);
extern void *fn_826961B0(Value_8273DC88 *value, void *object);
extern void fn_82696330(Value_8273DC88 *value);
extern void fn_826A2F80(Entry_8273DC88 *entry, void *value);
extern void fn_8269A190(RefCounted_8273DC88 **out, void *name, void *arg);
extern void fn_826944C8(RefCounted_8273DC88 *object);
extern void fn_8273D588(Array_8273DC88 *array, void **item);
extern void fn_826824B0(void *object);

static __forceinline Entry_8273DC88 *Top(Array_8273DC88 *array)
{
    return array->data[array->size - 1];
}

static __forceinline void *GetHeap(Owner_8273DC88 *owner)
{
    return owner->movie->heap;
}

void fn_8273DC88(Self_8273DC88 *self, void *arg)
{
    Array_8273DC88 *stack = &self->stack;
    Entry_8273DC88 *entry = Top(stack);
    void *object = fn_826B32D0(self->owner, GetHeap(self->owner), &self->owner->movie->root, 0, -1);
    Value_8273DC88 value;
    void *pushed;

    if (self->started) {
        fn_826A2F80(entry, fn_826961B0(&value, object));
    } else {
        unsigned char handled = 0;
        RefCounted_8273DC88 *name;
        RefCounted_8273DC88 *held;

        fn_8269A190(&name, &self->owner->movie->name, arg);
        entry->handler.vt->invoke(&entry->handler, self->owner, &name, fn_826961B0(&value, object), &handled);
        held = name;
        if (--held->refCount == 0) {
            fn_826944C8(held);
        }
    }
    fn_82696330(&value);
    pushed = object;
    self->started = 0;
    fn_8273D588(stack, &pushed);
    if (object != 0) {
        fn_826824B0(object);
    }
}
