typedef struct Stats_82BA8A58 {
    char pad0[0x38];
    int controlFlowSlots; /* 0x38 */
    int aluCount;         /* 0x3c */
    int fetchCount;       /* 0x40 */
    int packedAlu;        /* 0x44 */
    int candidateAlu;     /* 0x48 */
    int conflictMoves;    /* 0x4c */
    int tempMoves;        /* 0x50 */
    int redundantMoves;   /* 0x54 */
    int deadInstructions; /* 0x58 */
} Stats_82BA8A58;

typedef struct Assembler_82BA8A58 {
    unsigned char quiet; /* 0x0 */
    char pad1[0xb];
    void *log; /* 0xc */
    char pad10[0x870 - 0x10];
    int totalConflictMoves;    /* 0x870 */
    int totalTempMoves;        /* 0x874 */
    int totalRedundantMoves;   /* 0x878 */
    int totalDeadInstructions; /* 0x87c */
} Assembler_82BA8A58;

extern void fn_82BA02A8(void *log, const char *format, ...);

void fn_82BA8A58(Assembler_82BA8A58 *self, Stats_82BA8A58 *stats)
{
    int percent;

    self->totalConflictMoves = stats->conflictMoves + self->totalConflictMoves;
    self->totalTempMoves = self->totalTempMoves + stats->tempMoves;
    self->totalRedundantMoves = stats->redundantMoves + self->totalRedundantMoves;
    self->totalDeadInstructions = stats->deadInstructions + self->totalDeadInstructions;
    if (stats->conflictMoves > 0) {
        fn_82BA02A8(self->log, "Assembler : adds %d mov(s) to correct pw conflicts\n", stats->conflictMoves);
    }
    if (stats->tempMoves > 0) {
        fn_82BA02A8(self->log, "Assembler : adds %d additional mov(s) using special pw temp\n",
                    stats->tempMoves);
    }
    if (stats->redundantMoves > 0) {
        fn_82BA02A8(self->log, "Assembler : %d redundant mov(s) not issued\n", stats->redundantMoves);
    }
    if (stats->deadInstructions > 0) {
        fn_82BA02A8(self->log, "Assembler : %d dead inst(s) issued\n", stats->deadInstructions);
    }
    fn_82BA02A8(self->log, "Assembler : emits %d cf, %d fetch, %d alu -> %d total instruction(s)\n",
                stats->controlFlowSlots / 2, stats->fetchCount, stats->aluCount - stats->fetchCount,
                stats->aluCount + stats->controlFlowSlots / 2);
    fn_82BA02A8(self->log, "INFO:# of control flow %d, # of exec %d instructions\n",
                stats->controlFlowSlots / 2, stats->aluCount);
    if (self->quiet == 0) {
        if (stats->candidateAlu != 0) {
            percent = stats->packedAlu * 100 / stats->candidateAlu;
        } else {
            percent = 0;
        }
        fn_82BA02A8(self->log, "Assembler : of %d candidate alu instruction(s), %d are packed (%%%d)\n",
                    stats->candidateAlu, stats->packedAlu, percent);
    }
}
