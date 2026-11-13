extern int fn_82F691F0();


void fn_826339C8(int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)param_1[0x1b];
  puVar3 = puVar4 + param_1[0x1c] * 2;
  for (; puVar4 < puVar3; puVar4 = puVar4 + 2) {
    if (((1 << (puVar4[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar4[1] & 0x800) == 0)) {
      uVar1 = *puVar4 & 0xfff;
      if ((uVar1 <= param_2) && (param_2 < (*puVar4 >> 0xc & 7) + uVar1)) goto LAB_82633a4c;
    }
  }
  puVar4 = (unsigned int *)0x0;
LAB_82633a4c:
  if (puVar4 != (unsigned int *)0x0) {
    uVar1 = *puVar4;
    uVar2 = 2 << ((param_2 - (uVar1 & 0xfff)) * 2 & 0x3e);
    if (param_3 == 0) {
      *puVar4 = ((~uVar2 & 0xfff) << 0x10 | 0xf000ffff) & uVar1;
    }
    else {
      *puVar4 = uVar1 & 0xf000ffff | (uVar2 << 0x10 | uVar1) & 0xfff0000;
    }
    if (((((~(unsigned __int64)*(unsigned int *)(*param_1 + 0x4db4) & 0xffffffff) >> 5 & 1) != 0) && (param_3 != 0)
        ) && (param_2 == param_1[0x19] - 1U)) {
      param_1[1] = 0;
      *(unsigned char *)(param_1 + 0x1f) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x20,0,0x20);
    }
  }
  return;
}

