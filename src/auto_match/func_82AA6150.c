typedef struct State_82AA6150 {
    char data[0x9b8];
    void *a;
    void *b;
} State_82AA6150;

typedef struct Obj_82AA6150 {
    int pad0;
    State_82AA6150 *state;
} Obj_82AA6150;

extern void *fn_828F02C8(unsigned int size);
extern void *memset(void *dst, int c, unsigned int n);

long fn_82AA6150(Obj_82AA6150 *self, void *a, void *b)
{
    State_82AA6150 *s = (State_82AA6150 *)fn_828F02C8(sizeof(State_82AA6150));
    if (s == 0) {
        return 0x8007000e;
    }
    self->state = s;
    memset(s, 0, sizeof(State_82AA6150));
    s->a = a;
    s->b = b;
    return 0;
}
