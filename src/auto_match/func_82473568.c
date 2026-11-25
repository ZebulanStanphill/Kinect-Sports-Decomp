extern void *memcpy(void *dest, const void *src, unsigned int size);
extern void fn_82266D28(void *shared, void *object);
extern const void *lbl_821BCE54[];

typedef struct Resource_82473568 {
    unsigned int words[6];
} Resource_82473568;

typedef struct Pair_82473568 {
    unsigned int flags;
    float time;
} Pair_82473568;

typedef struct Player_82473568 {
    const void **vtable;
    int type;
    int state;
    float time;
    Resource_82473568 initial;
    int index;
    Pair_82473568 slots[2];
    unsigned int flags;
    int pending;
    int ready;
    int pad48;
    float delay;
    void *movie;
    void *reference;
    unsigned int first;
    unsigned int second;
    char pad60[4];
    Resource_82473568 current;
    int currentIndex;
    int start;
    int end;
    int active;
    int queued;
    float elapsed;
    int counters[5];
} Player_82473568;

Player_82473568 *fn_82473568(Player_82473568 *self, const Resource_82473568 *resource, int index)
{
    float zero;
    Resource_82473568 *initial;
    char *slot;
    int count;

    self->type = 1;
    zero = 0.0f;
    self->vtable = lbl_821BCE54;
    self->time = zero;
    self->state = 0;
    initial = &self->initial;
    memcpy(initial, resource, sizeof(*initial));
    self->index = index;
    slot = (char *)initial + sizeof(*initial);
    count = 2;
    self->flags = resource->words[2];
    self->pending = 0;
    do {
        *(unsigned int *)(slot + 4) = 0;
        slot += sizeof(Pair_82473568);
        *(float *)slot = zero;
    } while (--count != 0);
    self->delay = zero;
    self->movie = 0;
    self->reference = 0;
    fn_82266D28(&self->movie, 0);
    self->first = resource->words[0];
    self->second = resource->words[1];
    memcpy(&self->current, resource, sizeof(self->current));
    self->elapsed = zero;
    self->currentIndex = index;
    self->start = -1;
    self->end = -1;
    self->active = 0;
    self->queued = 0;
    self->counters[0] = 0;
    self->counters[1] = 0;
    self->counters[2] = 0;
    self->counters[3] = 0;
    self->counters[4] = 0;
    return self;
}
