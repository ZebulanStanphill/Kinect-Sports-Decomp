typedef struct Value_826C53D0 {
    int padding;
    int value; // 0x04
} Value_826C53D0;

typedef struct Interface_826C53D0 Interface_826C53D0;

typedef struct VTable_826C53D0 {
    void *padding[2];
    int (*getType)(Interface_826C53D0 *self); // 0x08
} VTable_826C53D0;

struct Interface_826C53D0 {
    VTable_826C53D0 *vtable;
};

typedef struct Object_826C53D0 {
    char padding[0x20];
    struct Object_826C53D0 *next; // 0x20
    char padding24[0x44];
    Interface_826C53D0 interface; // 0x68
    char padding6c[0x148];
    Value_826C53D0 *value; // 0x1b4
} Object_826C53D0;

extern Object_826C53D0 *fn_826BD928(Interface_826C53D0 *self);

static __forceinline int GetValue(Object_826C53D0 *self)
{
    return self->value ? self->value->value : 0;
}

float fn_826C53D0(Object_826C53D0 *self)
{
    float result = (float)GetValue(self) * 0.01f;
    Object_826C53D0 *node;

    for (node = self->next; node; node = node->next) {
        Interface_826C53D0 *interface = &node->interface;
        if (interface->vtable->getType(interface) == 2) {
            result = ((float)GetValue(fn_826BD928(interface)) * result) * 0.01f;
        }
    }
    return result;
}
