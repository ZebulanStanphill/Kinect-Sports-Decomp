typedef struct RefCounted_828A0198 {
    void *vtable; /* 0x00 */
    long refs;    /* 0x04 */
} RefCounted_828A0198;

typedef struct Handle_828A0198 {
    void *object;             /* 0x00 */
    RefCounted_828A0198 *ref; /* 0x04 */
} Handle_828A0198;

typedef struct Owner_828A0198 {
    char pad0[0x50];
    unsigned int capacity; /* 0x50 */
    Handle_828A0198 *data; /* 0x54 */
    unsigned int size;     /* 0x58 */
} Owner_828A0198;

extern long _InterlockedIncrement(long *target);
extern void fn_828A0108(Owner_828A0198 *self, unsigned int capacity);

static __forceinline const unsigned int *Max(const unsigned int *left, const unsigned int *right)
{
    return *left < *right ? right : left;
}

static __forceinline void Construct(Handle_828A0198 *slot, const Handle_828A0198 *item)
{
    if (slot != 0) {
        slot->object = item->object;
        slot->ref = item->ref;
        if (slot->ref != 0) {
            _InterlockedIncrement(&slot->ref->refs);
        }
    }
}

void fn_828A0198(Owner_828A0198 *self, const Handle_828A0198 *item)
{
    unsigned int needed;
    unsigned int grown;

    if (self->size != self->capacity) {
        Construct(&self->data[self->size], item);
    } else {
        if (self->size + 1 > self->capacity) {
            needed = self->size + 1;
            grown = self->capacity << 2;
            fn_828A0108(self, *Max(&grown, &needed));
        }
        Construct(&self->data[self->size], item);
    }
    self->size++;
}
