#include <math.h>

extern float lbl_83263160;
extern float lbl_83263164;
extern float lbl_83263178;

typedef struct Gesture_82F5CD68 {
    int unk0[4];
    float value;        /* 0x10 */
    unsigned int state; /* 0x14 */
    int nextState;      /* 0x18 */
    int unk1c[6];
    int frames; /* 0x34 */
} Gesture_82F5CD68;

int fn_82F5CD68(Gesture_82F5CD68 *gesture)
{
    int minFrames = (int)lbl_83263164;
    int strongFrames = minFrames + 1;
    int changed = 0;
    int next;

    switch (gesture->state) {
    case 0:
    case 1:
        if ((gesture->frames >= strongFrames && fabsf(gesture->value) > lbl_83263178) ||
            (gesture->frames >= minFrames && fabsf(gesture->value) > lbl_83263160)) {
            next = gesture->nextState;
            changed = 1;
        }
        break;
    case 2:
        next = gesture->nextState;
        if ((next == 3 && gesture->frames >= strongFrames && gesture->value > lbl_83263178) ||
            (gesture->frames >= minFrames && gesture->value > lbl_83263160)) {
            changed = 1;
        }
        break;
    case 3:
        next = gesture->nextState;
        if ((next == 2 && gesture->frames >= strongFrames && gesture->value < -lbl_83263178) ||
            (gesture->frames >= minFrames && gesture->value < -lbl_83263160)) {
            changed = 1;
        }
        break;
    }
    if (changed) {
        gesture->state = next;
    }
    return changed;
}
