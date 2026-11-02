extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_831400F0(void);
extern unsigned int lbl_832117A0;
extern char lbl_83211784[];

char *fn_8286AD40(void)
{
  if ((lbl_832117A0 & 1) == 0) {
    lbl_832117A0 = lbl_832117A0 | 1;
    fn_82230110(lbl_83211784, "TRIGGER_LOAD");
    atexit(fn_831400F0);
  }
  return lbl_83211784;
}
