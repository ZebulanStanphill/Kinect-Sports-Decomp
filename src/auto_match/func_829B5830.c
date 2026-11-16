typedef struct Decoder_829B5830 Decoder_829B5830;

typedef struct Error_829B5830 {
    void (*raise)(Decoder_829B5830 *self);
    char unused04[0x10];
    int code; /* 0x14 */
} Error_829B5830;

typedef struct State_829B5830 {
    char unused00[0x10];
    int active;   /* 0x10 */
    int finished; /* 0x14 */
    int pending;  /* 0x18 */
} State_829B5830;

typedef struct Callbacks_829B5830 {
    int unused00;
    int (*read)(Decoder_829B5830 *self); /* 0x4 */
    int unused08[2];
    int mode; /* 0x10 */
} Callbacks_829B5830;

struct Decoder_829B5830 {
    Error_829B5830 *error;
    char unused04[0x90];
    int limit; /* 0x94 */
    int unused98;
    int position; /* 0x9c */
    char unusedA0[0x118];
    State_829B5830 *state;         /* 0x1b8 */
    Callbacks_829B5830 *callbacks; /* 0x1bc */
};

extern void fn_829B5278(Decoder_829B5830 *self);
extern void fn_829B57C0(Decoder_829B5830 *self);

int fn_829B5830(Decoder_829B5830 *self)
{
    State_829B5830 *state = self->state;
    int result;
    if (state->finished != 0) {
        return 2;
    }
    result = self->callbacks->read(self);
    switch (result) {
    case 2:
        state->finished = 1;
        if (state->pending != 0) {
            if (self->callbacks->mode != 0) {
                self->error->code = 0x3b;
                self->error->raise(self);
            }
        } else {
            if (self->position > self->limit) {
                self->position = self->limit;
            }
        }
        break;
    case 1:
        if (state->pending != 0) {
            fn_829B5278(self);
            state->pending = 0;
        } else {
            if (state->active == 0) {
                self->error->code = 0x23;
                self->error->raise(self);
            }
            fn_829B57C0(self);
        }
        break;
    }
    return result;
}
