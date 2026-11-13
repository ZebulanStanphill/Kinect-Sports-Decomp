#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82AA68E0();
extern int fn_82F691F0();


unsigned int * fn_82ABE1E8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  puVar2 = *(unsigned int **)(param_2 + 0x90);
  if (0xf < (*(int *)(param_2 + 0x8c) - (int)puVar2) + 0x1000U) {
    *(unsigned int **)(param_2 + 0x90) = puVar2 + 4;
    return puVar2;
  }
  puVar2 = *(unsigned int **)(param_2 + 0xc);
  if (puVar2 != (unsigned int *)0x0) {
    *(unsigned int *)(param_2 + 0xc) = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    return puVar2;
  }
  uVar4 = 0x14;
  while( true ) {
    if (0x84 < (uVar4 & 0xffffffff)) {
      puVar2 = *(unsigned int **)(param_2 + 0x90);
      uVar4 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x8c) - ZEXT48(puVar2)) + 0x1000;
      if (uVar4 != 0) {
        iVar1 = (int)((((uVar4 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        *puVar2 = *(unsigned int *)(iVar1 + param_2);
        *(unsigned int **)(iVar1 + param_2) = puVar2;
      }
      iVar1 = *(int *)(*(int *)(param_2 + 0x8c) + 4);
      *(int *)(param_2 + 0x8c) = iVar1;
      if (iVar1 == 0) {
        uVar3 = fn_82AA68E0(param_2);
        *(unsigned int *)(param_2 + 0x8c) = uVar3;
        if (*(int *)(param_2 + 0x88) != 0) {
          *(unsigned int *)(*(int *)(param_2 + 0x88) + 4) = uVar3;
        }
        *(unsigned int *)(param_2 + 0x88) = *(unsigned int *)(param_2 + 0x8c);
      }
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x8c) + 0x18;
      return (unsigned int *)(*(int *)(param_2 + 0x8c) + 8);
    }
    iVar1 = (int)((((uVar4 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar2 = *(unsigned int **)(iVar1 + param_2);
    if (puVar2 != (unsigned int *)0x0) break;
    uVar4 = uVar4 + 4;
  }
  *(unsigned int *)(iVar1 + param_2) = *puVar2;
  if (0x10 < (uVar4 & 0xffffffff)) {
    iVar1 = (int)((((uVar4 - 0x10 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar2[4] = *(unsigned int *)(iVar1 + param_2);
    *(unsigned int **)(iVar1 + param_2) = puVar2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2,0,0x10);
}

