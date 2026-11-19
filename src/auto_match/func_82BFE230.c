typedef void *(*AllocFn_82BFE230)(void *context, unsigned int size);
typedef void (*FreeFn_82BFE230)(void *context, void *p);

typedef struct Params_82BFE230 {
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
    AllocFn_82BFE230 alloc; /* 0x28 */
    FreeFn_82BFE230 free;   /* 0x2c */
    void *context;          /* 0x30 */
} Params_82BFE230;

typedef struct Object_82BFE230 {
    char pad00[0x4c];
    void *config; /* 0x4c */
} Object_82BFE230;

extern void *fn_82BFE0F8(void *context, unsigned int size);
extern void fn_82BFE108(void *context, void *p);
extern Object_82BFE230 *fn_82BFCDD8(unsigned int arg20, unsigned int arg24, unsigned int bit3,
                                    unsigned int bit2, void *context, unsigned int alignment,
                                    AllocFn_82BFE230 alloc, FreeFn_82BFE230 free);
extern Object_82BFE230 *fn_82BFD208(unsigned int arg20, unsigned int arg24, unsigned int bit3,
                                    unsigned int bit2, void *context, unsigned int alignment,
                                    AllocFn_82BFE230 alloc, FreeFn_82BFE230 free, unsigned int configSize);
extern void *memcpy(void *dst, const void *src, unsigned int size);

static __forceinline int IsSimple(const Params_82BFE230 *params)
{
    return (params->flags & 0x1f0) == 0 && params->option14 == 0 && params->option0c == 0 &&
           params->option18 == 0 && params->option10 == 0 && params->option04 == 0 && params->option08 == 0;
}

int fn_82BFE230(const Params_82BFE230 *params, Object_82BFE230 **out)
{
    Object_82BFE230 *object;
    AllocFn_82BFE230 alloc;
    FreeFn_82BFE230 free;
    void *context;
    unsigned int flags;

    if (out == 0)
        return 0x80070057;
    context = 0;
    *out = 0;
    if (params != 0) {
        if (params->size != 0x34)
            return 0x80070057;
        alloc = fn_82BFE0F8;
        free = fn_82BFE108;
        if (params->alloc != 0) {
            free = params->free;
            if (free == 0)
                return 0x80070057;
            context = params->context;
            alloc = params->alloc;
        }
        flags = params->flags;
        if (!IsSimple(params)) {
            object = fn_82BFD208(params->arg20, params->arg24, (flags >> 3) & 1, (flags >> 2) & 1, context,
                                 0x10, alloc, free, 0x1c);
            if (object != 0)
                memcpy(object->config, params, 0x1c);
        } else {
            object = fn_82BFCDD8(params->arg20, params->arg24, (flags >> 3) & 1, (flags >> 2) & 1, context,
                                 0x10, alloc, free);
        }
    } else {
        object = fn_82BFCDD8(0, 0, 0, 0, 0, 0x10, fn_82BFE0F8, fn_82BFE108);
    }
    if (object == 0)
        return 0x80070008;
    *out = object;
    return 0;
}
