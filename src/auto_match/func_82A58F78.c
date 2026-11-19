typedef struct Format_82A58F78 {
    unsigned short format;   /* 0x0 */
    unsigned short channels; /* 0x2 */
    unsigned int rate;       /* 0x4 */
    unsigned int bytes;      /* 0x8 */
    unsigned short padc;
    unsigned short kind; /* 0xe */
} Format_82A58F78;

typedef struct Request_82A58F78 {
    int primary;   /* 0x0 */
    int secondary; /* 0x4 */
    char pad8[0xc];
    unsigned int target; /* 0x14 */
} Request_82A58F78;

typedef struct Table_82A58F78 {
    char pad0[8];
    unsigned int count;     /* 0x8 */
    unsigned char *entries; /* 0xc, 0x19-byte records */
} Table_82A58F78;

extern unsigned int fn_82A75390(unsigned short format);
extern Table_82A58F78 *fn_82A58270(unsigned int type, int secondary, int primary, unsigned int rate,
                                   unsigned short channels);

unsigned char *fn_82A58F78(Format_82A58F78 *format, Request_82A58F78 *request)
{
    unsigned int type;
    int primary;
    int secondary;
    Table_82A58F78 *table;
    unsigned int best;
    int found;
    int useAlternate;
    unsigned int target;
    unsigned int mask;
    unsigned int i;
    unsigned char *entry;
    unsigned int value;
    unsigned int distance;

    type = fn_82A75390(format->format);
    primary = request->primary;
    secondary = request->secondary;
    table = fn_82A58270(type, secondary, primary, format->rate, format->channels);
    best = 0xffffffff;
    found = -1;
    useAlternate = primary != 0 && secondary == 0;
    target = useAlternate ? request->target : format->bytes * 8;
    mask = 0;
    switch (type) {
    case 2:
        mask = 8;
        break;
    case 3:
        mask = 0x10;
        break;
    }
    if (table == 0) {
        return 0;
    }
    for (i = 0; i < table->count; i++) {
        entry = table->entries + i * 0x19;
        /* The first test is always true, but the original evaluates it (rlwimi; cmplwi). */
        if (((*(unsigned int *)(entry + 0x15) & 2) | 1) != 0 &&
            (*(unsigned int *)(entry + 0x15) & mask) != 0 && entry[0x14] == format->kind) {
            if (useAlternate) {
                value = *(unsigned int *)(entry + 0x10);
            } else {
                value = *(unsigned int *)(entry + 0x0);
            }
            distance = abs((int)(target - value));
            if (distance == 0) {
                found = i;
                break;
            }
            if (best > distance && (!useAlternate || target <= value)) {
                best = distance;
                found = i;
            }
        }
    }
    if (found == -1) {
        return 0;
    }
    return table->entries + found * 0x19;
}
