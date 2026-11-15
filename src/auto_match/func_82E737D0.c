#include <string.h>
typedef struct Object_82E737D0 Object_82E737D0;

typedef struct Vtable_82E737D0 {
    void *unused[2];                        /* 0x00 */
    void (*release)(Object_82E737D0 *self); /* 0x08 */
    void *unusedC;                          /* 0x0c */
    int (*getSize)(Object_82E737D0 *self, unsigned short id, unsigned char mode, Object_82E737D0 *object,
                   unsigned int *size);
    void *unused14; /* 0x14 */
    int (*configure)(Object_82E737D0 *self, void *format, Object_82E737D0 *object, int mode);
} Vtable_82E737D0;

struct Object_82E737D0 {
    Vtable_82E737D0 *vtable; /* 0x00 */
};

typedef struct State_82E737D0 {
    char pad[0x20];
    unsigned short id;  /* 0x20 */
    unsigned char mode; /* 0x22 */
    char pad23[9];
    int active; /* 0x2c */
    char pad30[4];
    Object_82E737D0 *object; /* 0x34 */
    unsigned int size;       /* 0x38 */
} State_82E737D0;

extern int fn_82E734C0(State_82E737D0 *self, void *format);

int fn_82E737D0(State_82E737D0 *self, Object_82E737D0 *object)
{
    unsigned int size;
    unsigned char format[0x125];
    int result;
    unsigned int required;
    if (!object) {
        return 0x80070057;
    }
    size = 0;
    result = object->vtable->getSize(object, self->id, self->mode, self->object, &size);
    if (result >= 0) {
        required = self->size;
        if (size < required) {
            result = 0xc00d36b5;
        } else {
            memset(format, 0, sizeof(format));
            result = fn_82E734C0(self, format);
            if (result >= 0) {
                *(unsigned int *)(format + 27) = required;
                *(unsigned int *)(format + 11) = required;
                *(unsigned int *)(format + 7) = 0;
                result = object->vtable->configure(object, format, self->object, 1);
                if (result >= 0) {
                    self->active = 0;
                    if (self->object) {
                        self->object->vtable->release(self->object);
                        self->object = 0;
                    }
                }
            }
        }
    }
    return result;
}
