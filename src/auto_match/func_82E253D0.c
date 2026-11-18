typedef struct Object_82E253D0 Object_82E253D0;

typedef struct VTable_82E253D0 {
    void *padding[5];
    int (*get)(Object_82E253D0 *self, int index, unsigned int *out);
    void *padding18;
    int (*set)(Object_82E253D0 *self, unsigned int value);
} VTable_82E253D0;

struct Object_82E253D0 {
    VTable_82E253D0 *vtable;
};

typedef struct State_82E253D0 {
    unsigned char padding[0x104];
    Object_82E253D0 *object;
    Object_82E253D0 *source;
    unsigned int unused10c;
    unsigned int config[3];
} State_82E253D0;

extern int fn_82E4B6C8(int kind, int flags, int mode, unsigned int value, Object_82E253D0 **out);
extern int fn_82E49558(Object_82E253D0 **out, unsigned int first, unsigned int second);
extern int fn_82E24948(void *self, void *a, void *b, void *c, void *d);
extern int fn_82E25140(void *self);

int fn_82E253D0(State_82E253D0 *self, unsigned int *config, void *a, void *b, void *c, void *d)
{
    unsigned int value;
    int result;
    if (self->object != 0) {
        goto invalid;
    }
    self->config[0] = config[0];
    self->config[1] = config[1];
    self->config[2] = config[2];
    if (config[0] != 0) {
        result = fn_82E4B6C8(3, 4, 0, config[0], &self->object);
        if (result < 0) {
            goto done;
        }
    } else {
        if (config[1] == 0 || config[2] == 0) {
            goto invalid;
        }
        result = fn_82E49558(&self->object, config[1], config[2]);
        if (result < 0) {
            goto done;
        }
    }
    result = fn_82E24948(self, a, b, c, d);
    if (result < 0) {
        goto done;
    }
    value = 0;
    result = fn_82E25140(self);
    if (result < 0) {
        goto done;
    }
    result = self->source->vtable->get(self->source, 0, &value);
    if (result < 0) {
        goto done;
    }
    result = self->object->vtable->set(self->object, value);
    goto done;
invalid:
    result = 0x8000ffff;
done:
    return result;
}
