typedef struct Movie_8273DDA8 {
    char pad0[0x10];
    char root; /* 0x10 */
    char pad11[0x254 - 0x11];
    char name; /* 0x254 */
    char pad255[0x2a0 - 0x255];
    void *heap; /* 0x2a0 */
} Movie_8273DDA8;

typedef struct Owner_8273DDA8 {
    char pad0[0x78];
    Movie_8273DDA8 *movie; /* 0x78 */
} Owner_8273DDA8;

typedef struct RefCounted_8273DDA8 {
    char pad0[8];
    int refCount; /* 0x8 */
} RefCounted_8273DDA8;

typedef struct Handler_8273DDA8 Handler_8273DDA8;

typedef struct HandlerVtbl_8273DDA8 {
    void *slots[3];
    void (*invoke)(Handler_8273DDA8 *self, Owner_8273DDA8 *owner, RefCounted_8273DDA8 **name, void *value,
                   unsigned char *handled); /* 0xc */
} HandlerVtbl_8273DDA8;

struct Handler_8273DDA8 {
    HandlerVtbl_8273DDA8 *vt;
};

typedef struct Entry_8273DDA8 {
    char pad0[0x10];
    Handler_8273DDA8 handler; /* 0x10 */
} Entry_8273DDA8;

typedef struct Array_8273DDA8 {
    Entry_8273DDA8 **data; /* 0x0 */
    int size;              /* 0x4 */
} Array_8273DDA8;

typedef struct Self_8273DDA8 {
    char pad0[8];
    Owner_8273DDA8 *owner; /* 0x8 */
    char padC[0x10 - 0xc];
    Array_8273DDA8 stack; /* 0x10 */
    char pad18[0x1c - 0x18];
    unsigned char started; /* 0x1c */
} Self_8273DDA8;

typedef struct Value_8273DDA8 {
    unsigned char d[16];
} Value_8273DDA8;

extern void *fn_826B32D0(Owner_8273DDA8 *owner, void *heap, void *root, int flags, int index);
extern void *fn_826961B0(Value_8273DDA8 *value, void *object);
extern void fn_82696330(Value_8273DDA8 *value);
extern void fn_826A2F80(Entry_8273DDA8 *entry, void *value);
extern void fn_8269A190(RefCounted_8273DDA8 **out, void *name, void *arg);
extern void fn_826944C8(RefCounted_8273DDA8 *object);
extern void fn_8273D588(Array_8273DDA8 *array, void **item);
extern void fn_826824B0(void *object);

static __forceinline Entry_8273DDA8 *Top(Array_8273DDA8 *array)
{
    return array->data[array->size - 1];
}

static __forceinline void *GetHeap(Owner_8273DDA8 *owner)
{
    return owner->movie->heap;
}

void fn_8273DDA8(Self_8273DDA8 *self, void *arg)
{
    Array_8273DDA8 *stack = &self->stack;
    Entry_8273DDA8 *entry = Top(stack);
    void *object = fn_826B32D0(self->owner, GetHeap(self->owner), &self->owner->movie->root, 0, -1);
    Value_8273DDA8 value;
    void *pushed;

    if (self->started) {
        fn_826A2F80(entry, fn_826961B0(&value, object));
    } else {
        unsigned char handled = 0;
        RefCounted_8273DDA8 *name;
        RefCounted_8273DDA8 *held;

        fn_8269A190(&name, &self->owner->movie->name, arg);
        entry->handler.vt->invoke(&entry->handler, self->owner, &name, fn_826961B0(&value, object), &handled);
        held = name;
        if (--held->refCount == 0) {
            fn_826944C8(held);
        }
    }
    fn_82696330(&value);
    pushed = object;
    self->started = 1;
    fn_8273D588(stack, &pushed);
    if (object != 0) {
        fn_826824B0(object);
    }
}
