extern int fn_8228E7E8();
extern int fn_8265C9E0();


void fn_822A96A8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x10);
  piVar5 = (int *)(iVar2 + 0x44);
  if (piVar5 != (int *)0x0) {
    if ((*piVar5 != 0) && (iVar2 != -0x48)) {
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x48);
      if (uVar4 != (uVar4 - 1) + (unsigned __int64)(uVar4 == 0)) {
        uVar4 = fn_8265C9E0(0x98);
        if ((uVar4 & 0xffffffff) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = fn_8228E7E8((double)*(float *)(iVar2 + 0x40),uVar4,
                                  *(unsigned int *)(param_1 + 4),piVar5,(unsigned int *)(iVar2 + 0x48),
                                  param_1 + 0x24,iVar2 + 0x4c,iVar2 + 0x50);
        }
        puVar1 = *(unsigned int **)(param_1 + 0x2c);
        *(unsigned int *)(param_1 + 0x2c) = uVar3;
        if (puVar1 != (unsigned int *)0x0) {
          (**(int (***)())*puVar1)(puVar1,1);
        }
        *(int *)(param_1 + 0x30) = param_2;
      }
    }
  }
  return;
}

