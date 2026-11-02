extern void fn_82230110(void *, const char *);
extern int atexit(void (*)(void));
extern void fn_83140198(void);
extern unsigned int lbl_83211880;
extern char lbl_83211864[];

char *fn_8286B018(void)
{
  if ((lbl_83211880 & 1) == 0) {
    lbl_83211880 = lbl_83211880 | 1;
    fn_82230110(lbl_83211864, "UNLOAD_FAILED");
    atexit(fn_83140198);
  }
  return lbl_83211864;
}
