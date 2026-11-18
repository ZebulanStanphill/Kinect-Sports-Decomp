typedef struct Cache_82BF9170 {
    char pad0[0x14];
    unsigned short freeCount; /* 0x14 */
    unsigned short firstFree; /* 0x16 */
    char pad18[0x27 - 0x18];
    unsigned char dirty; /* 0x27 */
    char pad28[0x30 - 0x28];
} Cache_82BF9170;

extern Cache_82BF9170 lbl_8322FD08;
extern unsigned short lbl_8322BCF8[0x2000];

void fn_82BF9170(unsigned int cluster)
{
    int count;
    unsigned int next;
    unsigned int index;

    if (lbl_8322FD08.firstFree > cluster)
        lbl_8322FD08.firstFree = cluster;
    count = 0;
    index = cluster;
    while (index != 0xfffe) {
        count++;
        next = lbl_8322BCF8[index];
        lbl_8322BCF8[index] = 0xffff;
        index = next;
    }
    lbl_8322FD08.dirty = 1;
    lbl_8322FD08.freeCount += count;
}
