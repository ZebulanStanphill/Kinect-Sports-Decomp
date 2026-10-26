extern char lbl_831E7A84[];
extern void fn_8266A030(void *p);
extern void fn_8313FC48(void);
extern int atexit(void (*func)(void));

void fn_83127738(void)
{
    fn_8266A030(lbl_831E7A84);
    atexit(fn_8313FC48);
}
