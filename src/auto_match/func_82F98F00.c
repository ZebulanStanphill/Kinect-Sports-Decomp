typedef struct State_82F98F00 State_82F98F00;

typedef struct VTable_82F98F00 {
    void *padding[5];
    int (*set)(State_82F98F00 *self, void *data, unsigned int size);
} VTable_82F98F00;

struct State_82F98F00 {
    VTable_82F98F00 *vtable;
    float first;
    float second;
    float third;
    float value;
    unsigned char flag;
    unsigned char active;
};

extern double fn_82F655D8(double base, double exponent);

int fn_82F98F00(State_82F98F00 *self, int unused, void *data, unsigned int size)
{
    if (size == 0) {
        self->first = 0.5f;
        self->second = 0.0f;
        self->third = 0.5f;
        self->value = (float)fn_82F655D8(10.0, 0.0);
        self->flag = 0;
        self->active = 1;
        return 1;
    }
    return self->vtable->set(self, data, size);
}
