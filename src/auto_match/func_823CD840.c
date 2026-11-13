extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_823CD8F8();
extern int fn_82250A18();
extern int fn_82250C58();
extern int fn_822EFBF0();
extern int fn_823CD8F8();
extern int fn_823E6F50();
extern int fn_823EAE70();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;


void fn_823CD840(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  unsigned char auStack_a0 [128];

  fn_82250C58(auStack_a0);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E6F50(param_1,param_2,param_3,auStack_a0);
  }
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823CD8F8(param_1,param_2,param_3,auStack_a0);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar2 = (unsigned int *)fn_822EFBF0(auStack_b0);
    fn_823EAE70(*puVar2,param_2,param_3,auStack_a0);
    if (iStack_ac != 0) {
      fn_823CD8F8();
    }
  }
  return;
}
