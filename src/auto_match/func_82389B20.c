typedef struct Entry_82389B20 {
    char data[0x60];
} Entry_82389B20;

typedef struct Table_82389B20 {
    char pad[0xb8];
    Entry_82389B20 entries[4]; /* 0xb8 */
} Table_82389B20;

extern Table_82389B20 lbl_831D2708;
extern float lbl_821CA45C[2];
extern float lbl_82192604;
extern unsigned int lbl_83265A28;

/* Picks one of the four entries at random. */
Entry_82389B20 *fn_82389B20(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    unsigned int index;
    Entry_82389B20 *entry = 0;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    index = (int)((random.value - lbl_821CA45C[1]) * lbl_82192604);
    switch (index) {
    case 0:
        entry = &lbl_831D2708.entries[0];
        break;
    case 1:
        entry = &lbl_831D2708.entries[1];
        break;
    case 2:
        entry = &lbl_831D2708.entries[2];
        break;
    case 3:
        entry = &lbl_831D2708.entries[3];
        break;
    }
    return entry;
}
