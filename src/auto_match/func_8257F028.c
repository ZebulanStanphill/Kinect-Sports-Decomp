typedef struct Event_8257F028 {
    int type;
    int key;
    float value;
    int a;
    int b;
} Event_8257F028;

typedef struct Group_8257F028 {
    char pad[4];
    void *node;
} Group_8257F028;

typedef struct Owner_8257F028 {
    char pad0[0x3e4];
    struct { char pad[0x8c0]; void *node; } *local;
    char pad3e8[0x7e4 - 0x3e8];
    Group_8257F028 *global;
} Owner_8257F028;

typedef struct Dispatcher_8257F028 {
    Owner_8257F028 *owner;
    char pad4[0x18 - 4];
    char queue[4];
} Dispatcher_8257F028;

extern void fn_8257F228(Dispatcher_8257F028 *self, void *node, int *key, float value, int a, int b, int flag);
extern Event_8257F028 *fn_8251E4D0(void *queue);

void fn_8257F028(Dispatcher_8257F028 *self, int *key, float value, int a, int b, int now)
{
    if (now != 0) {
        if (self->owner->local != 0 && self->owner->local->node != 0) {
            fn_8257F228(self, self->owner->local->node, key, value, a, b, 0);
        }
        if (self->owner->global->node != 0) {
            fn_8257F228(self, self->owner->global->node, key, value, a, b, 0);
        }
    } else {
        Event_8257F028 *e = fn_8251E4D0(self->queue);
        e->type = 1;
        e->key = *key;
        e->value = value;
        e->a = a;
        e->b = b;
    }
}
