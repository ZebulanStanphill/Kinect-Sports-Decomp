typedef struct Clip_82610730 {
    char pad00[0x10];
    float duration; /* 0x10 */
} Clip_82610730;

typedef struct Queue_82610730 {
    Clip_82610730 *current; /* 0x00 */
    void *pending[4];       /* 0x04 */
    int count;              /* 0x14 */
    float elapsed;          /* 0x18 */
    char pad1c[0x28];
    float start;  /* 0x44 */
    float finish; /* 0x48 */
} Queue_82610730;

typedef struct Player_82610730 {
    char pad000[0x8dc];
    Queue_82610730 queue; /* 0x8dc */
} Player_82610730;

typedef struct Owner_82610730 {
    char pad00[0x60];
    Player_82610730 **player; /* 0x60 */
} Owner_82610730;

typedef struct Event_82610730 {
    char pad00[0x10];
    int name;     /* 0x10 */
    float start;  /* 0x14 */
    float weight; /* 0x18 */
} Event_82610730;

extern int fn_825F4F10(Player_82610730 *self, int option);
extern void fn_825F4DE0(Player_82610730 *self, int *name, int arg);
extern void fn_825F4FE8(Player_82610730 *self);

void fn_82610730(Owner_82610730 *self, int unused, Event_82610730 *event, int unused2, unsigned int kind)
{
    Player_82610730 *player = *self->player;
    Queue_82610730 *queue;
    float limit;
    int on;

    switch (kind) {
    case 0:
        on = event->weight > 0.0f;
        if (fn_825F4F10(player, on) == 0)
            fn_825F4DE0(player, &event->name, on);
        player->queue.start = event->start;
        break;
    case 1:
    case 3:
        fn_825F4FE8(player);
        break;
    case 2:
        if (event->weight > 0.0f) {
            queue = &player->queue;
            if (queue->current != 0)
                limit = queue->current->duration - queue->elapsed;
            else
                limit = 0.0f;
            if (limit <= event->weight && queue->finish == 0.0f) {
                queue->finish = queue->elapsed;
                queue->start = 0.0f;
            }
        }
        break;
    }
}
