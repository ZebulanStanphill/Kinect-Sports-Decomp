typedef struct ButtonState_824D62A8 {
    char pad0[0x1c];
    unsigned char down;    /* 0x1c */
    unsigned char pressed; /* 0x1d */
} ButtonState_824D62A8;

typedef struct Button_824D62A8 {
    char pad0[0x3c];
    ButtonState_824D62A8 *state; /* 0x3c */
} Button_824D62A8;

typedef struct Gesture_824D62A8 Gesture_824D62A8;

typedef struct GestureVtbl_824D62A8 {
    void *slots[5];
    float (*GetProgress)(Gesture_824D62A8 *self); /* 0x14 */
} GestureVtbl_824D62A8;

struct Gesture_824D62A8 {
    GestureVtbl_824D62A8 *vtbl;
};

typedef struct Screen_824D62A8 {
    char pad0[0xf4];
    Gesture_824D62A8 *leftGesture;  /* 0xf4 */
    Gesture_824D62A8 *rightGesture; /* 0xf8 */
    char padfc[0x14];
    Button_824D62A8 *buttons[6]; /* 0x110 */
    char pad128[0x38];
    float time; /* 0x160 */
} Screen_824D62A8;

extern float lbl_831D40A8[0x94];

static __forceinline unsigned char ConsumePress(Button_824D62A8 *button)
{
    ButtonState_824D62A8 *state = button->state;

    if (state->pressed) {
        state->pressed = 0;
        return 1;
    }
    return state->down;
}

unsigned char fn_824D62A8(Screen_824D62A8 *self)
{
    if (self->time < lbl_831D40A8[0x71]) {
        return 0;
    }
    if (self->buttons[0] != 0 && ConsumePress(self->buttons[0]) &&
        (self->buttons[1] == 0 || ConsumePress(self->buttons[1])) &&
        (self->buttons[2] == 0 || ConsumePress(self->buttons[2])) &&
        (self->buttons[3] == 0 || ConsumePress(self->buttons[3])) &&
        (self->buttons[4] == 0 || ConsumePress(self->buttons[4])) &&
        (self->buttons[5] == 0 || ConsumePress(self->buttons[5]))) {
        return 1;
    }
    if (self->leftGesture != 0 && self->leftGesture->vtbl->GetProgress(self->leftGesture) > 0.99f) {
        return 1;
    }
    if (self->rightGesture != 0 && self->rightGesture->vtbl->GetProgress(self->rightGesture) > 0.99f) {
        return 1;
    }
    return 0;
}
