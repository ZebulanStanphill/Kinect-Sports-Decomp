extern int fn_82739680();
extern int fn_827396D0();


void fn_8273B930(unsigned __int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  *(int *)((int)param_1 + 0x38) = (int)param_2 + (int)(param_2 / 86400000) * -86400000;
  uVar1 = (__int64)(int)((param_2 / 86400000) / 0x23ab1) * 400 + 0x7b2;
  uVar4 = (param_2 / 86400000) % 0x23ab1;
  *(int *)((int)param_1 + 0x3c) = (int)uVar1;
  uVar2 = uVar1;
  if (param_2 < 0) {
    while (uVar3 = fn_82739680(uVar1),
          (__int64)(int)(((unsigned int)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) <=
          (__int64)((uVar4 ^ (__int64)uVar4 >> 0x3f) - ((__int64)uVar4 >> 0x3f))) {
      uVar2 = uVar2 - 1;
      *(int *)((int)param_1 + 0x3c) = (int)uVar2;
      uVar3 = fn_82739680();
      uVar1 = uVar2 & 0xffffffff;
      uVar4 = (__int64)(int)(((unsigned int)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) + uVar4;
    }
  }
  else {
    while (uVar3 = fn_82739680(uVar1),
          (__int64)(int)(((unsigned int)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d) <= (__int64)uVar4) {
      uVar1 = (unsigned __int64)*(unsigned int *)((int)param_1 + 0x3c);
      uVar3 = fn_82739680(uVar1);
      *(int *)((int)param_1 + 0x3c) = (int)(uVar1 + 1);
      uVar1 = uVar1 + 1 & 0xffffffff;
      uVar4 = uVar4 - (__int64)(int)(((unsigned int)LZCOUNT(uVar3 & 0xff) >> 5 ^ 1) + 0x16d);
    }
  }
  *(__int64 *)((int)param_1 + 0x30) = param_2;
  *(int *)((int)param_1 + 0x40) = (int)uVar4;
  fn_827396D0(param_1);
  return;
}

