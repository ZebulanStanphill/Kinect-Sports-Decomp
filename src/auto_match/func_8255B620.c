typedef struct Entry_8255B620 {
    int owner;
    unsigned int id;
    int state;
} Entry_8255B620;

typedef struct Row_8255B620 {
    Entry_8255B620 e[50];
    int pad[7];
    int flag;
    int pad2[2];
} Row_8255B620;

extern unsigned char fn_828EA5F8(int p);
extern unsigned char fn_828EA600(int p);
extern unsigned char fn_828EA610(int p);
extern int fn_823AB478(int p);
extern void fn_8255B830(unsigned char idx);
extern Row_8255B620 lbl_8327FFF8[];

void fn_8255B620(int param_1, unsigned int param_2)
{
    int idx;
    int i;

    if (fn_828EA5F8(param_1) == 0) {
        return;
    }
    if (fn_828EA600(param_1) != 0) {
        return;
    }
    if (fn_828EA610(param_1) != 0) {
        return;
    }
    if (*(unsigned char *)(param_1 + 0xd8) != 0) {
        return;
    }
    idx = fn_823AB478(param_1);
    for (i = 0; i < 50; i++) {
        if (lbl_8327FFF8[idx].e[i].id == param_2 && lbl_8327FFF8[idx].e[i].state == 1) {
            return;
        }
    }
    for (i = 0; i < 50; i++) {
        if (lbl_8327FFF8[idx].e[i].state == 0) {
            lbl_8327FFF8[idx].e[i].owner = param_1;
            lbl_8327FFF8[idx].e[i].state = 1;
            lbl_8327FFF8[idx].e[i].id = param_2;
            if (lbl_8327FFF8[idx].flag == 0) {
                fn_8255B830((unsigned char)idx);
            }
            return;
        }
    }
}
