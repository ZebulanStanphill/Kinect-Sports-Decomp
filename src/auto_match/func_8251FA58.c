extern long _InterlockedIncrement(long *);
extern long _InterlockedDecrement(long *);
extern void fn_827D55A0(void *queue, int arg, int *result);
extern unsigned int fn_82A1BB18(void);
extern void *fn_8259A230(unsigned int threadId);
extern void fn_82558B08(void);
extern long lbl_832767A8;
extern void *lbl_83265A24;

int fn_8251FA58(int arg)
{
    int result;
    long depth = _InterlockedIncrement(&lbl_832767A8);

    result = 0;
    fn_827D55A0(lbl_83265A24, arg, &result);
    if (fn_8259A230(fn_82A1BB18()) == 0 && depth == 1) {
        fn_82558B08();
    }
    _InterlockedDecrement(&lbl_832767A8);
    return result;
}
