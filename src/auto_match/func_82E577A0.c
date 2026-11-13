extern int fn_82EE5E28();
extern int fn_82EE5F60();


unsigned __int64 fn_82E577A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short *puVar1;
  unsigned __int64 uVar2;
  unsigned short *puVar3;
  __int64 lVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (param_3 & 0x7fffffff) << 1;
    uVar2 = fn_82EE5F60(param_2,param_1,lVar4);
    if (-1 < (int)uVar2) {
      if ((param_3 & 0xffffffff) != 0) {
        puVar3 = (unsigned short *)(param_1 + -2);
        do {
          puVar1 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar1 << 8 | *puVar1 >> 8;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      uVar2 = fn_82EE5E28(param_2,lVar4);
    }
  }
  return uVar2;
}

