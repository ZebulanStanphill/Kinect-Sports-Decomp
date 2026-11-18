typedef struct Object_82E254F8 {
    unsigned int magic; /* 0x0 */
    char pad4[0x5c - 0x4];
    unsigned char name[0xdc - 0x5c];   /* 0x5c */
    unsigned char extra[0x120 - 0xdc]; /* 0xdc */
} Object_82E254F8;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern int fn_82E23D00(Object_82E254F8 *self, void *source);
extern int fn_82E24770(Object_82E254F8 *self, void *arg, void *arg2);
extern int fn_82E253D0(Object_82E254F8 *self, unsigned int *config, void *extra, int extraSize, void *name,
                       int nameSize);
extern void fn_82E245F8(Object_82E254F8 *self);
void *memset(void *dst, int value, unsigned int size);

int fn_82E254F8(unsigned int *config, void *source, void *arg, Object_82E254F8 **out, void *arg2)
{
    Object_82E254F8 *object;
    void *memory;
    int hr;

    if ((config[0] == 0 && (config[1] == 0 || config[2] <= 0)) || out == 0 || source == 0) {
        return 0x80070057;
    }
    *out = 0;
    memory = fn_8265C940(0x120, 0x208c804d);
    if (memory != 0) {
        memset(memory, 0, 0x120);
        ((Object_82E254F8 *)memory)->magic = 0x476f6f64;
        object = (Object_82E254F8 *)memory;
    } else {
        object = 0;
    }
    if (object == 0) {
        hr = 0x8007000e;
    } else {
        hr = fn_82E23D00(object, source);
        if (hr < 0) {
            goto fail;
        }
        hr = fn_82E24770(object, arg, arg2);
        if (hr < 0) {
            goto fail;
        }
        hr = fn_82E253D0(object, config, object->extra, 0x1c, object->name, 0x6b);
        if (hr < 0) {
            goto fail;
        }
        *out = object;
        return 0;
    fail:
        fn_82E245F8(object);
        fn_8265C990(object, 0x208c804d);
    }
    return hr;
}
