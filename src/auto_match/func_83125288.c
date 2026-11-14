extern void *lbl_83296E18[6];
extern void fn_8313F6D8(void);
extern int atexit(void (*func)(void));

void fn_83125288(void)
{
    int i;
    for (i = 0; i < 6; i++) {
        lbl_83296E18[i] = 0;
    }
    atexit(fn_8313F6D8);
}
