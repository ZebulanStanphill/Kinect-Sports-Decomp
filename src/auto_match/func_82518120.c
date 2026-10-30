extern unsigned int lbl_8329906C;
extern char lbl_83297924[];
extern void fn_82518170(void);
extern void fn_8313F2B0(void);
int atexit(void (*f)(void));

void *fn_82518120(void)
{
    if ((lbl_8329906C & 1) == 0) {
        lbl_8329906C |= 1;
        fn_82518170();
        atexit(fn_8313F2B0);
    }
    return lbl_83297924;
}
