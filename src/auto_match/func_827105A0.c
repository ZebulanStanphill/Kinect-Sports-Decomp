typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696D38();
extern unsigned int iStack_60;
extern unsigned int stack0x00000000;


void fn_827105A0(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar8;
  int iStack_60;
  
  uVar3 = ZEXT48(&stack0x00000000);
  piVar8 = (int *)0x0;
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar6 != 8)) ||
     (cVar7 = (**(int (***)())(**(int **)(param_1 + 8) + 0x40))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_82681838(*(unsigned int *)(param_1 + 4),
                        (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(uVar3 - 0x60,uVar4,uVar2,0xffffffffffffffff,0);
      fn_82681838(*(unsigned int *)(param_1 + 4),uVar3 - 0x60);
      lVar5 = (unsigned __int64)*(unsigned int *)(iStack_60 + 8) - 1;
      *(int *)(iStack_60 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(iStack_60);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      piVar8 = (int *)(*(int *)(param_1 + 8) + -0x10);
    }
    bVar1 = *(int *)(param_1 + 0x1c) < 1;
    if (bVar1) {
      lVar5 = uVar3 - 0x50;
      iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    else {
      uVar4 = fn_826957D0(param_1,0);
      lVar5 = fn_82695DA0(uVar3 - 0x30,uVar4);
    }
    fn_82695DA0(uVar3 - 0x40,lVar5);
    if (bVar1) {
      fn_82696330(uVar3 - 0x50);
    }
    else {
      fn_82696330(uVar3 - 0x30);
    }
    (**(int (***)())(*piVar8 + 0xc))(piVar8,*(unsigned int *)(param_1 + 0x18),uVar3 - 0x40);
    fn_82695FA0(*(unsigned int *)(param_1 + 4),uVar3 - 0x40);
    fn_82696330(uVar3 - 0x40);
  }
  return;
}

