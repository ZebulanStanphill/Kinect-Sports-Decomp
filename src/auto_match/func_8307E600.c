unsigned __int64 fn_8307E600(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  uVar1 = *(unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8)) >> 0x14;
  uVar3 = (unsigned int)((param_4 & 0xffffffff) >> 0xb);
  if ((uVar1 & 1) == 0) {
    uVar2 = MmGetPhysicalAddress(param_3);
    puVar4[5] = uVar2;
    *puVar4 = *puVar4 & 0xfffff000 | uVar3 & 0xfff | 0x100000;
    puVar4[0x15] = (unsigned int)param_3;
  }
  else {
    if ((uVar1 & 2) != 0) {
      return 0xffffffff80070005;
    }
    uVar2 = MmGetPhysicalAddress(param_3);
    puVar4[6] = uVar2;
    puVar4[1] = puVar4[1] & 0xfffff000 | uVar3 & 0xfff;
    *puVar4 = *puVar4 | 0x200000;
    puVar4[0x16] = (unsigned int)param_3;
  }
  if ((((uVar1 & 3) == 0) && (*param_3 != 0x7fff)) &&
     (uVar3 = (*param_3 >> 0xb & 0x7fff) + 0x20, uVar3 != 0)) {
    puVar4[2] = puVar4[2] & 0xfc000000 | uVar3;
  }
  return 0;
}

