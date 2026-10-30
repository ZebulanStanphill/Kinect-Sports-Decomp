extern void fn_82F4E3F0(void);
extern void *fn_82F5B5E8(void);
extern int fn_82F5B710(void *a, void *b, int c);
extern void fn_82F4ED00(void *slot, int i);
extern void *lbl_8320A898;

typedef struct { char data[0xd00]; } Slot;

void fn_82F52700(Slot *slots)
{
    int i;
    void *h;
    fn_82F4E3F0();
    h = fn_82F5B5E8();
    if (fn_82F5B710(h, lbl_8320A898, 2) >= 0) {
        for (i = 0; i < 10; i++) {
            fn_82F4ED00(slots, i);
            slots++;
        }
    }
}
