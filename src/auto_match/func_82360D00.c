typedef struct Manager_82360D00 {
    char pad0[0x4];
    unsigned char paused;       /* 0x04 */
} Manager_82360D00;

typedef struct State_82360D00 {
    char pad0[0x24];
    int busy;                   /* 0x024 */
    char pad28[0x168 - 0x28];
    void *input;                /* 0x168 */
    int ready;                  /* 0x16c */
    char pad170[0x1a0 - 0x170];
    int flag1a0;                /* 0x1a0 */
    char pad1a4[0x1e0 - 0x1a4];
    int flag1e0;                /* 0x1e0 */
    char pad1e4[0x398 - 0x1e4];
    int flag398;                /* 0x398 */
} State_82360D00;

typedef struct Obj_82360D00 {
    char pad0[0x2b20];
    void *controller;           /* 0x2b20 */
} Obj_82360D00;

extern Manager_82360D00 *lbl_832975B0;
extern Manager_82360D00 *fn_82250A18(void);
extern State_82360D00 *fn_82417F58(void *controller);
extern int fn_82419C70(void *controller);
extern unsigned char fn_8288B760(void *input);
extern int fn_82358810(Obj_82360D00 *self, int arg);

static __forceinline int IsReady(State_82360D00 *s)
{
    int ready;
    if (s->input != 0)
        ready = fn_8288B760(s->input);
    else
        ready = s->ready;
    return ready;
}

int fn_82360D00(Obj_82360D00 *self, int check)
{
    State_82360D00 *state = fn_82417F58(self->controller);

    if (check != 0) {
        Manager_82360D00 *m = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
        if ((m->paused == 0 || state->flag398 == 0) && state != 0 && IsReady(state) && state->busy != 0)
            return 1;
    } else {
        if (state != 0 && IsReady(state) && state->busy != 0 &&
            (fn_82419C70(self->controller) != 0 || state->flag1a0 != 0 || state->flag1e0 != 0))
            return fn_82358810(self, 0);
    }
    return 0;
}
