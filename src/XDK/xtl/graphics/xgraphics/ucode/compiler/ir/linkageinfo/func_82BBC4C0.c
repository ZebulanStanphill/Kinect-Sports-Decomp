typedef struct Compiler_82BBC4C0 {
    char pad0[0x10];
    int jumpBuffer[0x544 / 4]; /* 0x010 */
    int error;                 /* 0x554 */
} Compiler_82BBC4C0;

typedef struct Slots_82BBC4C0 {
    int words000[16];    /* 0x000 */
    int words040[16];    /* 0x040 */
    int table080[16][4]; /* 0x080 */
    int table180[16][4]; /* 0x180 */
    int table280[16][4]; /* 0x280 */
} Slots_82BBC4C0;

typedef struct Linkage_82BBC4C0 {
    Slots_82BBC4C0 current;      /* 0x000 */
    unsigned char used380[16];   /* 0x380 */
    int words390[16];            /* 0x390 */
    Slots_82BBC4C0 saved;        /* 0x3D0 */
    unsigned char valid;         /* 0x750 */
    unsigned char dirty;         /* 0x751 */
    Compiler_82BBC4C0 *compiler; /* 0x754 */
} Linkage_82BBC4C0;

extern __declspec(noreturn) void longjmp(int *buffer, int value);

int fn_82BBC4C0(Linkage_82BBC4C0 *self, int slot)
{
    int i;
    int j;
    int matched;
    int mismatched;
    Compiler_82BBC4C0 *compiler;

    for (i = 0; i < 16; i++) {
        if (self->saved.words000[i] != self->current.words000[slot]) {
            continue;
        }
        if (self->saved.words000[i] != 0x21) {
            if (self->saved.words040[i] == self->current.words040[slot]) {
                return i;
            }
            continue;
        }
        mismatched = 0;
        matched = 0;
        for (j = 0; j < 4; j++) {
            if (self->current.table080[slot][j] != 0 && self->saved.table080[i][j] != 0) {
                if (self->current.table180[slot][j] == self->saved.table180[i][j] &&
                    self->current.table280[slot][j] == self->saved.table280[i][j]) {
                    matched++;
                } else {
                    mismatched++;
                }
            }
        }
        if (matched > 0) {
            if (mismatched <= 0) {
                return i;
            }
            compiler = self->compiler;
            compiler->error = 0x18;
            longjmp(compiler->jumpBuffer, 1);
        }
    }
    return -1;
}
