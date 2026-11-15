typedef struct Object_82FB81B8 Object_82FB81B8;

typedef struct Vtable_82FB81B8 {
    void *unused;                           /* 0x00 */
    void (*release)(Object_82FB81B8 *self); /* 0x04 */
} Vtable_82FB81B8;

struct Object_82FB81B8 {
    Vtable_82FB81B8 *vtable; /* 0x00 */
};

typedef struct Type_82FB81B8 {
    char pad[0x1c];
    int kind; /* 0x1c */
} Type_82FB81B8;

typedef struct Value_82FB81B8 {
    Type_82FB81B8 *type;         /* 0x00 */
    unsigned short length;       /* 0x04 */
    unsigned char owned : 1;     /* 0x06 */
    unsigned char reference : 1; /* 0x06 */
    unsigned char flags : 6;     /* 0x06 */
    unsigned char extra;         /* 0x07 */
    Object_82FB81B8 *object;     /* 0x08 */
} Value_82FB81B8;

extern int fn_82FB7AC0(Value_82FB81B8 *value, Type_82FB81B8 *type);
extern Value_82FB81B8 *fn_82FB9630(void *container);

unsigned int fn_82FB81B8(unsigned char *self, Type_82FB81B8 *type)
{
    Value_82FB81B8 value;
    value.owned = 0;
    value.length = 0;
    value.reference = 0;
    value.object = 0;
    if (fn_82FB7AC0(&value, type) == 1) {
        Value_82FB81B8 *out = fn_82FB9630(self + 4);
        if (out) {
            *out = value;
            return 1;
        }
    }
    if (value.type->kind == 0 || value.type->kind == 2) {
        if (value.object) {
            value.object->vtable->release(value.object);
        }
    }
    return 2;
}
