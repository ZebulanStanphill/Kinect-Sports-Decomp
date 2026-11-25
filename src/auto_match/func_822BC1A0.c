typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct String_822BC1A0 {
    char data[0x1c];
} String_822BC1A0;

typedef struct Ball_822BC1A0 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0x60];
    __vector4 velocity; /* 0xc0 */
} Ball_822BC1A0;

typedef struct Hand_822BC1A0 {
    int holding; /* 0x00 */
    char pad4[8];
    float time;          /* 0x0c */
    Ball_822BC1A0 *ball; /* 0x10 */
    char pad14[0xc];
    __vector4 position; /* 0x20 */
    __vector4 velocity; /* 0x30 */
} Hand_822BC1A0;

typedef struct PoseSlot_822BC1A0 {
    char pad0[0x18];
    int state; /* 0x18 */
    char pad1c[0x10];
} PoseSlot_822BC1A0;

typedef struct Poses_822BC1A0 {
    char pad0[0x150];
    char named[0x118];       /* 0x150 */
    PoseSlot_822BC1A0 left;  /* 0x268 */
    PoseSlot_822BC1A0 right; /* 0x294 */
} Poses_822BC1A0;

typedef struct Settings_822BC1A0 {
    char pad0[0xc4c];
    int effects; /* 0xc4c */
    char padc50[0x68];
    int sparkles; /* 0xcb8 */
} Settings_822BC1A0;

typedef struct Stage_822BC1A0 {
    char pad0[0x13c];
    int lit; /* 0x13c */
} Stage_822BC1A0;

typedef struct Player_822BC1A0 {
    char pad0[0x14];
    int id; /* 0x014 */
    char pad18[0xc];
    int rig; /* 0x024 */
    char pad28[0xf0];
    Poses_822BC1A0 *poses; /* 0x118 */
    void *events;          /* 0x11c */
    char pad120[0x80];
    Hand_822BC1A0 hands[2]; /* 0x1a0 */
    char pad220[0x18];
    Settings_822BC1A0 **settings; /* 0x238 */
    Stage_822BC1A0 *stage;        /* 0x23c */
} Player_822BC1A0;

extern unsigned int fn_824D03B8(unsigned int rig, int hand, int on, float time);
extern void fn_822B91F8(void *events, int player, Ball_822BC1A0 *ball, int event);
extern void fn_822B9390(void *events, Ball_822BC1A0 *ball, int event);
extern void fn_8234C320(int a, PoseSlot_822BC1A0 *slot);
extern void *fn_82230110(String_822BC1A0 *s, const char *text);
extern void fn_82230300(String_822BC1A0 *s, int a, int b);
extern void fn_8234C258(void *poses, int index, String_822BC1A0 *name);

void fn_822BC1A0(Player_822BC1A0 *self, Ball_822BC1A0 *ball, int index)
{
    unsigned int attached;
    Poses_822BC1A0 *poses;
    PoseSlot_822BC1A0 *slot;
    String_822BC1A0 rightName;
    String_822BC1A0 leftName;

    self->hands[index].ball = ball;
    self->hands[index].holding = 1;
    self->hands[index].position = ball->position;
    self->hands[index].velocity = ball->velocity;
    attached = self->rig;
    if (attached != 0) {
        attached = fn_824D03B8(attached, index, 1, self->hands[index].time);
    }
    if (((*self->settings)->effects != 0 ? 3 : 0) < 3 || self->stage->lit == 0 ||
        (*self->settings)->sparkles == 0 || attached == 0) {
        if (self->rig != 0) {
            fn_822B91F8(self->events, self->id, ball, (index == 1) + 0x20);
        } else {
            fn_822B9390(self->events, ball, 0x21);
        }
    }
    if (self->rig != 0) {
        if (index == 1) {
            poses = self->poses;
            slot = &poses->right;
            if (slot->state != 1) {
                fn_8234C320(1, slot);
            }
            fn_82230110(&rightName, "hold_ball");
            fn_8234C258(self->poses->named, 1, &rightName);
            fn_82230300(&rightName, 1, 0);
        } else {
            poses = self->poses;
            slot = &poses->left;
            if (slot->state != 1) {
                fn_8234C320(1, slot);
            }
            fn_82230110(&leftName, "hold_ball");
            fn_8234C258(self->poses->named, 0, &leftName);
            fn_82230300(&leftName, 1, 0);
        }
    }
}
