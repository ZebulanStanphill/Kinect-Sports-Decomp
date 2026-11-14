typedef struct String_82417FC0 {
    unsigned char bytes[0x1c];
} String_82417FC0;

typedef struct Pair_82417FC0 {
    String_82417FC0 first;      /* 0x00 */
    String_82417FC0 second;     /* 0x1c */
} Pair_82417FC0;

typedef struct Item_82417FC0 {
    char pad0[0x24];
    int active;                 /* 0x24 */
} Item_82417FC0;

typedef struct Game_82417FC0 {
    char pad0[0x2b20];
    struct Player_82417FC0 *player;     /* 0x2b20 */
} Game_82417FC0;

typedef struct Player_82417FC0 {
    Game_82417FC0 *game;        /* 0x00 */
} Player_82417FC0;

extern void fn_82230110(String_82417FC0 *self, const char *text);
extern void fn_82230300(String_82417FC0 *self, int release, unsigned int size);
extern void fn_822C1730(void *vec, Pair_82417FC0 *pair);
extern Item_82417FC0 *fn_82417F58(Player_82417FC0 *player);

void fn_82417FC0(Player_82417FC0 *self, void *tags)
{
    Pair_82417FC0 player;
    Pair_82417FC0 ai;
    if (self == self->game->player && fn_82417F58(self) != 0 && fn_82417F58(self)->active != 0) {
        fn_82230110(&player.first, "zone_player");
        fn_82230110(&player.second, "player");
        fn_822C1730(tags, &player);
        fn_82230300(&player.second, 1, 0);
        fn_82230300(&player.first, 1, 0);
    } else {
        fn_82230110(&ai.first, "zone_player");
        fn_82230110(&ai.second, "ai");
        fn_822C1730(tags, &ai);
        fn_82230300(&ai.second, 1, 0);
        fn_82230300(&ai.first, 1, 0);
    }
}
