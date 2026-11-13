typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82681898();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826972E0();
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000000;


void fn_82713238(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar8;
  
  uVar3 = ZEXT48(&stack0x00000000);
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar6 != 9)) ||
     (cVar7 = (**(int (***)())(**(int **)(param_1 + 8) + 0x40))(), cVar7 != '\0')) {
    uVar4 = lbl_82005710;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      uVar4 = fn_826972E0(uVar4,uVar2);
    }
    fn_82681898(uVar4,*(unsigned int *)(param_1 + 4));
  }
  else {
    piVar8 = (int *)(*(int *)(param_1 + 8) + -0x10);
    if (*(int *)(param_1 + 8) == 0) {
      piVar8 = (int *)0x0;
    }
    bVar1 = *(int *)(param_1 + 0x1c) < 1;
    if (bVar1) {
      lVar5 = uVar3 - 0x50;
    }
    else {
      uVar4 = fn_826957D0(param_1,0);
      lVar5 = fn_82695DA0(uVar3 - 0x40,uVar4);
    }
    fn_82695DA0(uVar3 - 0x60,lVar5);
    if (bVar1) {
      fn_82696330(uVar3 - 0x50);
    }
    else {
      fn_82696330(uVar3 - 0x40);
    }
    (**(int (***)())(*piVar8 + 0xc))(piVar8,*(unsigned int *)(param_1 + 0x18),uVar3 - 0x60);
    fn_82695FA0(*(unsigned int *)(param_1 + 4),uVar3 - 0x60);
    fn_82696330(uVar3 - 0x60);
  }
  return;
}

