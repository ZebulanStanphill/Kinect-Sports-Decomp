extern void fn_82674748(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_831412C8(void);
extern char lbl_83214368[];

void fn_831291C0(void)
{
    char tmp[1];

    fn_82674748(lbl_83214368, tmp, tmp);
    atexit(fn_831412C8);
}
