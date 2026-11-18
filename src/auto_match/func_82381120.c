typedef struct Player_82381120 {
    char pad0[0x2a4];
    int facingLeft; /* 0x2a4 */
} Player_82381120;

typedef struct Stack_82381120 {
    void **items; /* 0x00 */
    unsigned int unk4[3];
    int index; /* 0x10 */
} Stack_82381120;

typedef struct Source_82381120 {
    unsigned int unk0[2];
    Stack_82381120 ***entries; /* 0x08 */
} Source_82381120;

typedef struct Match_82381120 {
    int unk0;
    Source_82381120 *source; /* 0x04 */
} Match_82381120;

extern Player_82381120 *fn_822ABA88(void *map, unsigned int key);
extern Player_82381120 *fn_822CEE40(Player_82381120 *player);
extern int fn_822CEFA0(Player_82381120 *player);
extern void fn_823815D0(Match_82381120 *self, int index, int value, int mode);
extern void *fn_823737B8(Source_82381120 *source, int index);
extern void fn_82381948(Match_82381120 *self, int first, int index, unsigned int key, int special);

void fn_82381120(Match_82381120 *self, int kind, int index, unsigned int key, int otherIndex, int value,
                 float direction)
{
    if (index == otherIndex) {
        Stack_82381120 *stack = (*self->source->entries)[index];
        Player_82381120 *player = fn_822ABA88(stack->items[stack->index], key);
        Player_82381120 *opponent = fn_822CEE40(player);

        if (opponent != 0 && fn_822CEFA0(opponent) != 0) {
            fn_823815D0(self, index, value, 9);
        } else if (player->facingLeft != 0 ? direction > 0.0f : direction < 0.0f) {
            fn_823815D0(self, index, value, 10);
        } else {
            fn_823815D0(self, index, value, 8);
        }
        fn_82381948(self, index == 0, index, key, kind == 4);
    } else {
        fn_823815D0(self, index, -1, 2);
        if (fn_823737B8(self->source, otherIndex) == 0) {
            fn_823815D0(self, otherIndex, value, 4);
        }
    }
}
