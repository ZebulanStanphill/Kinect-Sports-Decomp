extern long _InterlockedExchangeAdd(volatile long *value, long amount);

typedef struct Text_8269F310 {
    unsigned int length; /* 0x00 */
    long refs;           /* 0x04 */
    char text[1];        /* 0x08 */
} Text_8269F310;

typedef struct Object_8269F310 {
    const char *name; /* 0x00 */
    int unknown4;     /* 0x04 */
    int refs;         /* 0x08 */
} Object_8269F310;

typedef struct Context_8269F310 {
    int unknown0;              /* 0x00 */
    int unknown4;              /* 0x04 */
    Object_8269F310 *scope;    /* 0x08 */
    Object_8269F310 *resolved; /* 0x0c */
} Context_8269F310;

extern void fn_826944C8(Object_8269F310 *object);
extern void fn_8267BE38(void *data);
extern void fn_8268B330(unsigned int *text);
extern void fn_8269E088(void *prefix, unsigned int *text);
extern void fn_8268B610(unsigned int *text, const char *append, int length);
extern Object_8269F310 **fn_8269A190(Object_8269F310 **out, unsigned int owner, unsigned int *text);

void fn_8269F310(Context_8269F310 *self, Object_8269F310 **scope, void *prefix)
{
    unsigned int text;
    Object_8269F310 *result;
    Object_8269F310 *object;
    Object_8269F310 *previous;
    Text_8269F310 *data;

    object = *scope;
    object->refs++;
    previous = self->scope;
    if (--previous->refs == 0) {
        fn_826944C8(previous);
    }
    self->scope = object;
    fn_8268B330(&text);
    if (prefix != 0) {
        fn_8269E088(prefix, &text);
        fn_8268B610(&text, ".", -1);
    }
    fn_8268B610(&text, self->scope->name, -1);
    object = *fn_8269A190(&result, *(unsigned int *)((unsigned int)*scope & ~0x3ffu), &text);
    object->refs++;
    previous = self->resolved;
    if (--previous->refs == 0) {
        fn_826944C8(previous);
    }
    self->resolved = object;
    previous = result;
    if (--previous->refs == 0) {
        fn_826944C8(previous);
    }
    data = (Text_8269F310 *)(text & ~3u);
    if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
        fn_8267BE38(data);
    }
}
