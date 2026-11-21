typedef struct String_82456250 {
    union {
        char *ptr;
        char buf[16];
    } u; /* 0x0 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int pad18;
} String_82456250;

typedef struct Layer_82456250 {
    void *animation;      /* 0x0 */
    String_82456250 name; /* 0x4 */
    char pad20[0x3c - 0x20];
    int playing; /* 0x3c */
    char pad40[0x6c - 0x40];
} Layer_82456250;

typedef struct Self_82456250 {
    Layer_82456250 layers[3]; /* 0x0 */
    int state;                /* 0x144 */
    int first;                /* 0x148 */
    int second;               /* 0x14c */
    int blended;              /* 0x150 */
    int speed;                /* 0x154 */
    int blend;                /* 0x158 */
    int swapped;              /* 0x15c */
} Self_82456250;

extern void fn_825327A8(void *animation, const char *name);
extern void fn_8252CAF8(void *animation, int play, int flags);
extern void fn_824560A0(Layer_82456250 *layer, int clip, int loop, int speed, int forward, int blend);

static __forceinline const char *CStr(String_82456250 *s)
{
    if (s->capacity >= 0x10) {
        return s->u.ptr;
    }
    return s->u.buf;
}

static __forceinline void Play(Layer_82456250 *layer)
{
    fn_825327A8(layer->animation, CStr(&layer->name));
    fn_8252CAF8(layer->animation, 1, 0);
    layer->playing = 1;
}

void fn_82456250(Self_82456250 *self, int state)
{
    switch (state) {
    case 1:
        Play(&self->layers[0]);
        Play(&self->layers[1]);
        Play(&self->layers[2]);
        break;
    case 2:
        if (self->blended != 0) {
            fn_824560A0(&self->layers[0], self->swapped != 0 ? self->first : self->second, 0, self->speed,
                        self->swapped, self->blend);
            fn_824560A0(&self->layers[1], self->swapped != 0 ? self->second : self->first, 0, self->speed,
                        self->swapped == 0, self->blend);
            fn_824560A0(&self->layers[2], self->first, 1, self->speed, 1, self->blend);
        } else {
            fn_824560A0(&self->layers[0], self->first, 0, self->speed, 1, self->blend);
            fn_824560A0(&self->layers[1], self->first, 1, self->speed, 1, self->blend);
            fn_824560A0(&self->layers[2], self->first, 0, self->speed, 1, self->blend);
        }
        break;
    }
    self->state = state;
}
