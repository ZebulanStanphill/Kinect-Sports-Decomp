extern unsigned __int64 __mftb();
extern float lbl_821954B0[];

typedef struct Thread_82646E80 {
    char pad0[0x58];
    unsigned int cycles; /* 0x58 */
} Thread_82646E80;

typedef struct Stats_82646E80 {
    char pad0[0x354c];
    void (*report)(int arg, int kind, float time, unsigned int cycles); /* 0x354c */
    char pad3550[0x1fe0];
    float tickScale; /* 0x5530 */
    int pad5534;
    unsigned __int64 ticks;     /* 0x5538 */
    unsigned __int64 waitTicks; /* 0x5540 */
} Stats_82646E80;

typedef struct Scope_82646E80 {
    Stats_82646E80 *stats; /* 0x00 */
    int kind;              /* 0x04 */
    int pad8[2];
    unsigned int startCycles; /* 0x10 */
    unsigned int startTick;   /* 0x14 */
} Scope_82646E80;

void fn_82646E80(Scope_82646E80 *scope)
{
    unsigned int elapsed;
    unsigned int cycles;
    Thread_82646E80 *thread;

    if (scope->kind != 0) {
        elapsed = (unsigned)__mftb() - scope->startTick;
        thread = *(Thread_82646E80 **)(__gregister_get(13) + 0x100);
        cycles = thread->cycles - scope->startCycles;
        if (scope->kind == 3) {
            scope->stats->waitTicks += elapsed;
        } else {
            scope->stats->ticks += elapsed;
        }
        if (scope->stats->report != 0) {
            scope->stats->report(0, scope->kind, scope->stats->tickScale * (float)elapsed * lbl_821954B0[6],
                                 cycles);
        }
    }
}
