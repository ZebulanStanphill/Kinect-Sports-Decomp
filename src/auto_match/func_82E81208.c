typedef struct Object_82E81208 Object_82E81208;

typedef struct Vtable_82E81208 {
    void *query;
    void (*addRef)(Object_82E81208 *self);
    void (*release)(Object_82E81208 *self);
    void *reserved[9];
    int (*create)(Object_82E81208 *self, void *input, int mode, void **out);
} Vtable_82E81208;

struct Object_82E81208 {
    Vtable_82E81208 *vtable;
    char reserved[0x34];
    void *value;
};

extern Vtable_82E81208 lbl_82153AB4;
extern void *fn_82E50BE8(int size, int a, int b, int c, int d);
extern Object_82E81208 *fn_82E66120(Object_82E81208 *self, void *owner, void *first, void *second);
extern void fn_82E661E8(Object_82E81208 *self, int mode);

static __forceinline Object_82E81208 *NewObject(void *first, void *second)
{
    Object_82E81208 *object = (Object_82E81208 *)fn_82E50BE8(0x3c, 0, 0, 0, 0);
    if (object != 0) {
        fn_82E66120(object, 0, first, second);
        object->value = 0;
        object->vtable = &lbl_82153AB4;
        return object;
    }
    return 0;
}

int fn_82E81208(Object_82E81208 *self, void *input, int mode, void *first, void *second)
{
    Object_82E81208 *object;
    void *value;
    int result;
    if (input == 0) {
        result = 0x80004003;
        goto done;
    }
    if (first == 0) {
        result = 0x80004003;
        goto done;
    }
    value = 0;
    result = self->vtable->create(self, input, mode, &value);
    if (result >= 0) {
        object = NewObject(first, second);
        if (object == 0) {
            result = 0x8007000e;
        } else {
            object->vtable->addRef(object);
            object->value = value;
            fn_82E661E8(object, 0);
            object->vtable->release(object);
        }
    }
done:
    return result;
}
