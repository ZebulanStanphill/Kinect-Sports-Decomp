typedef struct Desc_8301EEA8 {
    int words[9];
} Desc_8301EEA8;

typedef struct Block_8301EEA8 {
    int words[6];
} Block_8301EEA8;

typedef struct Entry_8301EEA8 {
    Desc_8301EEA8 desc;
    char pad24[0x30 - 0x24];
    Block_8301EEA8 block;
    char pad48[0x50 - 0x48];
    unsigned char kind;
    char rest[0x90 - 0x51];
} Entry_8301EEA8;

extern Entry_8301EEA8 lbl_83264610[8];

int fn_8301EEA8(unsigned int index, unsigned char *kind, Block_8301EEA8 *out)
{
    if (index >= 8) {
        return 0x1f;
    }
    *kind = lbl_83264610[index].kind;
    *out = lbl_83264610[index].block;
    return 1;
}
