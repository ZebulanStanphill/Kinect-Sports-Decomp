typedef struct Entry_823A1938 {
    char reserved[0x28]; /* 0x00 */
    void *animation;     /* 0x28 */
} Entry_823A1938;

typedef struct Slot_823A1938 {
    Entry_823A1938 *entry; /* 0x00 */
    unsigned int reserved; /* 0x04 */
} Slot_823A1938;

typedef struct Vector_823A1938 {
    Slot_823A1938 *begin; /* 0x00 */
    Slot_823A1938 *end;   /* 0x04 */
} Vector_823A1938;

typedef struct State_823A1938 {
    char reserved00[0xa8];           /* 0x00 */
    Vector_823A1938 *entries;        /* 0xa8 */
    char reservedac[0x178 - 0xac];   /* 0xac */
    int mode;                        /* 0x178 */
    char reserved17c[0x2dc - 0x17c]; /* 0x17c */
    void *controller;                /* 0x2dc */
    char reserved2e0[0x868 - 0x2e0]; /* 0x2e0 */
    float elapsed;                   /* 0x868 */
} State_823A1938;

typedef struct Owner_823A1938 {
    char reserved[8];      /* 0x00 */
    State_823A1938 *state; /* 0x08 */
} Owner_823A1938;

typedef struct Object_823A1938 {
    char reserved[8];      /* 0x00 */
    Owner_823A1938 *owner; /* 0x08 */
    float elapsed;         /* 0x0c */
} Object_823A1938;

extern void fn_8239FF60(void *, int);
extern void fn_824C97F0(void *, const char *);

void fn_823A1938(Object_823A1938 *self)
{
    State_823A1938 *state;
    Slot_823A1938 *entry;
    Slot_823A1938 *end;
    self->elapsed = 0.0f;
    state = self->owner->state;
    if (state->mode == 0) {
        if (self->owner->state->mode == 0) {
            fn_8239FF60(state->controller, 3);
        }
    } else if (state->mode == 2) {
        if (self->owner->state->mode != 0) {
            fn_8239FF60(state->controller, 12);
        }
    }
    state = self->owner->state;
    state->elapsed = 0.0f;
    end = state->entries->end;
    for (entry = state->entries->begin; entry != end; ++entry) {
        fn_824C97F0(entry->entry->animation, "WakeUp");
    }
}
