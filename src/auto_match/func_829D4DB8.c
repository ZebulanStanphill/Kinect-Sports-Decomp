extern char *lbl_832179FC;

unsigned int fn_829D4DB8(int *self)
{
    char *entry;

    if (self[0] == 2) {
        if ((unsigned char)((unsigned int)self[2] >> 31) != 0) {
            entry = lbl_832179FC + 0x8f108;
        } else {
            entry = lbl_832179FC + 0x8f274;
        }
        return *(unsigned int *)(entry + 4);
    }
    if ((unsigned char)((unsigned int)self[2] >> 31) != 0) {
        entry = lbl_832179FC + 0x8f108;
    } else {
        entry = lbl_832179FC + 0x8f274;
    }
    return *(unsigned int *)entry;
}
