typedef struct Ring_824B13A8 {
    char *begin;
    char *end;
    char *cur;
    int f0c;
    unsigned int count;
} Ring_824B13A8;

typedef struct State_824B13A8 {
    int f00;
    Ring_824B13A8 ring;
    int f18;
    unsigned char active;
} State_824B13A8;

typedef struct Obj_824B13A8 {
    unsigned char pad[0x3c];
    State_824B13A8 *state;
} Obj_824B13A8;

static __forceinline void ringReset(Ring_824B13A8 *ring)
{
    unsigned int i;

    i = 0;
    while (i < ring->count) {
        char **c = &ring->cur;
        i++;
        *c += 0x20;
        if (*c == ring->end) {
            *c = ring->begin;
        }
    }
    ring->count = 0;
}

int fn_824B13A8(Obj_824B13A8 *obj)
{
    ringReset(&obj->state->ring);
    obj->state->active = 0;
    return 0;
}
