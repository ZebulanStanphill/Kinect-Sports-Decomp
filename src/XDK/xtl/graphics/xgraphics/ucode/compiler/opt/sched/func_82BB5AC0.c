typedef struct Instruction_82BB5AC0 Instruction_82BB5AC0;

typedef struct Vtable_82BB5AC0 {
    void *slots0[6];
    unsigned char (*test18)(Instruction_82BB5AC0 *); /* 0x18 */
} Vtable_82BB5AC0;

struct Instruction_82BB5AC0 {
    Vtable_82BB5AC0 *vtable;
};

typedef struct SchedNode_82BB5AC0 {
    char pad0[0xc];
    int earliest; /* 0xc */
    char pad10[0x4];
    int latencyBefore; /* 0x14 */
    int latencyAfter;  /* 0x18 */
    char pad1c[0x4];
    int height;                        /* 0x20 */
    int topdown_count;                 /* 0x24 */
    Instruction_82BB5AC0 *instruction; /* 0x28 */
    char pad2c[0x10];
    int uses; /* 0x3c */
} SchedNode_82BB5AC0;

typedef struct Block_82BB5AC0 {
    char pad0[0x10];
    int start;  /* 0x10 */
    int end;    /* 0x14 */
    int offset; /* 0x18 */
} Block_82BB5AC0;

typedef struct Context_82BB5AC0 {
    char pad0[0xaa8];
    int maxDistance; /* 0xaa8 */
} Context_82BB5AC0;

typedef struct Scheduler_82BB5AC0 {
    Context_82BB5AC0 *context; /* 0x0 */
    char pad4[0x4];
    Block_82BB5AC0 *block; /* 0x8 */
    char padC[0x10];
    int maxHeight; /* 0x1c */
    char pad20[0x4c];
    int cycle;     /* 0x6c */
    int lastCycle; /* 0x70 */
} Scheduler_82BB5AC0;

extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);

static __forceinline int BlockPosition(Block_82BB5AC0 *block)
{
    if (block->start > block->end) {
        return block->start + block->offset;
    }
    return (block->end + block->start) / 2 + block->offset;
}

unsigned char fn_82BB5AC0(Scheduler_82BB5AC0 *self, SchedNode_82BB5AC0 *sn)
{
    int distance;

    if (sn->topdown_count != 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "sn->topdown_count == 0",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics"
                    "\\xgraphics\\ucode\\compiler\\opt\\sched.cpp",
                    0x56c);
    }
    if (sn->height > self->maxHeight) {
        return 0;
    }
    if (!sn->instruction->vtable->test18(sn->instruction) && sn->uses > 0 &&
        sn->earliest <= self->lastCycle) {
        if (BlockPosition(self->block) > self->cycle) {
            distance = BlockPosition(self->block) - sn->latencyAfter;
        } else {
            distance = self->cycle - sn->latencyBefore;
        }
        if (distance > self->context->maxDistance) {
            return 0;
        }
    }
    return 1;
}
