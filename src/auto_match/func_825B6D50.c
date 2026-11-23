typedef struct Vec2_825B6D50 {
    float x;
    float y;
} Vec2_825B6D50;

typedef struct Triggers_825B6D50 {
    float left;
    float right;
} Triggers_825B6D50;

typedef struct Input_825B6D50 {
    unsigned int pressed;       /* 0x00 */
    unsigned int released;      /* 0x04 */
    unsigned int held;          /* 0x08 */
    unsigned int buttons;       /* 0x0c */
    Vec2_825B6D50 sticks[2];    /* 0x10 */
    Triggers_825B6D50 triggers; /* 0x20 */
} Input_825B6D50;

typedef struct History_825B6D50 {
    int index;                /* 0x00 */
    Input_825B6D50 inputs[1]; /* 0x04 */
} History_825B6D50;

typedef struct Pad_825B6D50 {
    char pad0[0x34];
    History_825B6D50 history; /* 0x34 */
} Pad_825B6D50;

typedef struct Gamepad_825B6D50 {
    char pad0[0x4];
    unsigned short buttons;     /* 0x04 */
    unsigned char leftTrigger;  /* 0x06 */
    unsigned char rightTrigger; /* 0x07 */
    short thumbLX;              /* 0x08 */
    short thumbLY;              /* 0x0a */
    short thumbRX;              /* 0x0c */
    short thumbRY;              /* 0x0e */
} Gamepad_825B6D50;

void *memset(void *, int, unsigned int);
extern void fn_825B6EE0(Pad_825B6D50 *self, Input_825B6D50 *input, float x, float y, int stick);
extern void fn_8260BA88(History_825B6D50 *history, Input_825B6D50 *input);

void fn_825B6D50(Pad_825B6D50 *self, Gamepad_825B6D50 *gamepad)
{
    Input_825B6D50 input;
    unsigned int previous;
    unsigned int buttons;
    int i;
    History_825B6D50 *history;

    history = &self->history;
    previous = history->inputs[history->index].buttons;
    for (i = 0; i < 2; i++) {
        input.sticks[i].y = 0.0f;
        input.sticks[i].x = 0.0f;
    }
    memset(&input.triggers, 0, sizeof(input.triggers));
    buttons = gamepad->buttons;
    if ((float)gamepad->leftTrigger > 32.0f) {
        buttons |= 0x10000;
    }
    if ((float)gamepad->rightTrigger > 32.0f) {
        buttons |= 0x20000;
    }
    input.buttons = buttons;
    input.pressed = buttons & ~previous;
    input.released = previous & ~buttons;
    input.held = buttons & previous;
    fn_825B6EE0(self, &input, gamepad->thumbLX, gamepad->thumbLY, 0);
    fn_825B6EE0(self, &input, gamepad->thumbRX, gamepad->thumbRY, 1);
    input.triggers.left = (float)gamepad->leftTrigger * 0.003921569f;
    input.triggers.right = (float)gamepad->rightTrigger * 0.003921569f;
    fn_8260BA88(history, &input);
}
