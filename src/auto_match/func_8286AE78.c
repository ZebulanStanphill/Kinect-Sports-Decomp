extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140138(void);
extern unsigned int lbl_83211800;
extern char lbl_832117E4[];

char *fn_8286AE78(void)
{
  if ((lbl_83211800 & 1) == 0) {
    lbl_83211800 = lbl_83211800 | 1;
    fn_82230110(lbl_832117E4, "LOAD_FAILED");
    atexit(fn_83140138);
  }
  return lbl_832117E4;
}
