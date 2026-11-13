extern int fn_82C3C340();


unsigned __int64 fn_82E38C18(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  if ((param_3 & 0xffffffff) == 0x80) {
    uVar2 = 1;
  }
  else {
    iVar3 = fn_82C3C340(param_1,param_3,param_5,param_6);
    uVar1 = (__int64)iVar3 * (__int64)param_4 & 0xffffffff;
    uVar5 = param_1 & 0xffffffff;
    uVar4 = ((param_3 & 0xffffffff) * uVar1 + uVar5) - 1;
    trapDoubleWordImmediate(6,uVar5,0);
    uVar2 = (((__int64)uVar4 / (__int64)uVar5 & 0xffffffffU) + 7 & 0xffffffff) >> 3;
    trapDoubleWordImmediate(5,uVar5 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
    if (((((param_5 & 0xffffffff) == 2) && ((param_1 & 0xffffffff) == 0xac44)) && (param_2 == 2)) &&
       ((param_3 & 0xffffffff) == 32000)) {
      uVar5 = uVar2 * 8;
      trapDoubleWordImmediate(6,uVar1,0);
      uVar4 = (uVar2 * 0x56220 + uVar1) - 1;
      trapDoubleWordImmediate(5,uVar1 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
      while (31999 < (((__int64)uVar4 / (__int64)uVar1 & 0xffffffffU) + 7 & 0xfffffff8)) {
        uVar5 = uVar5 - 8;
        uVar2 = uVar2 - 1;
        trapDoubleWordImmediate(6,uVar1,0);
        uVar4 = ((uVar5 & 0xffffffff) * 0xac44 + uVar1) - 1;
        trapDoubleWordImmediate(5,uVar1 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
      }
    }
    uVar2 = uVar2 & 0xffff;
  }
  return uVar2;
}

