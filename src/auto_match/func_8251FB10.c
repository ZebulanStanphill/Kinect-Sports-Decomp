extern long _InterlockedIncrement(long *);
extern long _InterlockedDecrement(long *);
extern void fn_82558B08(void);
extern void fn_82599418(void);
extern void *fn_827D5670(void *queue, int flags);
extern long lbl_832767A8;
extern void *lbl_83265A24;

void fn_8251FB10(void)
{
    _InterlockedIncrement(&lbl_832767A8);
    while (fn_827D5670(lbl_83265A24, 0) != 0) {
        fn_82558B08();
        fn_82599418();
    }
    _InterlockedDecrement(&lbl_832767A8);
}
