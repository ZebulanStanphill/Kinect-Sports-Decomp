typedef struct Object_826A21E0 Object_826A21E0;

struct Object_826A21E0 {
    struct {
        char pad[0x24];
        unsigned char (*get)(Object_826A21E0 *, void *, void *, int);
    } *vtable;

    char pad4[0x20];
    void **values; /* 0x24 */
    int count;     /* 0x28 */
};

typedef struct Context_826A21E0 {
    char *owner;        /* 0x00 */
    unsigned char type; /* 0x04 */
} Context_826A21E0;

extern void fn_826959C8(void *);
extern void fn_82695FA0(void *, void *);
extern void fn_8269A1F0(void *, int);
extern unsigned char fn_826A18A8(void *, void *, unsigned char);
extern int fn_826A1A28(void *);
extern int fn_826C0330(Object_826A21E0 *, void *, void *, void *);

int fn_826A21E0(Object_826A21E0 *self, Context_826A21E0 *context, void *key, unsigned char *out)
{
    unsigned char *outCopy = out;
    int index = fn_826A1A28(key);
    if (index >= 0) {
        if (index < self->count && self->values[index] != 0) {
            fn_82695FA0(outCopy, self->values[index]);
            return 1;
        } else {
            fn_826959C8(outCopy);
            *outCopy = 0;
            return 1;
        }
    }
    if (fn_826A18A8(context->owner + 0x250, key, context->type > 6)) {
        if ((unsigned int)self->count > 0 || !self->vtable->get(self, context, key, 0)) {
            fn_8269A1F0(outCopy, self->count);
            return 1;
        }
    }
    return fn_826C0330(self, context, key, outCopy);
}
