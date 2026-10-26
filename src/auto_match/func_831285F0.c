extern void fn_828A2240(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_831407D8(void);
extern char lbl_83212A00[];

void fn_831285F0(void)
{
    char tmp[1];

    fn_828A2240(lbl_83212A00, tmp, tmp);
    atexit(fn_831407D8);
}
