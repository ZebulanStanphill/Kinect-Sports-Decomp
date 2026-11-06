typedef struct Slot_8255B740 { void *obj; void *arg; int used; } Slot_8255B740;
typedef struct Group_8255B740 { Slot_8255B740 slots[5]; int pad[7]; int busy; int pad2[2]; } Group_8255B740;
typedef struct Mgr_8255B740 { char pad[0xa00]; Group_8255B740 groups[1]; } Mgr_8255B740;

extern Mgr_8255B740 lbl_8327FFF8;
extern unsigned char fn_828EA5F8(void);
extern unsigned char fn_828EA600(void *o);
extern unsigned char fn_828EA610(void *o);
extern int fn_823AB478(void *o);
extern void fn_8255B938(unsigned char g);

void fn_8255B740(unsigned char *o, void *arg)
{
    int g;
    int i;
    if (fn_828EA5F8() && !fn_828EA600(o) && !fn_828EA610(o) && o[0xd8] == 0) {
        g = fn_823AB478(o);
        for (i = 0; i < 5; i++) {
            if (lbl_8327FFF8.groups[g].slots[i].used == 0) {
                lbl_8327FFF8.groups[g].slots[i].used = 1;
                lbl_8327FFF8.groups[g].slots[i].arg = arg;
                lbl_8327FFF8.groups[g].slots[i].obj = o;
                if (lbl_8327FFF8.groups[g].busy == 0) {
                    fn_8255B938(g);
                }
                return;
            }
        }
    }
}
