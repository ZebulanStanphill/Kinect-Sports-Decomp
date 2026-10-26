extern char lbl_832195A0[];
extern void fn_82A33CE8(void *p);
extern void fn_83141A68(void);
extern int atexit(void (*func)(void));

void fn_8312A2E8(void)
{
    fn_82A33CE8(lbl_832195A0);
    atexit(fn_83141A68);
}
