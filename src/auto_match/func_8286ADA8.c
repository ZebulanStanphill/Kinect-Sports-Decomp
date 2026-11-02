extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140108(void);
extern unsigned int lbl_832117C0;
extern char lbl_832117A4[];

char *fn_8286ADA8(void)
{
  if ((lbl_832117C0 & 1) == 0) {
    lbl_832117C0 = lbl_832117C0 | 1;
    fn_82230110(lbl_832117A4, "WAITING_FOR_LOAD_TO_COMPLETE");
    atexit(fn_83140108);
  }
  return lbl_832117A4;
}
