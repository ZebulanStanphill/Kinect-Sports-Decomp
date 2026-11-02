extern void fn_82F53118(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83141BD8(void);
extern unsigned int lbl_83262528;
extern char lbl_83262510[];

char *fn_82F53208(void)
{
  if ((lbl_83262528 & 1) == 0) {
    lbl_83262528 = lbl_83262528 | 1;
    fn_82F53118(lbl_83262510, "NUIGestureFactory");
    atexit(fn_83141BD8);
  }
  return lbl_83262510;
}
