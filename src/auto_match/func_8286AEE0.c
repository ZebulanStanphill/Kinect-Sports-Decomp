extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140150(void);
extern unsigned int lbl_83211820;
extern char lbl_83211804[];

char *fn_8286AEE0(void)
{
  if ((lbl_83211820 & 1) == 0) {
    lbl_83211820 = lbl_83211820 | 1;
    fn_82230110(lbl_83211804, "TRIGGER_UNLOAD");
    atexit(fn_83140150);
  }
  return lbl_83211804;
}
