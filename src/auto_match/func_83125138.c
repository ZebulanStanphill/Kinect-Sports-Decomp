extern int lbl_83296D40[];
extern void fn_8313F630(void);
extern int atexit(void (*)(void));
int fn_83125138(void)
{
    int i;
    for (i = 3; i < 7; ++i) lbl_83296D40[i] = 0;
    return atexit(fn_8313F630);
}
