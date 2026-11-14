typedef struct Entry_829D4E70 {
    unsigned int total, count;
} Entry_829D4E70;

extern Entry_829D4E70 *lbl_832179FC;

unsigned int fn_829D4E70(int index)
{
    Entry_829D4E70 *entry = &lbl_832179FC[index + 0x11e7c];
    unsigned int count = entry->count;
    if (count == 0)
        return 0;
    return (entry->total * 10 / count) & 255;
}
