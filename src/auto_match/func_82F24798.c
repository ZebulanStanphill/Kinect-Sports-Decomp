extern int fn_82F691F0();


unsigned __int64 fn_82F24798(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4db0) * 0x4c0 + (unsigned __int64)*(unsigned int *)(param_1 + 0x73f4);
  if (7 < (int)*(unsigned int *)(param_1 + 0x4db0)) {
    iVar4 = *(int *)(param_1 + 0x4dac);
    if (iVar4 < 0x200) {
      iVar2 = 0x200 - iVar4;
      piVar3 = (int *)((iVar4 + 0x112a) * 4 + param_1);
      iVar4 = (iVar4 * 3 + 0xb2b) * 4 + param_1;
      do {
        piVar3 = piVar3 + 1;
        *piVar3 = iVar4;
        iVar4 = iVar4 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(unsigned int *)(param_1 + 0x4dac) = 0x1ff;
    fn_82F691F0(param_1 + 0x4cac,0,0x100);
    *(unsigned int *)(param_1 + 0x4db0) = 0;
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x73f4);
  }
  *(int *)(param_1 + 0x4db0) = *(int *)(param_1 + 0x4db0) + 1;
  return uVar1;
}

