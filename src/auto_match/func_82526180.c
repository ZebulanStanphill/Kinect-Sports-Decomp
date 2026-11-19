typedef struct Name_82526180 {
    char text[0x3e8];
} Name_82526180;

typedef struct Entry_82526180 {
    unsigned int refCount; /* 0x0 */
    Name_82526180 name;    /* 0x4 */
    void *buffer;          /* 0x3ec */
    void *handle;          /* 0x3f0 */
} Entry_82526180;

typedef struct Table_82526180 {
    Entry_82526180 entries[35]; /* 0x0 */
    unsigned int count;         /* 0x8a5c */
} Table_82526180;

extern Table_82526180 lbl_832767F0;

int fn_82526180(const Name_82526180 *name, void *buffer, void *handle)
{
    int count;

    if (lbl_832767F0.count < 35) {
        lbl_832767F0.entries[lbl_832767F0.count].name = *name;
        lbl_832767F0.entries[lbl_832767F0.count].buffer = buffer;
        lbl_832767F0.entries[lbl_832767F0.count].handle = handle;
        lbl_832767F0.entries[lbl_832767F0.count].refCount = 1;
        for (count = 0; count < 35; count++) {
            if (lbl_832767F0.entries[count].refCount == 0) {
                break;
            }
        }
        lbl_832767F0.count = count;
        return 1;
    }
    return 0;
}
