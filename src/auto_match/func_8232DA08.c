typedef struct Inner_8232DA08 Inner_8232DA08;

typedef struct State_8232DA08 {
    char pad0[0x5c0];
    unsigned int cur;
    char pad5c4[0x6c4 - 0x5c4];
    unsigned int target;
} State_8232DA08;

typedef struct Game_8232DA08 {
    char pad0[0x27c];
    State_8232DA08 *state;
} Game_8232DA08;

typedef struct Obj_8232DA08 {
    char pad0[8];
    Game_8232DA08 *game;
    Inner_8232DA08 *inner;
} Obj_8232DA08;

extern void fn_8232C528(Inner_8232DA08 *p, int x);

void fn_8232DA08(Obj_8232DA08 *o)
{
    State_8232DA08 *s = o->game->state;
    if (s->cur != s->target) {
        fn_8232C528(o->inner, 2);
    }
}
