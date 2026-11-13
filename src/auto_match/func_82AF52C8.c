__int64 fn_82AF52C8(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar3 = 0;
  for (puVar1 = *(unsigned int **)(*param_1 + 0x20); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)puVar1[1]) {
    uVar4 = *(unsigned int *)*puVar1 >> 0xd & 0xffff;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
  }
  uVar4 = 0;
  for (puVar1 = *(unsigned int **)(*param_2 + 0x20); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)puVar1[1]) {
    uVar2 = *(unsigned int *)*puVar1 >> 0xd & 0xffff;
    if (uVar4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  if (uVar3 == uVar4) {
    return 0;
  }
  return (-(unsigned __int64)(uVar4 < uVar3) & 0xfffffffe) + 1;
}

