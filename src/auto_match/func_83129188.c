extern char lbl_8321434C[];
extern void fn_828C61B8(void *p);
extern void fn_831412B8(void);
extern int atexit(void (*func)(void));

void fn_83129188(void)
{
    fn_828C61B8(lbl_8321434C);
    atexit(fn_831412B8);
}
