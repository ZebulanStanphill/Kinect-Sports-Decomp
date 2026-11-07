typedef struct Entry_82F0E010 {
    unsigned int a;
    unsigned int b;
    char pad[0x3c0];
} Entry_82F0E010;

typedef struct Obj_82F0E010 {
    char pad0[0x658];
    unsigned int count;
    char pad65C[0xdec - 0x65c];
    Entry_82F0E010 entries[16];
    char padEnd[0x4e4c - (0xdec + 16 * 0x3c8)];
    int mode;
    void *tabA;
    void *tabB;
    char pad4E58[0x7944 - 0x4e58];
    int state;
} Obj_82F0E010;

extern char lbl_831AA090[];
extern char lbl_831A9CD0[];
extern char lbl_831AA810[];
extern char lbl_831AA450[];

void fn_82F0E010(Obj_82F0E010 *p)
{
    unsigned int i;
    unsigned int sb;
    unsigned int sa;

    sb = 0;
    sa = 0;
    for (i = 0; i < p->count; i++) {
        sb += p->entries[i].b;
        sa += p->entries[i].a;
    }
    if (sb <= sa) {
        p->mode = 0;
        p->tabA = lbl_831A9CD0;
        p->tabB = lbl_831AA090;
    } else {
        p->mode = 1;
        p->tabA = lbl_831AA450;
        p->tabB = lbl_831AA810;
    }
    if (p->state != 2) {
        if (p->state == 0) {
            p->tabA = lbl_831A9CD0;
            p->tabB = lbl_831AA090;
            p->mode = 0;
        } else {
            p->tabA = lbl_831AA450;
            p->tabB = lbl_831AA810;
            p->mode = 1;
        }
    }
}
