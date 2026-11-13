#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;


int fn_8309AA78(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    lVar3 = ZEXT48(&stack0x00000000) - 0x34;
    iVar2 = *(int *)(param_3 + 0xc);
    do {
      iVar1 = iVar2;
      lVar3 = lVar3 + 4;
      *(int *)lVar3 = param_3;
      iVar2 = *(int *)(iVar1 + 0xc);
      uVar5 = uVar5 + 1;
      param_3 = iVar1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (0 < (int)uVar5) {
    puVar4 = (unsigned int *)(param_1 + -4);
    lVar3 = (uVar5 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x30);
    do {
      if (param_2 + -1 <= iVar2) break;
      lVar3 = lVar3 + -4;
      uVar5 = uVar5 - 1;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *(unsigned int *)(*(int *)lVar3 + 4);
    } while (0 < (__int64)uVar5);
  }
  *(unsigned int *)(iVar2 * 4 + param_1) = 0xffffffff;
  return iVar2 + 1;
}

