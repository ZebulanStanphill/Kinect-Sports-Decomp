typedef struct Object_83009630 Object_83009630;

typedef struct Handle_83009630 {
    Object_83009630 *object;
    unsigned int kind : 2;
    unsigned int index : 30;
} Handle_83009630;

typedef struct Vtable_83009630 {
    void *reserved[17];
    void (*notify)(Object_83009630 *, float, Handle_83009630 *, int);
} Vtable_83009630;

typedef struct Parent_83009630 {
    char reserved[0x3c];
    unsigned char value;
} Parent_83009630;

struct Object_83009630 {
    Vtable_83009630 *vtable;
    char reserved4[0x20];
    Parent_83009630 *parent; /* 0x24 */
    char reserved28[0x78];
    unsigned char flags; /* 0xa0 */
};

void fn_83009630(Object_83009630 *self)
{
    Handle_83009630 handle;
    unsigned char value = 255;
    handle.kind = 2;
    handle.object = self;
    self->flags &= ~8;
    if (self->parent != 0) {
        value = self->parent->value;
    }
    self->vtable->notify(self, (float)value, &handle, 1);
}
