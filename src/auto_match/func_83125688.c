extern void fn_82511350(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_8313F8F8(void);
extern char lbl_83296FF4[];

void fn_83125688(void)
{
    char tmp[1];

    fn_82511350(lbl_83296FF4, tmp, tmp);
    atexit(fn_8313F8F8);
}
