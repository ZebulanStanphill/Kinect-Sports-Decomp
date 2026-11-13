extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82522D98();
extern unsigned int lbl_82196288;


void fn_8252C088(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = param_2;
  if (param_2 == (unsigned int *)0x0) {
    puVar2 = &lbl_82196288;
  }
  *(unsigned int *)(param_1 + 8) = *puVar2;
  puVar2 = &lbl_82196288;
  if (param_3 != (unsigned int *)0x0) {
    puVar2 = param_3;
  }
  *(unsigned int *)(param_1 + 0xc) = *puVar2;
  if (param_2 != (unsigned int *)0x0) {
    uVar3 = (unsigned __int64)*param_2;
    if (uVar3 != (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) {
      uVar5 = fn_8251F720(param_2,1);
      if (uVar5 != 0) {
        uVar1 = fn_8251FBA8(uVar5);
        *(unsigned int *)(param_1 + 0x10) = uVar1 >> 5;
      }
    }
  }
  if (param_3 != (unsigned int *)0x0) {
    uVar3 = (unsigned __int64)*param_3;
    if ((uVar3 != (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) &&
       (uVar4 = fn_8251F720(param_3,1), uVar4 != 0)) {
      uVar1 = fn_8251FBA8(uVar4);
      *(unsigned int *)(param_1 + 0x34) = uVar1 >> 5;
    }
  }
  if (((uVar5 & 0xffffffff) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(*(int *)(param_1 + 0x10) << 2);
  }
  if (((uVar4 & 0xffffffff) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(*(int *)(param_1 + 0x34) << 2);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8251FA58(uVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8251FA58(uVar4);
  }
  return;
}

