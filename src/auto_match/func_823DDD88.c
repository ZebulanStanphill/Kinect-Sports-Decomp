
typedef struct Vec_823DDD88 {
    int *begin;
    int *end;
} Vec_823DDD88;

typedef struct Owner_823DDD88 {
    char pad0[0x20];
    Vec_823DDD88 **items;
    char pad24[0xe2c - 0x24];
    int index;
} Owner_823DDD88;

typedef struct State_823DDD88 {
    int pad0[2];
    Owner_823DDD88 *owner;
    int flag;
    int active;
    float value;
} State_823DDD88;

void fn_823DDD88(State_823DDD88 *s)
{
    Vec_823DDD88 *v;

    s->active = 1;
    s->flag = 0;
    s->value = 0.0f;
    v = s->owner->items[s->owner->index];
    if ((unsigned)(v->end - v->begin) > 0) {
        s->flag = 1;
    }
}
