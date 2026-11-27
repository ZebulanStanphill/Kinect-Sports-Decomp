typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Stat_82374E58 {
    char pad0[0x54];
    int count; /* 0x54 */
    char pad58[0x30];
} Stat_82374E58;

typedef struct Table_82374E58 {
    Stat_82374E58 entries[8];
} Table_82374E58;

typedef struct Ref_82374E58 Ref_82374E58;

typedef struct Game_82374E58 {
    char pad0[0xa4];
    void *sink; /* 0xa4 */
    char pada8[0x108];
    char ballRef[0x54]; /* 0x1b0 */
    int practice;       /* 0x204 */
    char pad208[0x68];
    float distances[5]; /* 0x270 */
    int distanceIndex;  /* 0x284 */
    char pad288[0x78c];
    Table_82374E58 table; /* 0xa14 */
} Game_82374E58;

typedef struct Player_82374E58 {
    char pad0[0x1f80];
    __vector4 position; /* 0x1f80 */
} Player_82374E58;

typedef struct Ball_82374E58 {
    char pad0[0xa0];
    int bounces; /* 0xa0 */
    int hits;    /* 0xa4 */
    char pada8[0xe8];
    __vector4 position; /* 0x190 */
    char pad1a0[0x1f30];
    Player_82374E58 *owner; /* 0x20d0 */
} Ball_82374E58;

struct Ref_82374E58 {
    Ball_82374E58 *ball; /* 0x0 */
    void *rep;           /* 0x4 */
};

typedef struct Result_82374E58 {
    char pad0[0x24];
    int scored; /* 0x24 */
    int side;   /* 0x28 */
    int team;   /* 0x2c */
} Result_82374E58;

extern int lbl_83265A28;

extern void fn_8228E658(void *self, Ref_82374E58 *other);
extern void fn_822315A0(void *rep);
extern void *fn_8236FB68(int id);
extern void fn_8236FD90(Game_82374E58 *self, int id);
extern void fn_82508078(void *sink, void *item, int flags);
extern int fn_82520780(int *random, float chance);

static __forceinline __vector4 BallPosition(Ball_82374E58 *ball)
{
    return ball->position;
}

static __forceinline __vector4 PlayerPosition(Player_82374E58 *player)
{
    return player->position;
}

void fn_82374E58(Game_82374E58 *self, Ref_82374E58 *ball, Result_82374E58 *result, unsigned int kind)
{
    void *item;

    fn_8228E658(self->ballRef, ball);
    ball->ball->hits = 0;
    ball->ball->bounces = 0;
    switch (kind) {
    case 1:
        fn_8236FD90(self, fn_82520780(&lbl_83265A28, 0.3f) == 0 ? 0x1f : 0x1e);
        break;
    case 0:
        item = fn_8236FB68(0x20);
        if (item != 0) {
            fn_82508078(self->sink, item, 0);
        }
        break;
    }
    if (self->practice == 0) {
        Table_82374E58 *table = &self->table;
        int team = result->team;
        int side = result->side;

        table->entries[team * 2 + side].count++;
        if (result->scored != 0) {
            self->distances[self->distanceIndex] =
                BallPosition(ball->ball).vector4_f32[0] - PlayerPosition(ball->ball->owner).vector4_f32[0];
            self->distanceIndex++;
            if (self->distanceIndex >= 5) {
                self->distanceIndex = 0;
            }
        }
    }
    if (ball->rep != 0) {
        fn_822315A0(ball->rep);
    }
}
