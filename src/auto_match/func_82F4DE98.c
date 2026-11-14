typedef struct Entry_82F4DE98 {
    unsigned int f0;
    unsigned int id;
    unsigned char data[0x1c0 - 8];
} Entry_82F4DE98;

typedef struct Table_82F4DE98 {
    unsigned char header[0x30];
    Entry_82F4DE98 entries[6];
} Table_82F4DE98;

typedef struct Settings_82F4DE98 {
    char pad[0x2b28];
    unsigned int f0 : 30;
    unsigned int flag : 1;
    unsigned int f31 : 1;
} Settings_82F4DE98;

typedef struct Slot_82F4DE98 {
    char pad0[0x28];
    int type;
    int entry;
} Slot_82F4DE98;

extern Settings_82F4DE98 *lbl_8326183C;
extern unsigned int lbl_83261824[6];
extern Table_82F4DE98 lbl_83261840;
extern void fn_82F53B80(Slot_82F4DE98 *slot);

void fn_82F4DE98(Slot_82F4DE98 *slot)
{
    unsigned int i;

    if ((unsigned char)lbl_8326183C->flag) {
        for (i = 0; i < 6; i++) {
            if (lbl_83261840.entries[i].id == lbl_83261824[slot->type]) {
                slot->entry = i;
                break;
            }
        }
    } else {
        slot->entry = slot->type;
    }
    fn_82F53B80(slot);
}
