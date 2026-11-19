typedef struct Weights_82F5A730 {
    float values[20];
} Weights_82F5A730;

typedef struct Slot_82F5A730 {
    char padding[0x160];
    int states[20]; // 0x160
    char padding1b0[0x10];
} Slot_82F5A730;

typedef struct Object_82F5A730 {
    char padding[0x30];
    Slot_82F5A730 slots[1]; // 0x30
} Object_82F5A730;

void fn_82F5A730(void *self, Object_82F5A730 *object, int index, Weights_82F5A730 *out)
{
    Weights_82F5A730 weights;
    int i;
    Slot_82F5A730 *slot;

    slot = &object->slots[index];
    for (i = 0; i < 20; i++) {
        int state = slot->states[i];
        if (state == 2) {
            weights.values[i] = 1.0f;
        } else if (state == 1) {
            weights.values[i] = 0.5f;
        } else if (state == 0) {
            weights.values[i] = 0.0f;
        }
        out->values[i] = 1.0f;
    }
    for (i = 0; i < 20; i++) {
        out->values[i] = weights.values[i];
    }
}
