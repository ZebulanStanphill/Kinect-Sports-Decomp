extern unsigned __int64 __mftb(void);
extern void __dcbt(int offset, const void *base);

typedef struct TimerEntry_82DC3748 {
    const char *name;
    unsigned int time;
    unsigned int unused;
} TimerEntry_82DC3748;

typedef struct TimerListEntry_82DC3748 {
    const char *name;
    unsigned int time;
    unsigned int unused;
    const char *name2;
} TimerListEntry_82DC3748;

typedef struct ValueEntry_82DC3748 {
    const char *name;
    float value;
} ValueEntry_82DC3748;

typedef struct TimerStream_82DC3748 {
    void *pad;
    char *current;
    void *pad2;
    char *end;
} TimerStream_82DC3748;

typedef struct Command_82DC3748 {
    int maxSize;           /* 0x0 */
    int count1;            /* 0x4 */
    int count2;            /* 0x8 */
    int count3;            /* 0xc */
    int dataOffset;        /* 0x10 */
    unsigned int dataSize; /* 0x14 */
} Command_82DC3748;

typedef struct CommandList_82DC3748 {
    int count; /* 0x0 */
    int pad4[2];
    Command_82DC3748 *commands[1]; /* 0xc */
} CommandList_82DC3748;

typedef struct Stats_82DC3748 {
    char pad0[8];
    int maxSize; /* 0x8 */
    int count1;  /* 0xc */
    int count2;  /* 0x10 */
    int count3;  /* 0x14 */
} Stats_82DC3748;

typedef struct Task_82DC3748 {
    char pad0[0x14];
    Stats_82DC3748 *stats; /* 0x14 */
    char pad18[8];
    CommandList_82DC3748 *list; /* 0x20 */
} Task_82DC3748;

extern TimerStream_82DC3748 *KeTlsGetValue(unsigned int index);
extern unsigned int lbl_8323B4A0;
extern void fn_82D80CB8(void *world, Stats_82DC3748 *stats);
extern void fn_82D80CE8(void *world, Stats_82DC3748 *stats);
extern void fn_82DC9F60(void *world, void *data, unsigned int size);
extern void fn_82DAA408(CommandList_82DC3748 *list);
extern int fn_82CE8E78(void *owner, Task_82DC3748 *a, Task_82DC3748 *b, int flags);

/* The command's data lies dataOffset bytes after the dataOffset member itself. */
static __forceinline void *RelativeData_82DC3748(int *offset)
{
    return (char *)offset + *offset;
}

int fn_82DC3748(void **world, void *owner, Task_82DC3748 *task)
{
    TimerStream_82DC3748 *s;
    TimerListEntry_82DC3748 *e2;
    TimerEntry_82DC3748 *e;
    ValueEntry_82DC3748 *v;
    Stats_82DC3748 *stats;
    Command_82DC3748 *command;
    int count;
    int i;

    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        e2 = (TimerListEntry_82DC3748 *)s->current;
        e2->name = "LtNarrowPhase";
        e2->name2 = "StPostCollide";
        e2->time = (unsigned int)__mftb();
        s->current = (char *)(e2 + 1);
    }
    stats = task->stats;
    fn_82D80CB8(*world, stats);
    count = task->list->count;
    for (i = 0; i < count; i++) {
        if (i < count - 4) {
            __dcbt(0, task->list->commands[(short)(i + 4)]);
        }
        command = task->list->commands[(short)i];
        stats->maxSize = stats->maxSize > command->maxSize ? stats->maxSize : command->maxSize;
        stats->count1 += command->count1;
        stats->count2 += command->count2;
        stats->count3 += command->count3;
        if (command->dataSize != 0) {
            int size = command->dataSize >> 4;

            s = KeTlsGetValue(lbl_8323B4A0);
            if (s->current < s->end) {
                v = (ValueEntry_82DC3748 *)s->current;
                v->name = "MinumCmds";
                v->value = (float)size;
                s->current = (char *)(v + 1);
            }
            fn_82DC9F60(*world, RelativeData_82DC3748(&command->dataOffset), command->dataSize);
        }
    }
    fn_82DAA408(task->list);
    fn_82D80CE8(*world, stats);
    s = KeTlsGetValue(lbl_8323B4A0);
    if (s->current < s->end) {
        e = (TimerEntry_82DC3748 *)s->current;
        e->name = "lt";
        e->time = (unsigned int)__mftb();
        s->current = (char *)(e + 1);
    }
    if (owner != 0) {
        return fn_82CE8E78(owner, task, task, 0);
    }
    return 2;
}
