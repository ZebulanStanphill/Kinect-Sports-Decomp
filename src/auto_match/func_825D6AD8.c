extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8262F8D8();


void fn_825D6AD8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x120) = 0;
    *(unsigned int *)(param_1 + 0x124) = 0;
  }
  if (*(int *)(param_1 + 300) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 300) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x134);
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x114) = 0;
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
    fn_8262F8D8(iVar1,10,0,uVar2,0,uVar2,*(unsigned int *)(iVar1 + 0x1c) & 0x3fffffc,0);
  }
  *(unsigned int *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    fn_82522ED8();
    *(unsigned int *)(param_1 + 0x13c) = 0;
  }
  *(unsigned int *)(param_1 + 0x140) = 0;
  *(unsigned int *)(param_1 + 0x170) = 0;
  *(unsigned int *)(param_1 + 0x174) = 0;
  *(unsigned int *)(param_1 + 0x178) = 0;
  fn_82522ED8(param_1);
  return;
}

