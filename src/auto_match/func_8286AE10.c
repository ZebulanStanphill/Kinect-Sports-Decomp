extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140120(void);
extern unsigned int lbl_832117E0;
extern char lbl_832117C4[];

char *fn_8286AE10(void)
{
  if ((lbl_832117E0 & 1) == 0) {
    lbl_832117E0 = lbl_832117E0 | 1;
    fn_82230110(lbl_832117C4, "LOADED");
    atexit(fn_83140120);
  }
  return lbl_832117C4;
}
