extern long _InterlockedExchangeAdd(volatile long *value, long amount);

typedef struct Text_8269F1B8 {
    unsigned int length; /* 0x00 */
    long refs;           /* 0x04 */
    char text[1];        /* 0x08 */
} Text_8269F1B8;

typedef struct Object_8269F1B8 {
    const char *name; /* 0x00 */
    int unk4;         /* 0x04 */
    int refs;         /* 0x08 */
} Object_8269F1B8;

typedef struct Context_8269F1B8 {
    char pad00[0x18];
    Object_8269F1B8 *root; /* 0x18 */
} Context_8269F1B8;

typedef struct Self_8269F1B8 {
    int one;                  /* 0x00 */
    int value;                /* 0x04 */
    Object_8269F1B8 *object;  /* 0x08 */
    Object_8269F1B8 *target;  /* 0x0c */
    Object_8269F1B8 *object2; /* 0x10 */
} Self_8269F1B8;

extern void fn_8268B330(unsigned int *text);
extern void fn_8269E088(void *prefix, unsigned int *text);
extern void fn_8268B610(unsigned int *text, const char *append, int length);
extern Object_8269F1B8 **fn_8269A190(Object_8269F1B8 **out, Context_8269F1B8 *context, unsigned int *text);
extern void fn_826944C8(Object_8269F1B8 *object);
extern void fn_8267BE38(void *data);

Self_8269F1B8 *fn_8269F1B8(Self_8269F1B8 *self, Object_8269F1B8 **source, void *prefix, int value)
{
    unsigned int text;
    Object_8269F1B8 *found;
    Object_8269F1B8 *target;
    Object_8269F1B8 *released;
    Text_8269F1B8 *data;

    self->object = *source;
    self->object->refs++;
    self->target = (*(Context_8269F1B8 **)((unsigned int)*source & ~0x3ffu))->root;
    self->target->refs++;
    self->object2 = *source;
    self->object2->refs++;
    self->one = 1;
    self->value = value;
    fn_8268B330(&text);
    if (prefix != 0) {
        fn_8269E088(prefix, &text);
        fn_8268B610(&text, ".", -1);
    }
    fn_8268B610(&text, self->object->name, -1);
    target = *fn_8269A190(&found, *(Context_8269F1B8 **)((unsigned int)*source & ~0x3ffu), &text);
    target->refs++;
    released = self->target;
    if (--released->refs == 0) {
        fn_826944C8(released);
    }
    self->target = target;
    released = found;
    if (--released->refs == 0) {
        fn_826944C8(released);
    }
    data = (Text_8269F1B8 *)(text & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
    return self;
}
