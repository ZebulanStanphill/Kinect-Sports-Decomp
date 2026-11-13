#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82AA68E0();
extern int fn_82F691F0();


void fn_82ABDF50(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = param_2;
  do {
    uVar5 = uVar5 + 4;
    iVar3 = (int)param_2;
    if (0x84 < (uVar5 & 0xffffffff)) {
      puVar1 = *(unsigned int **)(param_1 + 0x90);
      uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) - ZEXT48(puVar1)) + 0x1000;
      if (uVar5 != 0) {
        iVar2 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        *puVar1 = *(unsigned int *)(iVar2 + param_1);
        *(unsigned int **)(iVar2 + param_1) = puVar1;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 4);
      *(int *)(param_1 + 0x8c) = iVar2;
      if (iVar2 == 0) {
        uVar4 = fn_82AA68E0(param_1);
        *(unsigned int *)(param_1 + 0x8c) = uVar4;
        if (*(int *)(param_1 + 0x88) != 0) {
          *(unsigned int *)(*(int *)(param_1 + 0x88) + 4) = uVar4;
        }
        *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_1 + 0x8c);
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x8c) + 8 + iVar3;
      return;
    }
    iVar2 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar1 = *(unsigned int **)(iVar2 + param_1);
  } while (puVar1 == (unsigned int *)0x0);
  *(unsigned int *)(iVar2 + param_1) = *puVar1;
  if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    iVar2 = (int)((((uVar5 - param_2 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    *(unsigned int *)((int)puVar1 + iVar3) = *(unsigned int *)(iVar2 + param_1);
    *(int *)(iVar2 + param_1) = (int)puVar1 + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar1,0,param_2);
}

