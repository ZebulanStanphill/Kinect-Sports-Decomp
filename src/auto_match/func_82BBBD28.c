typedef struct Slots_82BBBD28 {
    int words000[16];    /* 0x000 */
    int words040[16];    /* 0x040 */
    int table080[16][4]; /* 0x080 */
    int table180[16][4]; /* 0x180 */
    int table280[16][4]; /* 0x280 */
} Slots_82BBBD28;

typedef struct Linkage_82BBBD28 {
    Slots_82BBBD28 current;    /* 0x000 */
    unsigned char used380[16]; /* 0x380 */
    int words390[16];          /* 0x390 */
    Slots_82BBBD28 saved;      /* 0x3D0 */
    unsigned char valid;       /* 0x750 */
    unsigned char dirty;       /* 0x751 */
    unsigned int value;        /* 0x754 */
} Linkage_82BBBD28;

void fn_82BBBD28(Linkage_82BBBD28 *self, unsigned int value)
{
    int i;
    int j;

    self->value = value;
    self->valid = 0;
    self->dirty = 0;
    for (i = 0; i < 16; i++) {
        self->words390[i] = 0;
        self->used380[i] = 0;
        self->saved.words000[i] = 0;
        self->saved.words040[i] = i;
        self->current.words000[i] = 0;
        self->current.words040[i] = i;
        for (j = 0; j < 4; j++) {
            self->current.table080[i][j] = 0;
            self->saved.table080[i][j] = 0;
            self->current.table180[i][j] = 0x13;
            self->saved.table180[i][j] = 0x13;
            self->current.table280[i][j] = 0;
            self->saved.table280[i][j] = 0;
        }
    }
}
