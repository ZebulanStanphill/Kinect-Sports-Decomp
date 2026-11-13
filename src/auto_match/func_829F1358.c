/* State change of a tracked object (0 and 1: released, 2: grabbed by target). Leaving the
   grabbed state resets the motion (the velocity samples of the active slots keep only their
   two ids), and both transitions end by re-initialising the motion (fn_829EEA88 with the
   current direction) or attaching to the target (fn_829F10C8 with the target's position). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

void *memset(void *dst, int value, unsigned int size);

typedef struct Slot_829F1358 {
    int id;                     /* 0x00 */
    int pad04;
    int owner;                  /* 0x08 */
    char pad0c[0x1c - 0xc];
} Slot_829F1358;

typedef struct Entry_829F1358 {
    unsigned int kind;          /* 0x00 */
    char pad04[0x50 - 4];
} Entry_829F1358;

typedef struct Target_829F1358 Target_829F1358;

typedef struct Object_829F1358 {
    __vector4 position;         /* 0x000 */
    __vector4 previous;         /* 0x010 */
    char pad020[0x10];
    __vector4 direction;        /* 0x030 */
    char pad040[0x10];
    __vector4 velocity;         /* 0x050 */
    __vector4 acceleration;     /* 0x060 */
    char pad070[0x80 - 0x70];
    int modeA;                  /* 0x080 */
    int modeB;                  /* 0x084 */
    float speedA;               /* 0x088 */
    float speedB;               /* 0x08c */
    int last;                   /* 0x090 */
    Target_829F1358 *holder;    /* 0x094 */
    char pad098[0xc0 - 0x98];
    Entry_829F1358 entries[4];  /* 0x0c0 */
    Slot_829F1358 slots[4];     /* 0x200 */
    unsigned int count;         /* 0x270 */
    char pad274[0x278 - 0x274];
    int extraB;                 /* 0x278 */
    int extraA;                 /* 0x27c */
    char pad280[0x284 - 0x280];
    int state;                  /* 0x284 */
} Object_829F1358;

struct Target_829F1358 {
    char pad00[0x40];
    __vector4 position;         /* 0x40 */
    char pad50[0x54 - 0x50];
    Object_829F1358 *object;    /* 0x54 */
    float distance;             /* 0x58 */
    Object_829F1358 *held;      /* 0x5c */
    char pad60[0x78 - 0x60];
    int mode;                   /* 0x78 */
};

typedef struct Source_829F1358 {
    char pad000[0x410];
    int b;                      /* 0x410 */
    int a;                      /* 0x414 */
} Source_829F1358;

extern int fn_829EEA88(Object_829F1358 *self, __vector4 direction);
extern int fn_829F10C8(Object_829F1358 *self, __vector4 position);

int fn_829F1358(Object_829F1358 *self, const Source_829F1358 *source, Target_829F1358 *target, int state)
{
    int reset = 0;
    int attach = 0;
    unsigned int i;

    if (self->state == state)
        return 0;
    switch (state) {
    case 0:
    case 1:
        if (self->state == 2) {
            self->holder = 0;
            target->held = 0;
            self->previous = self->position;
            self->speedA = 0.0f;
            self->speedB = 0.0f;
            for (i = 0; i < self->count; i++) {
                Slot_829F1358 *s = &self->slots[i];
                if (self->entries[i].kind < 5) {
                    int id = s->id;
                    int owner = s->owner;
                    memset(s, 0, sizeof(Slot_829F1358));
                    s->id = id;
                    s->owner = owner;
                }
            }
            self->modeA = 4;
            self->modeB = 4;
            self->last = -1;
            self->velocity = __vspltisw(0);
            self->acceleration = __vspltisw(0);
            reset = 1;
        }
        if (target != 0 && target->object == self && state == 0) {
            target->object = 0;
            target->mode = 4;
            target->distance = 3.402823466e+38f;
        }
        break;
    case 2:
        target->held = self;
        target->object = 0;
        target->mode = 4;
        target->distance = 3.402823466e+38f;
        self->holder = target;
        self->speedA = 0.0f;
        self->speedB = 0.0f;
        if (source != 0) {
            self->extraA = source->a;
            self->extraB = source->b;
        }
        attach = 1;
        break;
    }
    self->state = state;
    if (reset)
        fn_829EEA88(self, self->direction);
    else if (attach)
        fn_829F10C8(self, target->position);
    return 0;
}
