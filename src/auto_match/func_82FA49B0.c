typedef struct State_82FA49B0 State_82FA49B0;

typedef struct VTable_82FA49B0 {
    void *padding[5];
    int (*set)(State_82FA49B0 *self, void *data, unsigned int size);
} VTable_82FA49B0;

struct State_82FA49B0 {
    VTable_82FA49B0 *vtable;
    float first;
    float second;
    int count;
    float value;
    float otherValue; /* 0x14 */
    float zero;       /* 0x18 */
    int active;       /* 0x1c */
    int flags;        /* 0x20 */
};

extern double fn_82F655D8(double base, double exponent);

int fn_82FA49B0(State_82FA49B0 *self, int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->count = 8;
        self->first = 4.0f;
        self->second = 2.0f;
        self->value = (float)fn_82F655D8(10.0, -0.15f);
        self->otherValue = (float)fn_82F655D8(10.0, -0.5);
        self->active = 1;
        self->flags = 0;
        self->zero = 0.0f;
        return 1;
    }
    return self->vtable->set(self, data, size);
}
