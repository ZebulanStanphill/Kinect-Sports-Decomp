typedef struct Context_8238E898 {
    char pad[0xc];
    void **items; /* 0xc */
} Context_8238E898;

typedef struct Object_8238E898 {
    char pad[8];
    Context_8238E898 *context; /* 8 */
} Object_8238E898;

typedef struct Entry_8238E898 {
    char pad[0x2c];
    unsigned int index; /* 0x2c */
} Entry_8238E898;

typedef struct Pair_8238E898 {
    void *object;
    void *reference;
} Pair_8238E898;

extern void fn_822AF138(void *object, int mode);
extern Pair_8238E898 *fn_82365BD8(Pair_8238E898 *out, Pair_8238E898 *source);
extern void fn_82372230(Context_8238E898 *, Pair_8238E898 *, Entry_8238E898 *, Entry_8238E898 *, int, float,
                        float);
extern void fn_82359698(Context_8238E898 *context, int mode);
extern void fn_822315A0(void *reference);

void fn_8238E898(Object_8238E898 *self, Pair_8238E898 *value, Entry_8238E898 *first, Entry_8238E898 *second,
                 int index, float amount, float scale)
{
    Pair_8238E898 temporary;
    Context_8238E898 *context;
    fn_822AF138(self->context->items[second->index], 2);
    fn_822AF138(self->context->items[first->index], 3);
    context = self->context;
    fn_82372230(context, fn_82365BD8(&temporary, value), first, second, index, amount, scale);
    fn_82359698(self->context, 3);
    if (value->reference != 0) {
        fn_822315A0(value->reference);
    }
}
