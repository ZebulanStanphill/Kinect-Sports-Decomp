typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Settings_82453C20 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Settings_82453C20;

typedef struct Owner_82453C20 {
    char padding[0x8c]; /* 0x00 */
    void *state;        /* 0x8c */
} Owner_82453C20;

typedef struct Game_82453C20 {
    Owner_82453C20 *owner; /* 0x000 */
    char pad4[0x114 - 0x4];
    int mode; /* 0x114 */
} Game_82453C20;

typedef struct Player_82453C20 {
    char pad0[0x40];
    Game_82453C20 *game; /* 0x40 */
} Player_82453C20;

typedef struct Event_82453C20 {
    const void *vtable; /* 0x00 */
    unsigned int type;  /* 0x04 */
    unsigned int value; /* 0x08 */
    int index;          /* 0x0c */
    __vector4 position; /* 0x10 */
    float time;         /* 0x20 */
    unsigned char flag; /* 0x24 */
} Event_82453C20;

extern Settings_82453C20 *lbl_832975B0;
extern const char lbl_821B9BC8[];
extern Settings_82453C20 *fn_82250A18(void);
extern int fn_823B6A20(void *state);
extern void fn_823B65F8(void *state, Event_82453C20 *event);

void fn_82453C20(__vector4 position, Player_82453C20 *self, unsigned int value, int index, float time,
                 unsigned char flag)
{
    Settings_82453C20 *settings = lbl_832975B0 != 0 ? lbl_832975B0 : fn_82250A18();

    if (settings->enabled) {
        int mode = self->game->mode;
        Event_82453C20 event;

        event.type = mode != 4;
        event.vtable = lbl_821B9BC8;
        event.value = value;
        event.position = position;
        event.time = time;
        event.index = index;
        event.flag = flag;
        if (fn_823B6A20(self->game->owner->state) != 0) {
            fn_823B65F8(self->game->owner->state, &event);
        }
    }
}
