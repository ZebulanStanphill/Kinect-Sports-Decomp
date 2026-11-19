typedef struct State_822B0E68 {
    char pad0[8];
    unsigned int count; /* 0x08 */
    char padc[4];
    int group; /* 0x10 */
} State_822B0E68;

typedef struct Machine_822B0E68 {
    State_822B0E68 **states; /* 0x00 */
    char pad4[0xc];
    int current; /* 0x10 */
} Machine_822B0E68;

typedef struct Slot_822B0E68 {
    char pad0[0x20];
    int id;               /* 0x20 */
    unsigned char active; /* 0x24 */
    char pad25[0xb];
} Slot_822B0E68;

typedef struct Group_822B0E68 {
    Slot_822B0E68 slots[7];
} Group_822B0E68;

typedef struct Data_822B0E68 {
    char pad0[0x1090];
    Group_822B0E68 groups[1]; /* 0x1090 */
} Data_822B0E68;

typedef struct Self_822B0E68 {
    char pad0[0xc];
    Machine_822B0E68 *machine; /* 0x0c */
    Data_822B0E68 *data;       /* 0x10 */
} Self_822B0E68;

extern void *lbl_821AC7CC;
extern void fn_822ABBF0(State_822B0E68 *state, void **event);

static __forceinline State_822B0E68 *CurrentState(Machine_822B0E68 *machine)
{
    return machine->states[machine->current];
}

void fn_822B0E68(Self_822B0E68 *self)
{
    Slot_822B0E68 *slots;
    unsigned int count;
    unsigned int i;
    void *event;

    slots = self->data->groups[CurrentState(self->machine)->group].slots;
    count = CurrentState(self->machine)->count;
    for (i = 0; i < count; i++) {
        slots[i].active = 0;
        slots[i].id = i;
    }
    event = &lbl_821AC7CC;
    fn_822ABBF0(CurrentState(self->machine), &event);
}
