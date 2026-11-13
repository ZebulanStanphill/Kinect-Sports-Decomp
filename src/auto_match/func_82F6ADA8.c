extern int fn_82F63BA0();
extern int fn_82F68240();


__int64 fn_82F6ADA8(int param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  unsigned short uVar5;
  
  if ((param_1 == 0) || (param_2 == (unsigned short *)0x0)) {
    puVar4 = (unsigned int *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    lVar3 = 0x7fffffff;
  }
  else {
    param_1 = param_1 - (int)param_2;
    do {
      uVar1 = *(unsigned short *)(param_1 + (int)param_2);
      if ((uVar1 < 0x41) || (uVar5 = uVar1 + 0x20, 0x5a < uVar1)) {
        uVar5 = uVar1;
      }
      uVar1 = *param_2;
      uVar2 = (unsigned __int64)uVar5;
      if ((uVar1 < 0x41) || (uVar5 = uVar1 + 0x20, 0x5a < uVar1)) {
        uVar5 = uVar1;
      }
      param_2 = param_2 + 1;
    } while ((uVar2 != 0) && (uVar2 == uVar5));
    lVar3 = uVar2 - uVar5;
  }
  return lVar3;
}

