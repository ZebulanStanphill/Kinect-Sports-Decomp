extern int fn_82F63BA0();
extern int fn_82F68240();


__int64 fn_82F70368(int param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned short uVar3;
  __int64 lVar4;
  unsigned short uVar5;
  
  lVar4 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    if ((param_1 == 0) || (param_2 == (unsigned short *)0x0)) {
      puVar2 = (unsigned int *)fn_82F68240();
      *puVar2 = 0x16;
      fn_82F63BA0();
      lVar4 = 0x7fffffff;
    }
    else {
      param_1 = param_1 - (int)param_2;
      do {
        uVar5 = *(unsigned short *)(param_1 + (int)param_2);
        if ((uVar5 < 0x41) || (uVar3 = uVar5 + 0x20, 0x5a < uVar5)) {
          uVar3 = uVar5;
        }
        uVar5 = *param_2;
        uVar1 = (unsigned __int64)uVar3;
        if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
          uVar5 = uVar5 + 0x20;
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (((param_3 != 0) && (uVar1 != 0)) && (uVar1 == uVar5));
      lVar4 = uVar1 - uVar5;
    }
  }
  return lVar4;
}

