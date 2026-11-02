extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140180(void);
extern unsigned int lbl_83211860;
extern char lbl_83211844[];

char *fn_8286AFB0(void)
{
  if ((lbl_83211860 & 1) == 0) {
    lbl_83211860 = lbl_83211860 | 1;
    fn_82230110(lbl_83211844, "UNLOADED");
    atexit(fn_83140180);
  }
  return lbl_83211844;
}
