extern char lbl_831E7AF4[];
extern void fn_8266B0A8(void *p);
extern void fn_8313FC70(void);
extern int atexit(void (*func)(void));

void fn_83127770(void)
{
    fn_8266B0A8(lbl_831E7AF4);
    atexit(fn_8313FC70);
}
