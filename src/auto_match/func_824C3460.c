typedef struct State_824C3460 {
    char pad0[0x5c];
    void *pending;          /* 0x5c */
    unsigned __int64 time;  /* 0x60 */
    int busy;               /* 0x68 */
} State_824C3460;

typedef struct Self_824C3460 {
    void *vt;
    State_824C3460 *state;
} Self_824C3460;

extern int fn_824C04E0(State_824C3460 *state, int next);

void fn_824C3460(Self_824C3460 *self)
{
    State_824C3460 *s = self->state;

    if (s->busy != 0) {
        fn_824C04E0(s, 4);
        return;
    }
    if (s->pending == 0)
        return;
    if (s->time == 0)
        fn_824C04E0(s, 5);
    else
        fn_824C04E0(s, 2);
}
