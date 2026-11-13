extern int fn_8265C990();
extern int fn_82F691F0();


void fn_82656468(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x5e6c);
  if (iVar1 != 0) {
    if ((*(unsigned int *)(param_1 + 0x5e80) & 0x8000000) == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else {
      fn_8265C990(iVar1,0x24800000);
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x5e80) >> 0x1e;
    if (iVar2 == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else if (iVar2 == 1) {
      fn_8265C990(iVar1,0xffffffffb1800000);
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c20);
  if (iVar1 != 0) {
    iVar2 = (int)(*(unsigned int *)(param_1 + 0x5e80) << 2 | *(unsigned int *)(param_1 + 0x5e80) >> 0x1e) >> 0x1e;
    if (iVar2 == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else if (iVar2 == 1) {
      fn_8265C990(iVar1,0xffffffffb1800000);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((int *)(param_1 + 0x5c1c),0,0x26c);
}

