typedef struct Effect_8239BAA0 {
    unsigned int id;
    int unused;
    float first;
    float second;
} Effect_8239BAA0;

typedef struct Array_8239BAA0 {
    void **data;
    char padding[12];
    int selected;
} Array_8239BAA0;

typedef struct Player_8239BAA0 {
    char padding[0x24];
    int enabled;
    char padding28[0x140];
    void *network;
    int local;
} Player_8239BAA0;

typedef struct Target_8239BAA0 {
    char padding[0xb0];
    void *effect;
} Target_8239BAA0;

typedef struct Context_8239BAA0 {
    char padding[8];
    Array_8239BAA0 ***arrays;
    char paddingC[0x84];
    Target_8239BAA0 *target;
    char padding94[0x288];
    Effect_8239BAA0 effects[9];
} Context_8239BAA0;

typedef struct Actor_8239BAA0 {
    char padding[0x184];
    int first;
    int second;
    char padding18c[0xdc];
    float direction;
} Actor_8239BAA0;

extern Player_8239BAA0 *fn_822ABA88(void *, unsigned int);
extern unsigned char fn_8288B760(void *);
extern void fn_824BD858(Target_8239BAA0 *, float, void *, float, unsigned int, int);

void fn_8239BAA0(Context_8239BAA0 *self, Actor_8239BAA0 *actor, int index, unsigned int key)
{
    Array_8239BAA0 *array = (*self->arrays)[index];
    Player_8239BAA0 *player = fn_822ABA88(array->data[array->selected], key);
    if (player->enabled != 0) {
        int enabled;
        unsigned int effect;
        float first;
        float second;
        if (player->network != 0) {
            enabled = fn_8288B760(player->network);
        } else {
            enabled = player->local;
        }
        if (enabled != 0) {
            if (actor->second != 0) {
                effect = self->effects[5].id;
                second = self->effects[5].second;
                first = self->effects[5].first;
            } else if (actor->first != 0) {
                effect = self->effects[7].id;
                second = self->effects[7].second;
                first = self->effects[7].first;
            } else if (actor->direction > 0.0f) {
                effect = self->effects[0].id;
                second = self->effects[0].second;
                first = self->effects[0].first;
            } else if (actor->direction < 0.0f) {
                effect = self->effects[1].id;
                second = self->effects[1].second;
                first = self->effects[1].first;
            } else {
                effect = self->effects[8].id;
                second = self->effects[8].second;
                first = self->effects[8].first;
            }
            fn_824BD858(self->target, first, self->target->effect, second, effect, 0);
        }
    }
}
