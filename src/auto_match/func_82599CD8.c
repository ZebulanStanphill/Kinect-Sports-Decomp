
typedef struct Cached_82599CD8 {
    int enabled, pad;
    void *cached;
} Cached_82599CD8;

typedef struct State_82599CD8 {
    char pad[0x14];
    Cached_82599CD8 *cache;
    char pad18[0x144 - 0x18];
    int enabled;
} State_82599CD8;

typedef struct Global_82599CD8 {
    int *pool;
    char pad[8];
    int lock;
} Global_82599CD8;

extern Global_82599CD8 lbl_83296D40;
extern void fn_82549610(int *, int *);
extern void fn_82549660(unsigned, int);
extern void fn_82A1BB18(void);
extern void fn_8259C738(int);
extern void *fn_825B49E8(int *, unsigned);
extern void *fn_82549798(unsigned, void *, int, int);

static __forceinline void *Acquire(Cached_82599CD8 *cache, unsigned size, int *token)
{
    void *cached = cache->cached;
    if (cached) {
        cache->cached = 0;
        return cached;
    } else {
        void *allocated;
        fn_82549610(token, &lbl_83296D40.lock);
        if (!lbl_83296D40.pool)
            fn_82549660(0x200000, 1);
        allocated = fn_825B49E8(lbl_83296D40.pool, size);
        fn_82A1BB18();
        fn_8259C738(*token);
        return allocated;
    }
}

void *fn_82599CD8(State_82599CD8 *self, unsigned size, void *arg)
{
    Cached_82599CD8 *cache;
    unsigned max;
    int token;
    void *result;
    if (self->enabled && (cache = self->cache) != 0 && cache->enabled) {
        fn_82549610(&token, &lbl_83296D40.lock);
        if (!lbl_83296D40.pool)
            fn_82549660(0x200000, 1);
        max = 0x1000u << (*lbl_83296D40.pool - 1);
        fn_82A1BB18();
        fn_8259C738(token);
        if (size <= max) {
            result = Acquire(cache, size, &token);
            if (result)
                goto done;
        }
    }
    result = fn_82549798(size, arg, 0x404, 0);
done:
    return result;
}
