typedef struct Collector_82DB6C98 {
    void *current; /* 0x0 */
    char pad4[0xc];
    char storage[0x3020]; /* 0x10 */
    float earliest;       /* 0x3030 */
    char pad3034[0x4c];
    int count; /* 0x3080 */
} Collector_82DB6C98;

typedef struct Slot_82DB6C98 {
    char pad0[0x10];
    int value; /* 0x10 */
    char pad14[0x2c];
} Slot_82DB6C98;

typedef struct Table_82DB6C98 {
    char pad0[0x1c20];
    Slot_82DB6C98 slots[1]; /* 0x1c20 */
} Table_82DB6C98;

typedef struct Input_82DB6C98 {
    Table_82DB6C98 *table; /* 0x0 */
    int field4;            /* 0x4 */
    char pad8[0xc];
    int field14; /* 0x14 */
    char pad18[0x48];
    Slot_82DB6C98 *slot; /* 0x60 */
} Input_82DB6C98;

struct Dispatcher_82DB6C98;

typedef struct DispatcherVt_82DB6C98 {
    char pad0[0x18];
    void (*dispatch)(struct Dispatcher_82DB6C98 *self, int a, int b, Input_82DB6C98 *input,
                     Collector_82DB6C98 *out); /* 0x18 */
} DispatcherVt_82DB6C98;

typedef struct Dispatcher_82DB6C98 {
    DispatcherVt_82DB6C98 *vt;
} Dispatcher_82DB6C98;

typedef struct Agent_82DB6C98 {
    char pad0[0x8];
    Dispatcher_82DB6C98 *dispatcher; /* 0x8 */
    signed char type;                /* 0xc */
    char padd[0x3];
    int argA; /* 0x10 */
    int argB; /* 0x14 */
} Agent_82DB6C98;

extern void fn_82D7D528(Agent_82DB6C98 *agent, Input_82DB6C98 *input, Collector_82DB6C98 *out,
                        Dispatcher_82DB6C98 *dispatcher);
extern void fn_82DB61C8(void *context, Collector_82DB6C98 *out, Agent_82DB6C98 *agent);
extern int lbl_8323B520;

void fn_82DB6C98(void *context, Agent_82DB6C98 *agent, Input_82DB6C98 *input, Collector_82DB6C98 *out)
{
    Slot_82DB6C98 *slot;

    out->current = out->storage;
    out->count = 0;
    out->earliest = 3.40282e38f;
    slot = &input->table->slots[agent->type];
    input->slot = slot;
    input->field14 = slot->value;
    fn_82D7D528(agent, input, out, agent->dispatcher);
    if (lbl_8323B520 != 1) {
        if (out->current != out->storage) {
            agent->dispatcher->vt->dispatch(agent->dispatcher, agent->argA, agent->argB, input, out);
        }
        if ((char)(out->earliest != 3.40282e38f)) {
            fn_82DB61C8(context, out, agent);
        }
    }
}
