typedef struct Item_82569898 {
    char pad0[0x10];
    void *body; /* 0x10 */
    char pad14[0x30 - 0x14];
} Item_82569898;

typedef struct Event_82569898 {
    int type;    /* 0x00 */
    int size;    /* 0x04 */
    float value; /* 0x08 */
} Event_82569898;

typedef struct Dispatcher_82569898 {
    char pad0[0x78];
    char queue[4]; /* 0x78 */
} Dispatcher_82569898;

typedef struct World_82569898 {
    char pad0[0x50];
    float speedX; /* 0x50 */
    float speedY; /* 0x54 */
    char pad58[0x60 - 0x58];
    Dispatcher_82569898 **dispatcher; /* 0x60 */
    char pad64[0x88 - 0x64];
    float time;     /* 0x88 */
    float lastTime; /* 0x8c */
    char pad90[0x4];
    float scale;   /* 0x94 */
    float elapsed; /* 0x98 */
    char pad9C[0xd4 - 0x9c];
    unsigned int itemCount; /* 0xd4 */
    Item_82569898 *items;   /* 0xd8 */
} World_82569898;

extern void fn_8252D970(void *body, float dt);
extern void *XMemSet(void *dest, int c, unsigned long count);
extern void fn_8257C8F0(Dispatcher_82569898 *dispatcher, Event_82569898 *event);
extern void fn_8257CB40(void *queue, Event_82569898 *event, int flags);

void fn_82569898(World_82569898 *world, float dt)
{
    World_82569898 *self = world;
    Event_82569898 event;
    unsigned int i;

    self->speedY = 0.0f;
    self->speedX = 0.0f;
    for (i = 0; i < self->itemCount; i++) {
        if (self->items[i].body != 0) {
            fn_8252D970(self->items[i].body, dt);
        }
    }
    self->lastTime = self->time;
    self->time = self->scale * dt;
    self->elapsed = 0.0f;
    XMemSet(&event.value, 0, sizeof(event.value));
    event.value = dt;
    event.type = 0x49;
    event.size = 0xc;
    fn_8257C8F0(*self->dispatcher, &event);
    fn_8257CB40((*self->dispatcher)->queue, &event, 1);
}
