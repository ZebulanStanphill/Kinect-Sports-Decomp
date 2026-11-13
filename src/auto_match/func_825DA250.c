typedef struct {
    int f0;
    int f4;
    int state;
} Sub_825DA250;

typedef struct {
    char pad[0xb60];
    Sub_825DA250 sub;
} Obj_825DA250;

extern void fn_82592430(void *self, int b);
extern void fn_8261D808(Sub_825DA250 *s);
extern void fn_8261D758(Sub_825DA250 *s);

static __forceinline void SetState_825DA250(Sub_825DA250 *s, int state)
{
    if (s->state != state)
        s->state = state;
}

void fn_825DA250(Obj_825DA250 *self, int b)
{
    Sub_825DA250 *s;
    fn_82592430(self, b);
    s = &self->sub;
    switch (s->state) {
    case 1:
        SetState_825DA250(s, 2);
        break;
    case 2:
        fn_8261D808(s);
        fn_8261D758(s);
        break;
    }
}
