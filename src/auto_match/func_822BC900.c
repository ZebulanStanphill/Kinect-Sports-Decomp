typedef struct Hand_822BC900 {
    int state;   /* 0x0 */
    float timer; /* 0x4 */
    char pad8[4];
    float weight; /* 0xc */
    int target;   /* 0x10 */
    char pad14[0x2c];
} Hand_822BC900;

typedef struct Settings_822BC900 {
    char pad0[0xc4c];
    int firstPerson; /* 0xc4c */
    char padC50[0x68];
    int throwAnims; /* 0xcb8 */
} Settings_822BC900;

typedef struct Options_822BC900 {
    char pad0[0x13c];
    int enabled; /* 0x13c */
} Options_822BC900;

typedef struct Animator_822BC900 {
    char pad0[0x20];
    void *lookup; /* 0x20 */
} Animator_822BC900;

typedef struct List_822BC900 {
    char pad0[0x18];
    int count; /* 0x18 */
} List_822BC900;

typedef struct Lists_822BC900 {
    char pad0[0x268];
    List_822BC900 left; /* 0x268 */
    char pad284[0x10];
    List_822BC900 right; /* 0x294 */
} Lists_822BC900;

typedef struct PlayerHand_822BC900 {
    char pad0[0x394];
    int active;   /* 0x394 */
    float weight; /* 0x398 */
    char pad39C[0x1c10 - 0x39c];
} PlayerHand_822BC900;

typedef struct Game_822BC900 {
    char pad0[0x24];
    PlayerHand_822BC900 *player; /* 0x24 */
    char pad28[0xec];
    Animator_822BC900 *animator; /* 0x114 */
    Lists_822BC900 *lists;       /* 0x118 */
    char pad11C[0x84];
    Hand_822BC900 hands[2]; /* 0x1a0 */
    char pad220[0x18];
    Settings_822BC900 **settings; /* 0x238 */
    Options_822BC900 *options;    /* 0x23c */
    char pad240[0x60];
    int throwCount; /* 0x2a0 */
} Game_822BC900;

extern void fn_822B7068(Game_822BC900 *self, void *object);
extern void fn_822C72E0(void *lookup, const char *name);
extern void fn_8234C320(int unused, List_822BC900 *list);
extern void fn_825275B0(void *object);

void fn_822BC900(Game_822BC900 *self, void *object, int hand)
{
    PlayerHand_822BC900 *player;
    Lists_822BC900 *lists;
    List_822BC900 *list;
    int count;
    int level;

    self->hands[hand].weight = 0.0f;
    self->hands[hand].state = 0;
    self->hands[hand].target = 0;
    player = self->player;
    level = (*self->settings)->firstPerson != 0 ? 3 : 0;
    if (level >= 3 && self->options->enabled != 0 && (*self->settings)->throwAnims != 0) {
        if (player != 0) {
            if (level >= 4) {
                fn_822C72E0(self->animator->lookup, hand == 1 ? "righthand_throw_firstpersonafter"
                                                              : "lefthand_throw_firstpersonafter");
            }
        } else {
            fn_825275B0(object);
        }
    } else if (player != 0) {
        fn_822B7068(self, object);
    } else {
        fn_825275B0(object);
    }
    if (player != 0) {
        player[hand].weight = self->hands[hand].weight;
        player[hand].active = 0;
    }
    lists = self->lists;
    if (hand == 1) {
        list = &lists->right;
        count = list->count;
    } else {
        list = &lists->left;
        count = list->count;
    }
    if (count != 0)
        fn_8234C320(0, list);
    self->hands[hand].timer = 0.0f;
    self->throwCount++;
}
