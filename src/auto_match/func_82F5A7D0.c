#include "xdk/vectorintrinsics.h"

typedef struct Weights_82F5A7D0 {
    float values[20];
} Weights_82F5A7D0;

typedef struct Slot_82F5A7D0 {
    int mode; /* 0x0 */
    char pad4[0x1C];
    __vector4 positions[20]; /* 0x20 */
    int states[20];          /* 0x160 */
    char pad1B0[0x10];
} Slot_82F5A7D0;

typedef struct Object_82F5A7D0 {
    char pad0[0x30];
    Slot_82F5A7D0 slots[1]; /* 0x30 */
} Object_82F5A7D0;

typedef struct Tracker_82F5A7D0 {
    char pad0[0x10];
    Slot_82F5A7D0 current; /* 0x10 */
} Tracker_82F5A7D0;

/* For each of the 20 joints, the joint whose weight it scales (-1: none). */
extern int lbl_82167C98[20];
extern float lbl_831BAFCC;
extern unsigned char lbl_832628C2;

extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern float fn_82F535C8(__vector4 v);
extern void fn_824B4298(void *dst, const void *src, unsigned int size);

void fn_82F5A7D0(Tracker_82F5A7D0 *self, Object_82F5A7D0 *object, int index, Weights_82F5A7D0 *out)
{
    int i;
    unsigned int joint;
    float weight;
    float distance;
    int parent;

    for (i = 0; i < 20; i++) {
        out->values[i] = 1.0f;
    }
    if (self->current.mode == 2) {
        for (joint = 0; joint < 20; joint++) {
            distance = fn_82F535C8(
                fn_8306ED30(object->slots[index].positions[joint], self->current.positions[joint]));
            weight = lbl_831BAFCC / (lbl_831BAFCC + distance);
            parent = lbl_82167C98[joint];
            if (lbl_832628C2 != 0) {
                if (parent != -1) {
                    out->values[parent] = out->values[parent] * weight;
                }
            } else {
                out->values[joint] = weight;
            }
        }
    }
    fn_824B4298(&self->current, &object->slots[index], sizeof(Slot_82F5A7D0));
}
