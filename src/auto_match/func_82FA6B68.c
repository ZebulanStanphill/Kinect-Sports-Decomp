typedef struct Lists_82FA6B68 {
    void *active;  /* 0x0 */
    void *pending; /* 0x4 */
    void *free;    /* 0x8 */
} Lists_82FA6B68;

typedef struct Table_82FA6B68 {
    void *head;   /* 0x0 */
    int unk4;     /* 0x4 */
    int unk8;     /* 0x8 */
    int unkC;     /* 0xc */
    int last;     /* 0x10 */
    int unk14;    /* 0x14 */
    int unk18;    /* 0x18 */
    int capacity; /* 0x1c */
} Table_82FA6B68;

extern void *lbl_83264228;

typedef struct Settings_82FA6B68 {
    float scale;
} Settings_82FA6B68;

extern Settings_82FA6B68 lbl_8326422C;
extern Lists_82FA6B68 lbl_83264234;
extern char lbl_83264240[0x28];
extern Table_82FA6B68 lbl_831BC680;
extern int lbl_831BC768;

extern void fn_82FA7E00(void *section);
extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);

int fn_82FA6B68(void *unused, Settings_82FA6B68 *settings)
{
    int result;

    if (settings != 0) {
        lbl_8326422C = *settings;
    } else {
        lbl_8326422C.scale = 1.0f;
    }
    lbl_83264234.active = 0;
    lbl_83264234.pending = 0;
    lbl_83264234.free = 0;
    fn_82FA7E00(lbl_83264240);
    lbl_83264228 = fn_82A1E6A0(0, 0, 0, 0);
    result = lbl_83264228 != 0 ? 1 : 2;
    if (result == 1) {
        lbl_831BC680.capacity = lbl_831BC768;
        lbl_831BC680.unk14 = 0;
        lbl_831BC680.unkC = 0;
        lbl_831BC680.last = -1;
        lbl_831BC680.unk18 = 0;
        lbl_831BC680.unk8 = 0;
        lbl_831BC680.head = 0;
        lbl_831BC680.unk4 = 0;
    }
    return result;
}
