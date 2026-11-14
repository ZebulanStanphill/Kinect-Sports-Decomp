typedef struct State_826C2350 {
    unsigned char done;
    unsigned char value;
    char pad2[14];
} State_826C2350;

typedef struct Args_826C2350 {
    unsigned int id;
    State_826C2350 *state;
} Args_826C2350;

typedef struct Obj_826C2350 Obj_826C2350;
typedef struct ObjVt_826C2350 {
    void *pad[0x14 / 4];
    unsigned char (*f14)(Obj_826C2350 *self, int a, unsigned int id, State_826C2350 *state);
} ObjVt_826C2350;
struct Obj_826C2350 {
    ObjVt_826C2350 *vt;
    int pad4;
    char list[4];
};

extern void fn_826C07C0(void *list, void *where, Args_826C2350 *args);
extern void fn_82696330(State_826C2350 *state);

unsigned char fn_826C2350(Obj_826C2350 *self, int a, unsigned int id, unsigned char value)
{
    State_826C2350 state;
    Args_826C2350 args;

    state.done = 0;
    state.value = 0;
    if (self->vt->f14(self, a, id, &state)) {
        state.value = value;
        args.id = id;
        args.state = &state;
        fn_826C07C0(self->list, self->list, &args);
        fn_82696330(&state);
        return 1;
    }
    fn_82696330(&state);
    return 0;
}
