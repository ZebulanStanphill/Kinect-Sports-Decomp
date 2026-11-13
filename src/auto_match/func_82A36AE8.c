typedef struct State_82A36AE8 {
    unsigned char lock[0x2fec];
    int a;
    int b;
    int c;
    int d;
    union {
        unsigned char first;
        int word;
    } e;
    int f;
    int g;
    int h;
} State_82A36AE8;

typedef struct Obj_82A36AE8 {
    int pad0[2];
    unsigned int flags;
    int padc[2];
    State_82A36AE8 state;
} Obj_82A36AE8;

extern void fn_82A396A8(State_82A36AE8 *state);

int fn_82A36AE8(Obj_82A36AE8 *self)
{
    State_82A36AE8 *s = &self->state;

    fn_82A396A8(s);
    if (self->flags & 1) {
        s->e.first = 0;
    } else if (self->flags & 0x80000000) {
        s->c = 0;
        s->e.word = 0;
        s->f = 0;
        s->g = 0;
        s->h = 0;
    } else {
        return 0;
    }
    s->d = 0;
    s->b = 0;
    s->a = 0;
    return 0;
}
