extern int fn_82EE82A0();


unsigned __int64 fn_82EE8830(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *(unsigned int *)(param_1 + 0xa4) = param_2;
  uVar1 = 0;
  puVar3 = (unsigned int *)(-(unsigned int)(param_1 + 0x54U != *(unsigned int *)(param_1 + 0x54)) &
                   *(unsigned int *)(param_1 + 0x54));
  if (puVar3 != (unsigned int *)0x0) {
    do {
      puVar2 = puVar3 + -1;
      puVar3 = (unsigned int *)(-(unsigned int)(param_1 + 0x54U != *puVar3) & *puVar3);
      if ((puVar2 != (unsigned int *)0x0) &&
         (uVar1 = fn_82EE82A0(puVar2,*(unsigned int *)(param_1 + 0xa4)), (int)uVar1 < 0)) {
        return uVar1;
      }
    } while (puVar3 != (unsigned int *)0x0);
  }
  return uVar1;
}

