extern int fn_8251C390(void *scope, const char *file, int line);
extern int fn_828E2F58(void *obj, void *a, void *b);
extern int fn_829E53B0(void *scope);
extern int atexit(void (*fn)(void));
extern void fn_83141698(void);
extern unsigned int lbl_83214488;
extern char lbl_83214478[];

void *fn_828E8EF8(void)
{
  unsigned char auStack_30[16];
  unsigned char auStack_20[16];

  fn_8251C390(auStack_20,"D:\\Work\\R1SDK\\Olympus_testing\\NetworkLibrary\\NetworkLibrary\\NetworkWrapperAdditional\\Function\\FunctionNetObj.cpp",0x60);
  if ((lbl_83214488 & 1) == 0) {
    lbl_83214488 = lbl_83214488 | 1;
    fn_828E2F58(lbl_83214478,auStack_30,auStack_30);
    atexit(fn_83141698);
  }
  fn_829E53B0(auStack_20);
  return lbl_83214478;
}
