typedef unsigned char bool;
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82368C30();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_82193B00;


void fn_822B1070(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar1);
  bVar4 = false;
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  iVar5 = *(int *)(*(unsigned int *)(param_1 + 0x10) + 0x9a0);
  uVar2 = *(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10);
  uVar7 = (unsigned __int64)uVar2;
  if (iVar5 != 0) {
    bVar4 = uVar2 == *(unsigned int *)(iVar5 + 0x2c);
  }
  if (bVar4) {
    uVar6 = 2;
LAB_822b1120:
    fn_8236A928(uVar9,iVar5,uVar6);
    return;
  }
  iVar5 = fn_82368C30(uVar9);
  if ((iVar5 != 0) && ((unsigned __int64)*(unsigned int *)(iVar5 + 0x2c) == (uVar7 & 0xffffffff))) {
    iVar3 = *(int *)((int)uVar9 + 0x41c);
    if ((0 < iVar3) &&
       (((iVar3 < 3 || (iVar3 == 10)) && (*(float *)((int)uVar9 + 0x428) < lbl_82193B00)))) {
      uVar6 = 4;
      goto LAB_822b1120;
    }
  }
  fn_8236BA88(uVar8);
  return;
}

