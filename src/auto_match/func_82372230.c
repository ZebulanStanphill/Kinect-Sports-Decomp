typedef struct Side_82372230 {
    char pad0[0x24];
    int active; /* 0x24 */
    char pad28[0x7c];
} Side_82372230;

typedef struct Slot_82372230 {
    Side_82372230 sides[2]; /* 0x00: near, 0xa4: far */
} Slot_82372230;

typedef struct Table_82372230 {
    char pad0[0x1dc];
    Slot_82372230 slots[1]; /* 0x1dc */
} Table_82372230;

typedef struct SlotRef_82372230 {
    Table_82372230 *table; /* 0x0 */
    void *counter;         /* 0x4 */
} SlotRef_82372230;

typedef struct Player_82372230 {
    char pad0[0x28];
    int value; /* 0x28 */
    int id;    /* 0x2c */
} Player_82372230;

typedef struct Game_82372230 {
    char pad0[0x7e4];
    void *rules; /* 0x7e4 */
} Game_82372230;

typedef struct Info_82372230 {
    int a;
    int b;
    int enabled; /* 0x08 */
    int c;
} Info_82372230;

extern const float lbl_8218E8E8;
extern unsigned int lbl_831DCD58[24];
extern Info_82372230 lbl_831CB180[];

extern void fn_82381060(void *rules, int id);
extern void fn_82381120(void *rules, int index, int id, int value, int otherId, int otherValue,
                        float direction);
extern void fn_82381248(void *rules, int index, int id, int value, int otherId, int otherValue);
extern void fn_823813F8(void *rules, int index, int value, int otherId, int otherValue, int force);
extern void fn_823815D0(void *rules, int id, int value, int mode);
extern int fn_823814C0(void *rules, int id);
extern void fn_822315A0(void *counter);

void fn_82372230(Game_82372230 *game, SlotRef_82372230 *ref, Player_82372230 *first, Player_82372230 *second,
                 int index, float time, float direction)
{
    int firstId = first->id;
    int firstValue = first->value;
    int secondId = second->id;
    int secondValue = second->value;
    Side_82372230 *side = ref->table->slots[index].sides;
    int active;
    unsigned int kind;

    if (time >= lbl_8218E8E8) {
        side++;
    }
    active = side->active;
    if (index >= 24) {
        kind = 6;
    } else {
        kind = lbl_831DCD58[index];
    }
    switch (kind) {
    case 0:
        fn_82381060(game->rules, firstId);
        break;
    case 1:
        fn_82381120(game->rules, index, firstId, firstValue, secondId, secondValue, direction);
        break;
    case 2:
        fn_82381248(game->rules, index, firstId, firstValue, secondId, secondValue);
        break;
    case 3:
        fn_823813F8(game->rules, index, firstValue, secondId, secondValue, active);
        break;
    case 4: {
        void *rules = game->rules;
        if (firstId == secondId) {
            if (index == 14) {
                fn_823815D0(rules, firstId, secondValue, 7);
            } else {
                fn_823815D0(rules, firstId, secondValue, 12);
            }
        } else {
            if (index == 16) {
                if (active != 0) {
                    fn_823815D0(rules, secondId, secondValue, 5);
                } else {
                    fn_823815D0(rules, secondId, secondValue, 6);
                }
            } else {
                fn_823815D0(rules, secondId, secondValue, 12);
            }
            if (lbl_831CB180[fn_823814C0(rules, secondId)].enabled != 0) {
                fn_823815D0(rules, firstId, firstValue, 16);
            } else {
                fn_823815D0(rules, firstId, firstValue, 15);
            }
        }
        break;
    }
    }
    if (ref->counter != 0) {
        fn_822315A0(ref->counter);
    }
}
