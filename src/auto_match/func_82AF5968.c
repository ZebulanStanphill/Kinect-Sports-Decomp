extern unsigned int iStack00000010;


unsigned __int64 fn_82AF5968(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iStack00000010;
  
  iStack00000010 = (int)((unsigned __int64)param_1 >> 0x20);
  if ((((*(unsigned int *)(iStack00000010 + 8) >> 0x17 & 1) == 0) &&
      ((*(unsigned int *)(iStack00000010 + 8) & 0x1c000) == 0x4000)) && ((param_2 & 0x1e00000000) == 0)) {
    for (puVar1 = *(unsigned int **)(iStack00000010 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2])
    {
      uVar2 = puVar1[4];
      if (((uVar2 != 0) && ((*(unsigned int *)(uVar2 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar1 & 0xe000000) != 0)) goto LAB_82af59d8;
    }
    uVar2 = 0;
LAB_82af59d8:
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

