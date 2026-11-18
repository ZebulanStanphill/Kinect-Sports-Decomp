typedef struct Cache_82BF90D0 {
    char pad0[0x14];
    unsigned short freeCount; /* 0x14 */
    unsigned short firstFree; /* 0x16 */
    char pad18[0x27 - 0x18];
    unsigned char dirty; /* 0x27 */
    char pad28[0x30 - 0x28];
} Cache_82BF90D0;

extern Cache_82BF90D0 lbl_8322FD08;
extern unsigned short lbl_8322BCF8[0x2000];

unsigned int fn_82BF90D0(unsigned int count)
{
    unsigned int first = -1;
    unsigned int previous = first;
    unsigned int found = 0;
    unsigned int index = lbl_8322FD08.firstFree;

    while (found < count) {
        if (lbl_8322BCF8[index] == 0xffff) {
            if (previous != -1) {
                lbl_8322BCF8[previous] = index;
            } else {
                first = index;
            }
            previous = index;
            found++;
        }
        index++;
    }
    lbl_8322BCF8[previous] = 0xfffe;
    lbl_8322FD08.freeCount -= count;
    lbl_8322FD08.firstFree = previous + 1;
    lbl_8322FD08.dirty = 1;
    return first;
}
