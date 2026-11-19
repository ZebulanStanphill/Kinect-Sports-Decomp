typedef struct Flags_82231390 {
    unsigned char pending; /* 0x0 */
    char pad1[5];
    unsigned char disabled; /* 0x6 */
} Flags_82231390;

typedef struct Screen_82231390 {
    char pad0[0x58];
    void *widget;          /* 0x58 */
    unsigned char refresh; /* 0x5c */
    char pad5d[3];
    int busy; /* 0x60 */
} Screen_82231390;

extern void *lbl_832760A4;
extern Flags_82231390 lbl_832766F1;
extern void *lbl_83297810;
extern void fn_8229E090(void *widget, int a, int b);
extern void *fn_82511928(void);
extern void fn_82512A48(void *p);
extern void fn_82513D20(void *manager, int a, int b);
extern void fn_82514888(int *values);

void fn_82231390(int event, Screen_82231390 *screen)
{
    int values[3];

    if (event != 2) {
        fn_8229E090(screen->widget, 0, 1);
        screen->widget = 0;
        fn_82513D20(lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), 1, 0);
        if (lbl_832766F1.disabled == 0 && screen->busy == 0) {
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            fn_82514888(values);
        }
        if (screen->refresh != 0 && screen->busy == 0) {
            values[0] = 0;
            values[1] = 0;
            lbl_832766F1.pending = 0;
            values[2] = 0;
            fn_82514888(values);
        }
    } else {
        if (lbl_832760A4 != 0) {
            fn_82512A48(lbl_832760A4);
            lbl_832760A4 = 0;
        }
        screen->widget = 0;
    }
}
