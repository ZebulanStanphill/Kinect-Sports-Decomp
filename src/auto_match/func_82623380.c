long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Slot_82623380 {
    int key;  /* 0x00 */
    int size; /* 0x04 */
    char pad8[8];
    void *handle; /* 0x10 */
} Slot_82623380;

typedef struct Pool_82623380 {
    Slot_82623380 *slots[4]; /* 0x00 */
    char pad10[0x10];
    long used; /* 0x20 */
} Pool_82623380;

typedef struct Release_82623380 {
    int value; /* 0x00 */
    int key;   /* 0x04 */
    int size;  /* 0x08 */
} Release_82623380;

typedef struct ReleaseVector_82623380 {
    Release_82623380 *first; /* 0x00 */
    Release_82623380 *last;  /* 0x04 */
    Release_82623380 *end;   /* 0x08 */
} ReleaseVector_82623380;

typedef struct Owner_82623380 {
    char pad0[0xc];
    Pool_82623380 *pool;            /* 0x0c */
    ReleaseVector_82623380 pending; /* 0x10 */
} Owner_82623380;

extern void fn_82BFE128(void *handle, int value);

static __forceinline Release_82623380 *MoveReleases(Release_82623380 *src, Release_82623380 *end,
                                                    Release_82623380 *dst)
{
    for (; src != end; ++src, ++dst) {
        *dst = *src;
    }
    return dst;
}

static __forceinline void DestroyReleases(Release_82623380 *first, Release_82623380 *last)
{
    for (; first != last; ++first) {
    }
}

static __forceinline void EraseReleases(ReleaseVector_82623380 *vector, Release_82623380 *first,
                                        Release_82623380 *last)
{
    if (first != last) {
        Release_82623380 *newLast = MoveReleases(last, vector->last, first);

        DestroyReleases(newLast, vector->last);
        vector->last = newLast;
    }
}

static __forceinline void ClearReleases(ReleaseVector_82623380 *vector)
{
    EraseReleases(vector, vector->first, vector->last);
}

void fn_82623380(Owner_82623380 *self)
{
    Release_82623380 *release;

    for (release = self->pending.first; release != self->pending.last; release++) {
        Pool_82623380 *pool = self->pool;
        int i;
        int key = release->key;
        int size = release->size;
        int value = release->value;

        for (i = 0; i < 4; i++) {
            Slot_82623380 *slot = pool->slots[i];

            if (slot->size == size && slot->key == key) {
                fn_82BFE128(slot->handle, value);
                _InterlockedExchangeAdd(&pool->used, -size);
            }
        }
    }
    ClearReleases(&self->pending);
}
