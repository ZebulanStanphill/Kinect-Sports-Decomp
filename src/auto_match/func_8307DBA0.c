typedef struct Entry_8307DBA0 {
    int pad0;
    int length;             /* 0x4 */
    unsigned char channels; /* 0x8 */
} Entry_8307DBA0;

unsigned int fn_8307DBA0(unsigned int count, Entry_8307DBA0 *entries)
{
    unsigned int header = (count * 0x60 + 0x8f) & ~0x7f;
    unsigned int total = 0;
    unsigned int i;

    for (i = 0; i < count; i++) {
        total += (entries[i].length + 0x80) * entries[i].channels * 2;
    }
    return total + header;
}
