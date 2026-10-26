extern char lbl_831E7B08[];
extern void fn_8266B188(void *p);
extern void fn_8313FC98(void);
extern int atexit(void (*func)(void));

void fn_831277A8(void)
{
    fn_8266B188(lbl_831E7B08);
    atexit(fn_8313FC98);
}
