
extern void fn_8232C528(void *self, int state);

typedef struct Controller_8232DBE0 Controller_8232DBE0;

typedef struct ControllerVtable_8232DBE0 {
    void *slots[5];
    void (*change)(Controller_8232DBE0 *self, int oldState, int state);
} ControllerVtable_8232DBE0;

struct Controller_8232DBE0 {
    ControllerVtable_8232DBE0 *vtable;
    int unused;
    int state;
};

void fn_8232DBE0(char *self, float delta)
{
    if (*(int *)(*(char **)(self + 8) + 0x7a4) == 0) {
        fn_8232C528(*(void **)(self + 0xc), 2);
    }
    if (*(int *)(self + 0x64) != 0 && *(unsigned int *)(self + 0x68) != 0) {
        float time = *(float *)(self + 0x68) - delta;
        *(float *)(self + 0x68) = -time >= 0.0f ? 0.0f : time;
        if (*(float *)(self + 0x68) == 0.0f) {
            Controller_8232DBE0 *controller = *(Controller_8232DBE0 **)(self + 0xc);
            int oldState = controller->state;
            controller->state = 2;
            controller->vtable->change(controller, oldState, 2);
        }
    }
}
