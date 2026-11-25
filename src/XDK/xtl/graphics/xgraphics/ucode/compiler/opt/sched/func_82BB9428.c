typedef struct Instruction_82BB9428 Instruction_82BB9428;
typedef struct ScheduleNode_82BB9428 ScheduleNode_82BB9428;
typedef struct Scheduler_82BB9428 Scheduler_82BB9428;
typedef struct Slots_82BB5528 Slots_82BB5528;
typedef struct Node_82BB5528 Node_82BB5528;
typedef struct IRInst_82BA05E8 IRInst_82BA05E8;
typedef struct Counters_82BD31A8 Counters_82BD31A8;
typedef struct Obj_82BD31A8 Obj_82BD31A8;

typedef struct InstVt_82BB9428 {
    void *pad00[17];
    unsigned char (*isControl)(Instruction_82BB9428 *self);
} InstVt_82BB9428;

struct Instruction_82BB9428 {
    const InstVt_82BB9428 *vt;
    char pad04[0x10];
    int count;
    char pad18[0x20];
    int block;
    char pad3c[0x70];
    Instruction_82BB9428 *previous;
    char padB0[0x34];
    unsigned int : 22;
    unsigned int hasOperand : 1;
    unsigned int : 9;
    Instruction_82BB9428 *operands[(0x3b8 - 0xe8) / 4];
};

typedef struct CountersVt_82BB9428 {
    void *pad00[2];
    void (*add)(Counters_82BD31A8 *self, Instruction_82BB9428 *instruction);
} CountersVt_82BB9428;

struct Counters_82BD31A8 {
    const CountersVt_82BB9428 *vt;
};

struct ScheduleNode_82BB9428 {
    char pad00[0xc];
    int priority;
    char pad10[0xc];
    int issue_cycle;
    int ready_cycle;
    int topdown_count;
    Instruction_82BB9428 *inst;
};

struct Scheduler_82BB9428 {
    char pad00[8];
    Counters_82BD31A8 *counters;
    int *queue;
    char pad10[0xc];
    int cycle;
    Slots_82BB5528 *slots;
    char pad24[0x4c];
    int priority;
    char pad74[4];
    ScheduleNode_82BB9428 *previous;
};

extern void fn_82AB15D0(void *object, const char *format, ...);
extern void fn_82BB5528(Slots_82BB5528 *slots, Node_82BB5528 *node);
extern void fn_82BB7F78(unsigned int self, int node);
extern void fn_82BB8578(int *self, int node);
extern void fn_82BA05E8(IRInst_82BA05E8 *instruction, int arg, void *value);
extern void fn_82BD31A8(Counters_82BD31A8 *self, Obj_82BD31A8 *instruction);
extern void fn_82BB62E0(int *queue, int node);

#define SCHEDULE_FILE                                                                                        \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp"

static __forceinline unsigned char HasOperand(Instruction_82BB9428 *inst)
{
    return (unsigned char)inst->hasOperand;
}

void fn_82BB9428(Scheduler_82BB9428 *self, ScheduleNode_82BB9428 *sn)
{
    int cur_cycle;
    int priority;
    int *pReady_cycle = &sn->ready_cycle;

    if (sn->issue_cycle != -1)
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "sn->issue_cycle == 0-1", SCHEDULE_FILE, 0x6f4);
    if (sn->topdown_count != 0)
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "sn->topdown_count == 0", SCHEDULE_FILE, 0x6f5);
    {
        int ready = *pReady_cycle;
        int cycle = self->cycle;
        if (ready > cycle)
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "sn->ready_cycle <= cur_cycle", SCHEDULE_FILE,
                        0x6f6);
    }
    fn_82BB5528(self->slots, (Node_82BB5528 *)sn);
    cur_cycle = self->cycle;
    priority = sn->priority;
    (*pReady_cycle) = cur_cycle;
    sn->issue_cycle = cur_cycle;
    if (priority < self->priority)
        self->priority = priority;

    fn_82BB7F78((unsigned int)self, (int)sn);
    fn_82BB8578((int *)self, (int)sn);
    if (self->previous != 0) {
        Instruction_82BB9428 *inst = sn->inst;
        Instruction_82BB9428 *previous = self->previous->inst->previous;
        if (inst->vt->isControl(inst)) {
            Instruction_82BB9428 *branch = sn->inst->operands[1];
            if (branch->block == previous->block && branch != previous)
                fn_82BA05E8((IRInst_82BA05E8 *)sn->inst, 1, previous);
        } else {
            inst = sn->inst;
            if (inst == previous && (unsigned char)inst->hasOperand) {
                ScheduleNode_82BB9428 *previousNode = self->previous;
                unsigned char hasOperand = HasOperand(sn->inst);
                Instruction_82BB9428 *value = previousNode->inst->operands[1];
                int slot;
                if (hasOperand) {
                    slot = inst->count;
                    inst->operands[slot] = value;
                } else {
                    slot = inst->count + 1;
                    inst->count = slot;
                    inst->operands[slot] = value;
                    inst->hasOperand = 1;
                }
            }
        }
    }
    if (sn->inst->vt->isControl(sn->inst))
        self->previous = sn;
    self->counters->vt->add(self->counters, sn->inst);
    fn_82BD31A8(self->counters, (Obj_82BD31A8 *)sn->inst);
    fn_82BB62E0(self->queue, (int)sn);
}
