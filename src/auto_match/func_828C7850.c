extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern int fn_82F622E0();
extern unsigned int lbl_82026234;
extern unsigned int lbl_82026238;


void fn_828C7850(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = &lbl_82026238;
  param_1[0x14] = &lbl_82026234;
  piVar5 = param_1 + 0x24;
  uVar4 = 0;
  uVar3 = (int)(param_1[0x25] - param_1[0x24]) >> 2;
  if (uVar3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *piVar5;
      if ((unsigned int)(param_1[0x25] - iVar1 >> 2) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      puVar2 = *(unsigned int **)(iVar6 + iVar1);
      *(unsigned int *)(iVar6 + iVar1) = 0;
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar3);
  }
  if (*piVar5 != 0) {
    fn_8265CA20();
  }
  *piVar5 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

