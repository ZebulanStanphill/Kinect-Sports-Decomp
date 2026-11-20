typedef void *(*AllocFn_82BFE638)(void *context, unsigned int size);
typedef void (*FreeFn_82BFE638)(void *context, void *p);

typedef struct Params_82BFE638 {
    unsigned int flags;     /* 0x00 */
    unsigned int option04;  /* 0x04 */
    unsigned int option08;  /* 0x08 */
    unsigned int option0c;  /* 0x0c */
    unsigned int option10;  /* 0x10 */
    unsigned int option14;  /* 0x14 */
    unsigned int option18;  /* 0x18 */
    unsigned int size;      /* 0x1c */
    unsigned int arg20;     /* 0x20 */
    unsigned int arg24;     /* 0x24 */
    AllocFn_82BFE638 alloc; /* 0x28 */
    FreeFn_82BFE638 free;   /* 0x2c */
    void *context;          /* 0x30 */
} Params_82BFE638;

typedef struct Allocator_82BFE638 {
    unsigned int alignment; /* 0x0 */
    void *context;          /* 0x4 */
    AllocFn_82BFE638 alloc; /* 0x8 */
    FreeFn_82BFE638 free;   /* 0xc */
} Allocator_82BFE638;

typedef struct Object_82BFE638 {
    char pad00[0x44];
    void *config; /* 0x44 */
} Object_82BFE638;

extern void *fn_82BFE0F8(void *context, unsigned int size);
extern void fn_82BFE108(void *context, void *p);
extern Object_82BFE638 *fn_82BFBDA8(unsigned int arg20, unsigned int arg24, unsigned int bit3,
                                    unsigned int bit2, Allocator_82BFE638 *allocator,
                                    unsigned int configSize);
extern void *memcpy(void *dst, const void *src, unsigned int size);

static __forceinline int IsSimple(const Params_82BFE638 *params)
{
    return (params->flags & 0x1f0) == 0 && params->option14 == 0 && params->option0c == 0 &&
           params->option18 == 0 && params->option10 == 0 && params->option04 == 0 && params->option08 == 0;
}

static __forceinline Object_82BFE638 *Create(unsigned int arg20, unsigned int arg24, unsigned int bit3,
                                             unsigned int bit2, void *context, unsigned int alignment,
                                             AllocFn_82BFE638 alloc, FreeFn_82BFE638 free,
                                             unsigned int configSize)
{
    Allocator_82BFE638 allocator;

    if (alignment == 0) {
        alignment = 1;
    }
    allocator.context = context;
    allocator.alignment = alignment;
    allocator.alloc = alloc;
    allocator.free = free;
    if (alloc == 0 || free == 0 || (alignment & (alignment - 1)) != 0) {
        return 0;
    }
    return fn_82BFBDA8(arg20, arg24, bit3, bit2, &allocator, configSize);
}

int fn_82BFE638(const Params_82BFE638 *params, Object_82BFE638 **out)
{
    Object_82BFE638 *object;
    AllocFn_82BFE638 alloc;
    FreeFn_82BFE638 free;
    void *context;
    unsigned int flags;
    unsigned int bit3;
    unsigned int bit2;

    if (out == 0) {
        return 0x80070057;
    }
    context = 0;
    *out = 0;
    if (params != 0) {
        if (params->size != 0x34) {
            return 0x80070057;
        }
        alloc = fn_82BFE0F8;
        free = fn_82BFE108;
        if (params->alloc != 0) {
            free = params->free;
            if (free == 0) {
                return 0x80070057;
            }
            context = params->context;
            alloc = params->alloc;
        }
        flags = params->flags;
        if (!IsSimple(params)) {
            bit2 = (flags >> 2) & 1;
            bit3 = (flags >> 3) & 1;
            object = Create(params->arg20, params->arg24, bit3, bit2, context, 0x10, alloc, free, 0x1c);
            if (object != 0) {
                memcpy(object->config, params, 0x1c);
            }
        } else {
            bit2 = (flags >> 2) & 1;
            bit3 = (flags >> 3) & 1;
            object = Create(params->arg20, params->arg24, bit3, bit2, context, 0x10, alloc, free, 0);
        }
    } else {
        object = Create(0, 0, 0, 0, 0, 0x10, fn_82BFE0F8, fn_82BFE108, 0);
    }
    if (object == 0) {
        return 0x80070008;
    }
    *out = object;
    return 0;
}
