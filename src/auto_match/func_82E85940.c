extern unsigned short lbl_83256DB0[];
struct Table {
    unsigned short data[0x2000];
    unsigned short extra[1];
};
unsigned short fn_82E85940(void *unused, int index) {
    return ((struct Table *)lbl_83256DB0)->extra[index];
}
