typedef struct Value_826A3A28 {
    unsigned char type;
} Value_826A3A28;

typedef struct Array_826A3A28 {
    char pad[0x24];
    Value_826A3A28 **items;
    int count;
} Array_826A3A28;

typedef struct Runtime_826A3A28 {
    char pad[0x250];
    char lengthKey[0x38];
    void *heap;
} Runtime_826A3A28;

typedef struct Context_826A3A28 {
    char pad[0x78];
    Runtime_826A3A28 *runtime;
    unsigned char version;
} Context_826A3A28;

extern void *fn_8267B890(void *heap, unsigned int bytes, const int *tag);
extern void fn_82695FA0(Value_826A3A28 *dst, const Value_826A3A28 *src);
extern double fn_826972E0(const Value_826A3A28 *value, void *context);
extern unsigned char fn_826A18A8(const void *key, const void *name, unsigned char sensitive);
extern int fn_826A1A28(const void *name);
extern void fn_826A2CB0(void *owner, int count);
extern unsigned char fn_826C1BA0(Array_826A3A28 *self, Context_826A3A28 *ctx, const void *name,
                                 const Value_826A3A28 *value, void *attributes);

unsigned char fn_826A3A28(Array_826A3A28 *self, Context_826A3A28 *ctx, const void *name,
                          const Value_826A3A28 *value, void *attributes)
{
    if (fn_826A18A8(ctx->runtime->lengthKey, name, ctx->version > 6)) {
        int count = (int)fn_826972E0(value, 0);
        fn_826A2CB0((char *)self - 0x10, count & (((unsigned int)count >> 31) - 1));
        return fn_826C1BA0(self, ctx, name, value, attributes);
    } else {
        int index = fn_826A1A28(name);
        if (index >= 0) {
            int offset;
            if (index >= self->count) {
                fn_826A2CB0((char *)self - 0x10, index + 1);
            }
            offset = index * sizeof(*self->items);
            if (*(Value_826A3A28 **)(offset + (char *)self->items) == 0) {
                Value_826A3A28 *storage = fn_8267B890(ctx->runtime->heap, 0x10, 0);
                Value_826A3A28 *item;
                if (storage != 0) {
                    item = storage;
                    storage->type = 0;
                } else {
                    item = 0;
                }
                *(Value_826A3A28 **)(offset + (char *)self->items) = item;
            }
            fn_82695FA0(*(Value_826A3A28 **)(offset + (char *)self->items), value);
            return 1;
        }
        return fn_826C1BA0(self, ctx, name, value, attributes);
    }
}
