typedef struct State_822515E8 {
    unsigned char data[0x90];
} State_822515E8;

extern void fn_82250D78(State_822515E8 *state);

void fn_822515E8(int object, long long value)
{
    State_822515E8 state;
    int *base = (int *)((char *)object + 0x50);
    int *receiver;

    fn_82250D78(&state);
    receiver = (int *)base[6];
    (*(void (**)(int *, long long, State_822515E8 *))(*(int *)receiver + 0x14))(
        receiver, value, &state);

    if (*(int **)(base + 4) != 0) {
        (*(void (**)(int *, State_822515E8 *))(*(int *)*(int **)(base + 4) + 4))(
            *(int **)(base + 4), &state);
    }
}
