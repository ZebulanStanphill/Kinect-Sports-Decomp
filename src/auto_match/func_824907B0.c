typedef struct Device_824907B0 {
    char pad0[0x820];
    float speed; /* 0x820 */
} Device_824907B0;

typedef struct Node_824907B0 {
    char pad0[4];
    Device_824907B0 *device; /* 0x4 */
} Node_824907B0;

typedef struct Globals_824907B0 {
    char pad0[0xec];
    Node_824907B0 *node; /* 0xec */
} Globals_824907B0;

typedef struct Clock_824907B0 Clock_824907B0;
typedef struct Player_824907B0 Player_824907B0;

typedef struct ClockVtbl_824907B0 {
    void *slot0;
    void (*attach)(Clock_824907B0 *self, Player_824907B0 *player); /* 0x4 */
    void (*start)(Clock_824907B0 *self, Player_824907B0 *player);  /* 0x8 */
} ClockVtbl_824907B0;

struct Clock_824907B0 {
    ClockVtbl_824907B0 *vtbl; /* 0x0 */
    char pad4[0x28];
    float speed; /* 0x2c */
    char pad30[0x4];
    unsigned int minFrames; /* 0x34 */
};

typedef struct Listener_824907B0 Listener_824907B0;

typedef struct ListenerVtbl_824907B0 {
    void *slot0;
    void (*reset)(Listener_824907B0 *self, int frame); /* 0x4 */
} ListenerVtbl_824907B0;

struct Listener_824907B0 {
    ListenerVtbl_824907B0 *vtbl;
};

struct Player_824907B0 {
    int frameCount;              /* 0x0 */
    unsigned int *defaultFrames; /* 0x4 */
    char pad8[0xc];
    unsigned int frames; /* 0x14 */
    char pad18[0x4];
    Clock_824907B0 *clock;              /* 0x1c */
    Listener_824907B0 **listenersBegin; /* 0x20 */
    Listener_824907B0 **listenersEnd;   /* 0x24 */
    char pad28[0x10];
    float time; /* 0x38 */
    char pad3c[0x4];
    int playing; /* 0x40 */
    char pad44[0x10];
    float speed;            /* 0x54 */
    unsigned int alignment; /* 0x58 */
    void *timeline;         /* 0x5c */
};

extern Globals_824907B0 lbl_832960A0;
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8229EBD8(void *memory);
extern void fn_8248FAB0(Clock_824907B0 *clock, Player_824907B0 *player);

void fn_824907B0(Player_824907B0 *self)
{
    void *memory;
    Listener_824907B0 **it;
    Listener_824907B0 **end;
    Clock_824907B0 *clock;
    unsigned int minFrames;
    float speed;
    unsigned int alignment;

    memory = fn_8265C9E0(0x18);
    self->timeline = memory != 0 ? fn_8229EBD8(memory) : 0;
    self->playing = 1;
    self->time = 0.0f;
    if (self->clock != 0) {
        self->clock->vtbl->attach(self->clock, self);
        if (self->clock != 0) {
            fn_8248FAB0(self->clock, self);
        }
        minFrames = self->clock->minFrames;
        if (*self->defaultFrames > minFrames) {
            self->frames = *self->defaultFrames;
        } else {
            self->frames = minFrames;
        }
    } else {
        self->frames = *self->defaultFrames;
    }
    alignment = self->alignment;
    it = self->listenersBegin;
    end = self->listenersEnd;
    self->frames = (self->frames + alignment - 1) & ~(self->alignment - 1);
    for (; it != end; it++) {
        (*it)->vtbl->reset(*it, self->frameCount - 1);
    }
    clock = self->clock;
    if (clock != 0) {
        clock->vtbl->start(clock, self);
        speed = clock->speed;
        self->speed = speed;
        (lbl_832960A0.node != 0 ? lbl_832960A0.node->device : 0)->speed = speed;
    }
}
