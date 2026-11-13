typedef struct { int ptr; unsigned int rc; } SPtr_8246FA68;
extern void fn_822315A0(unsigned int);
extern void fn_82356F98(SPtr_8246FA68 *);
extern void fn_823F2E20(char *, SPtr_8246FA68 *);
extern char *lbl_832766D4;

int fn_8246FA68(int *param_1)
{
  int uVar1;
  SPtr_8246FA68 sp;

  uVar1 = *(int *)(lbl_832766D4 + 0x308);
  *(int *)(lbl_832766D4 + 0x308) = 0;
  fn_82356F98(&sp);
  fn_823F2E20(lbl_832766D4 + 0x300,&sp);
  if (sp.rc != 0) {
    fn_822315A0(sp.rc);
  }
  fn_82356F98(&sp);
  fn_823F2E20(lbl_832766D4 + 0x310,&sp);
  if (sp.rc != 0) {
    fn_822315A0(sp.rc);
  }
  *param_1 = 1;
  return uVar1;
}
