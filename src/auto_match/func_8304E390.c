typedef __declspec(align(16)) struct State_8304E390 {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
} State_8304E390;
typedef struct Device_8304E390 Device_8304E390;

typedef struct Vtable_8304E390 {
    void *reserved[3];
    void (*GetState)(Device_8304E390 *self, State_8304E390 *state);
    void (*SetState)(Device_8304E390 *self, State_8304E390 *state);
    void *reserved14[7];
    void (*Reset)(Device_8304E390 *self);
} Vtable_8304E390;

struct Device_8304E390 {
    Vtable_8304E390 *vtable;
};

typedef struct Object_8304E390 {
    char padding[0x1c];
    unsigned short type;
    char padding1e[0xa];
    Device_8304E390 *device;
    char padding2c[8];
    int first;
    int second;
    int third;
    unsigned char active;
    char padding41[0xb];
    unsigned int stateFirst;
    unsigned int stateSecond;
} Object_8304E390;

extern int fn_8304DD90(Object_8304E390 *self, unsigned int *out);
extern int fn_8304DE60(Object_8304E390 *self, unsigned int value);

int fn_8304E390(Object_8304E390 *self)
{
    unsigned int value;
    State_8304E390 state;
    int result = fn_8304DD90(self, &value);
    if (result == 1) {
        if (fn_8304DE60(self, value) == 1) {
            self->device->vtable->GetState(self->device, &state);
            if (self->type != 0 && self->type <= 1) {
                state.first = 0;
                state.second = 0;
            } else {
                state.first = self->stateFirst;
                state.second = self->stateSecond;
            }
            self->device->vtable->SetState(self->device, &state);
            self->device->vtable->Reset(self->device);
            self->third = 0;
            self->first = 0;
            self->second = 0;
            self->active = 0;
        }
        result = 1;
    }
    return result;
}
