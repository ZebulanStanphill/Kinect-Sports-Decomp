typedef struct State_8227B8D0 {
    unsigned int active; /* 0x00 */
    unsigned int first;  /* 0x04 */
    unsigned int second; /* 0x08 */
    char name[0x40];     /* 0x0c */
    float time;          /* 0x4c */
    unsigned int third;  /* 0x50 */
    unsigned int fourth; /* 0x54 */
    float value;         /* 0x58 */
    unsigned int fifth;  /* 0x5c */
    unsigned int sixth;  /* 0x60 */
} State_8227B8D0;

extern int fn_82F64988(char *, unsigned int, const char *);

void fn_8227B8D0(char *self, int index, unsigned int alternate, const char *name, unsigned int first,
                 unsigned int second, float time, unsigned int third, unsigned int fourth, float value,
                 unsigned int fifth, unsigned int sixth)
{
    State_8227B8D0 *state = (State_8227B8D0 *)(self + index * 0xdc + 0xa9c);
    if (alternate >= 1) {
        state = (State_8227B8D0 *)(self + index * 0xdc + 0xb00);
    }
    *(unsigned int *)(self + 0xa78) = 1;
    fn_82F64988(state->name, 0x20, name);
    state->time = time;
    state->value = value;
    state->first = first;
    state->second = second;
    state->third = third;
    state->fourth = fourth;
    state->fifth = fifth;
    state->sixth = sixth;
    state->active = 1;
}
