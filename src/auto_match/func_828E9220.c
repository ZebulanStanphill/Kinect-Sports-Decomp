typedef unsigned char undefined1;

extern int fn_8251C390();
extern int fn_828E2F58();
extern int fn_829E53B0();
extern void fn_83141858(void);
extern int atexit(void (*func)(void));
extern unsigned int lbl_832144AC;
extern char lbl_8321449C[];

void *fn_828E9220(void)
{
  undefined1 auStack_30[16];
  undefined1 auStack_20[16];

  fn_8251C390(auStack_20,
              "D:\\Work\\R1SDK\\Olympus_testing\\NetworkLibrary\\NetworkLibrary\\NetworkWrapperAdditional\\Function\\FunctionNetObj.cpp",
              0x6e);
  if ((lbl_832144AC & 1) == 0) {
    lbl_832144AC = lbl_832144AC | 1;
    fn_828E2F58(lbl_8321449C, auStack_30, auStack_30);
    atexit(fn_83141858);
  }
  fn_829E53B0(auStack_20);
  return lbl_8321449C;
}
