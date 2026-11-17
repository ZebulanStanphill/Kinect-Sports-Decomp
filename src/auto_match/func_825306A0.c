extern void *lbl_8320A898;
extern int lbl_83296890[];
extern void fn_82530948(void *);
extern void fn_825315E0(void *);
extern void fn_82531118(void);

void fn_825306A0(unsigned int state)
{
    void *self = lbl_8320A898;
    switch (state) {
    case 0:
        if (lbl_83296890[0x31c / 4] != 0) {
            lbl_83296890[0x31c / 4] = 0;
            lbl_83296890[0x32c / 4] = 1;
            lbl_83296890[0x320 / 4] = 1;
            lbl_83296890[0x324 / 4] = 1;
            fn_82530948(self);
            fn_825315E0(self);
            fn_82531118();
        }
        break;
    case 1:
        lbl_83296890[0x328 / 4] = 1;
        fn_825315E0(self);
        break;
    }
}
