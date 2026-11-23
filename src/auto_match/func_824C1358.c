typedef struct Container_824C1358 {
    unsigned int storage[16];
} Container_824C1358;

typedef struct Layer_824C1358 {
    int count;
    unsigned char dirty;
    int mode;
    Container_824C1358 container;
    unsigned char reserved4C;
    unsigned char reserved4D;
    int handle;
    unsigned char reserved54;
    int start;
    int end;
    int flags;
} Layer_824C1358;

typedef struct State_824C1358 {
    Container_824C1358 *container;
    Layer_824C1358 *layer;
    void *owner;
    int mode;
    int active;
    int format;
    int flags;
    int count;
    float width;
    float height;
    float x;
    float y;
} State_824C1358;

extern void *fn_8265C9E0(unsigned int size);
extern Container_824C1358 *fn_8224F398(Container_824C1358 *container);

State_824C1358 *fn_824C1358(State_824C1358 *self, void *const *owner)
{
    Container_824C1358 *container = fn_8265C9E0(sizeof(Container_824C1358));
    Layer_824C1358 *layer;
    Layer_824C1358 *result;
    float height;
    float zero;

    self->container = container != 0 ? fn_8224F398(container) : 0;
    layer = fn_8265C9E0(sizeof(Layer_824C1358));
    if (layer != 0) {
        fn_8224F398(&layer->container);
        layer->start = 0;
        layer->end = 0;
        result = layer;
        layer->count = 0;
        layer->dirty = 0;
        layer->mode = 1;
        layer->reserved4C = 0;
        layer->reserved4D = 0;
        layer->handle = 0;
        layer->reserved54 = 0;
        layer->flags = 0;
    } else {
        result = 0;
    }

    self->layer = result;
    self->owner = *owner;
    self->width = 4.0f;
    height = 8.0f;
    self->active = 1;
    self->mode = 2;
    self->height = height;
    self->format = 2;
    zero = 0.0f;
    self->flags = 0;
    self->x = zero;
    self->count = 0;
    self->y = zero;
    return self;
}
