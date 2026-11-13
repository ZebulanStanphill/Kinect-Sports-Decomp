extern int fn_82A374A0();


__int64 fn_82A37560(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,
                      int param_5)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar2 = 0;
  puVar3 = param_1 + 1;
  do {
    puVar3[2] = param_3;
    *puVar3 = 0;
    lVar1 = NtCreateEvent(puVar3 + 9,0,1,0);
    if (lVar1 < 0) {
      fn_82A374A0(param_1);
      return lVar1;
    }
    uVar2 = uVar2 + 1;
    param_3 = param_3 + param_5;
    puVar3 = puVar3 + 10;
  } while (uVar2 < 2);
  *param_1 = param_2;
  param_1[0x15] = 0;
  return 0;
}

