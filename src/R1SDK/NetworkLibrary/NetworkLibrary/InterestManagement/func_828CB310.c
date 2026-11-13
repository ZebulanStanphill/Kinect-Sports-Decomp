extern int fn_8251C390(void *scope, const char *file, int line);
extern int fn_828CAB48(void *obj);
extern int fn_829E53B0(void *scope);
extern void fn_83141310(void);
extern int atexit(void (*fn)(void));
extern unsigned int lbl_832143C0;
extern char lbl_83214380[];

char *fn_828CB310(void)
{
  unsigned char auStack_20[16];

  fn_8251C390(auStack_20, ".\\InterestManagement.cpp", 0x3d);
  if ((lbl_832143C0 & 1) == 0) {
    lbl_832143C0 = lbl_832143C0 | 1;
    fn_828CAB48(lbl_83214380);
    atexit(fn_83141310);
  }
  fn_829E53B0(auStack_20);
  return lbl_83214380;
}
