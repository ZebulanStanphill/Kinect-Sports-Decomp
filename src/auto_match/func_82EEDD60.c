typedef struct Entry_82EEDD60 {
    char pad0[0x8];
    int used;          /* 0x08 */
    int usedAlternate; /* 0x0c */
    char pad10[0x4];
    unsigned short stream; /* 0x14 */
    char pad16[0x22];
    unsigned int paired; /* 0x38 */
} Entry_82EEDD60;

typedef struct Table_82EEDD60 {
    char pad0[0x70];
    unsigned int count; /* 0x70 */
} Table_82EEDD60;

extern int fn_82EEDD00(Table_82EEDD60 *table, unsigned int index, Entry_82EEDD60 **entry);

int fn_82EEDD60(Table_82EEDD60 *table, unsigned short stream, unsigned short position,
                Entry_82EEDD60 **outEntry, unsigned int *outIndex, int *outSecond, int alternate)
{
    unsigned int count;
    unsigned short slot;
    unsigned int index;
    int hr;
    Entry_82EEDD60 *entry;

    count = table->count;
    slot = 0;
    for (index = 0; count > index; index++) {
        entry = 0;
        hr = fn_82EEDD00(table, index, &entry);
        if (entry == 0) {
            return 0xc00d36bb;
        }
        if (hr < 0) {
            return hr;
        }
        if (stream == 0xffff || stream == entry->stream) {
            if ((alternate != 0 && entry->usedAlternate == 0) || (alternate == 0 && entry->used == 0)) {
                if (position == slot || (entry->paired != 0 && position == slot + 1)) {
                    *outEntry = entry;
                    if (outIndex != 0) {
                        *outIndex = index;
                    }
                    if (outSecond != 0) {
                        *outSecond = position != slot;
                    }
                    break;
                }
                slot++;
                if (entry->paired != 0) {
                    slot++;
                }
            }
        }
    }
    if (count > index) {
        return hr;
    }
    return 0xc00d3e8d;
}
