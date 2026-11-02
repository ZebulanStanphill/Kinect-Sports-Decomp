extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140168(void);
extern unsigned int lbl_83211840;
extern char lbl_83211824[];

char *fn_8286AF48(void)
{
  if ((lbl_83211840 & 1) == 0) {
    lbl_83211840 = lbl_83211840 | 1;
    fn_82230110(lbl_83211824, "WAITING_FOR_UNLOAD_TO_COMPLETE");
    atexit(fn_83140168);
  }
  return lbl_83211824;
}
