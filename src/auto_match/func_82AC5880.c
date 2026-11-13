extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_82AC5880(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 0x8058);
  *puVar3 = 0;
  *(unsigned int *)(param_1 + 0x805c) = 0;
  *(unsigned int *)(param_1 + 0x8060) = 0;
  *(unsigned int *)(param_1 + 0x8064) = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x34) >> 0x18 & 7;
    *(unsigned int *)(param_1 + 0x8060) = 1;
    if (uVar1 == 2) {
      *(unsigned int *)(param_1 + 0x8064) = 1;
    }
    else if (uVar1 != 0) {
      return 0xffffffff80004005;
    }
    if (0x10 < (*(unsigned int *)(param_1 + 0x1c) & 0x1f)) {
      return 0xffffffff80004005;
    }
    *puVar3 = (*(unsigned int *)(param_1 + 0x34) >> 0x14 & 0xf) + 1;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x34) >> 0x1c & 7;
    if (4 < uVar1) {
      return 0xffffffff80004005;
    }
    *puVar3 = uVar1;
    *(unsigned int *)(param_1 + 0x805c) = *(unsigned int *)(param_1 + 0x34) >> 0x1b & 1;
  }
  puVar2 = (unsigned int *)fn_8265C940(0x10000c,0x24870000);
  if (puVar2 == (unsigned int *)0x0) {
    return 0xffffffff80004005;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2 + 3,0,0x100000);
}

