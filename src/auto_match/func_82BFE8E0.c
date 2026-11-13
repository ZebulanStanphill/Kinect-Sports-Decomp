extern unsigned int *auStack_20;
extern int fn_82BFC6A0();
extern int fn_82BFC7F0();


unsigned __int64 fn_82BFE8E0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x38) != 0x4c665374)) {
    return 0xffffffff80070057;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x44);
  uVar4 = 0;
  if ((puVar1 == (unsigned int *)0x0) || (uVar2 = *puVar1, (uVar2 & 8) == 0)) {
    auStack_20[0] = fn_82BFC6A0();
    if (auStack_20[0] == 0) {
      return 0xffffffff80310002;
    }
  }
  else {
    uVar3 = fn_82BFC7F0(param_1,auStack_20,puVar1[2],puVar1[6],uVar2 >> 5 & 1,puVar1[4],
                          uVar2 >> 7 & 1);
    if ((uVar3 & 0xffffffff) != 0) {
      if ((uVar3 & 0xffffffff) == 0x102) {
        return 0xffffffff80310002;
      }
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0xffff | 0x80070000;
      }
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        return uVar3;
      }
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = auStack_20[0];
  }
  return uVar4;
}

