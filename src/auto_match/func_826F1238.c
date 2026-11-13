extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826F1238(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  uVar5 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    iVar6 = 0;
    do {
      if (uVar1 <= uVar5) {
        return;
      }
      if (uVar5 < 0x10) {
        iVar3 = iVar6 + param_1 + 0x24 + 0x10;
        piVar4 = (int *)(iVar6 + param_1 + 0x24 + 0x10);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x28) + iVar6 + -0xc0;
        piVar4 = (int *)(*(int *)(param_1 + 0x28) + iVar6 + -0xc0);
      }
      if (*piVar4 == 0) {
        uVar7 = (unsigned __int64)*(unsigned char *)(iVar3 + 8);
        if ((param_3 & 0xffffffff) < (unsigned __int64)*(unsigned char *)(iVar3 + 8)) {
          uVar7 = param_3;
        }
        uVar2 = *(unsigned int *)(iVar3 + 4);
LAB_826f130c:
        fn_82F68CC0(param_2,uVar2,uVar7);
        param_2 = uVar7 + param_2;
        param_3 = param_3 - uVar7;
      }
      else if ((*piVar4 == 2) && (*(int **)(iVar3 + 4) != (int *)0x0)) {
        (**(int (***)())(**(int **)(iVar3 + 4) + 0x10))(&uStack_50);
        uVar7 = (unsigned __int64)uStack_4c;
        uVar2 = uStack_50;
        if ((param_3 & 0xffffffff) < (unsigned __int64)uStack_4c) {
          uVar7 = param_3;
        }
        goto LAB_826f130c;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while ((param_3 & 0xffffffff) != 0);
  }
  return;
}

