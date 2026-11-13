extern unsigned int *auStack_40;
extern int fn_82A1DDC0();
extern int fn_82A453D0();


__int64 fn_82A47A60(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int auStack_40 [4];
  
  uVar2 = 0;
  auStack_40[0] = 0;
  lVar1 = fn_82A453D0(*(unsigned int *)(param_1 + 0x1d8),0,param_2,auStack_40);
  lVar3 = lVar1;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1e4) < (lVar1 + param_3 & 0xffffffffU)) {
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e4) - param_3;
    uVar2 = lVar1 - lVar3;
  }
  fn_82A1DDC0(((__int64)*(int *)(param_1 + 0x40) * (__int64)(int)param_3 & 0x7fffffffU) * 2
                    + (unsigned __int64)*(unsigned int *)(param_1 + 0x1e0),auStack_40[0],
                    ((__int64)*(int *)(param_1 + 0x40) * (__int64)(int)lVar3 & 0x7fffffffU) << 1);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82A1DDC0(*(unsigned int *)(param_1 + 0x1e0),
                      ((__int64)*(int *)(param_1 + 0x40) * (__int64)(int)lVar3 & 0x7fffffffU) * 2
                      + (unsigned __int64)auStack_40[0],
                      ((__int64)*(int *)(param_1 + 0x40) * (__int64)(int)uVar2 & 0x7fffffffU) << 1
                     );
  }
  return lVar1;
}

