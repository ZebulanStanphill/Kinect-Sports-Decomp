typedef struct Value_8236F868 {
    char pad[0x20];
    float value; /* 0x20 */
} Value_8236F868;

typedef struct Array_8236F868 {
    Value_8236F868 **data; /* 0x0 */
    char pad[0xc];
    unsigned int index; /* 0x10 */
} Array_8236F868;

typedef struct Player_8236F868 {
    char pad[0x168];
    void *source; /* 0x168 */
    int active;   /* 0x16c */
} Player_8236F868;

typedef struct Game_8236F868 {
    char pad[8];
    Array_8236F868 ***arrays; /* 0x8 */
    char gap[0x98];
    void *sink; /* 0xa4 */
} Game_8236F868;

extern unsigned int lbl_831D1B28[];
extern Player_8236F868 *fn_822AA770(Array_8236F868 *array);
extern unsigned char fn_8288B760(void *source);
extern void *fn_8236FB68(int id);
extern void fn_82508078(void *sink, void *item, int flags);

static __forceinline Array_8236F868 *GetArray(Game_8236F868 *game, int index)
{
    Game_8236F868 *owner = game;

    return (*owner->arrays)[index];
}

static __forceinline unsigned int Score(Game_8236F868 *game, int index)
{
    Array_8236F868 *array = (*game->arrays)[index];

    return (int)array->data[array->index]->value;
}

void fn_8236F868(Game_8236F868 *self)
{
    unsigned int first = Score(self, 0);
    unsigned int second = Score(self, 1);
    Player_8236F868 *player = fn_822AA770(GetArray(self, first < second));
    int active;
    unsigned int hi;
    unsigned int lo;
    unsigned int difference;
    int id;
    void *item;

    if (player != 0 && (player->source ? fn_8288B760(player->source) : player->active) != 0) {
        active = 1;
    } else {
        active = 0;
    }
    hi = (int)first >= (int)second ? first : second;
    lo = (int)first < (int)second ? first : second;
    difference = hi - lo;
    if (first == second) {
        id = 0x16;
    } else if (difference > lbl_831D1B28[0x1f] && active) {
        id = 0x15;
    } else {
        id = 0x13;
        if (difference > lbl_831D1B28[0x20]) {
            id = 0x14;
        }
    }
    item = fn_8236FB68(id);
    if (item != 0) {
        fn_82508078(self->sink, item, 0);
    }
}
