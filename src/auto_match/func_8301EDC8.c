typedef struct Desc_8301EDC8 {
    int words[9];
} Desc_8301EDC8;

typedef struct Entry_8301EDC8 {
    Desc_8301EDC8 desc;
    char rest[0x90 - 0x24];
} Entry_8301EDC8;

extern Entry_8301EDC8 lbl_83264610[8];

int fn_8301EDC8(unsigned int index, Desc_8301EDC8 *out)
{
    if (index >= 8) {
        return 0x1f;
    }
    *out = lbl_83264610[index].desc;
    return 1;
}
