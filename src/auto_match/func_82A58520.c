extern int fn_82A751F8();


unsigned __int64 fn_82A58520(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  if ((param_3 & 0xffffffff) == 0x80) {
    uVar3 = 1;
  }
  else {
    iVar4 = fn_82A751F8(param_1,param_3,param_5,param_6);
    uVar2 = (__int64)iVar4 * (__int64)param_4 & 0xffffffff;
    uVar3 = (((__int64)((param_3 & 0xffffffff) * uVar2 + (param_1 & 0xffffffff) + -1) /
              (__int64)(param_1 & 0xffffffff) & 0xffffffffU) + 7 & 0xffffffff) >> 3;
    if (((((param_5 & 0xffffffff) == 2) && ((param_1 & 0xffffffff) == 0xac44)) && (param_2 == 2)) &&
       ((param_3 & 0xffffffff) == 32000)) {
      uVar5 = uVar3 * 8;
      lVar1 = uVar3 * 0x56220;
      while (31999 < (((__int64)(lVar1 + uVar2 + -1) / (__int64)uVar2 & 0xffffffffU) + 7 &
                     0xfffffff8)) {
        uVar5 = uVar5 - 8;
        uVar3 = uVar3 - 1;
        lVar1 = (uVar5 & 0xffffffff) * 0xac44;
      }
    }
    uVar3 = uVar3 & 0xffff;
  }
  return uVar3;
}

