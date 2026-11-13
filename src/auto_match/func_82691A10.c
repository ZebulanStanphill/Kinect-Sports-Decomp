extern int fn_826914F8();
extern int fn_8270BE60();
extern unsigned int lbl_831E7E60;


__int64 fn_82691A10(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar2 + 0x2c4);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 1;
  if ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar3 = param_3;
  }
  trapWord(6,param_4,0);
  lVar1 = (__int64)
          (int)((((((-(unsigned __int64)(0x1000 < uVar3) & uVar3) + uVar3 + param_2) - 1 & ~(uVar3 - 1)) +
                 param_4) - 1 & 0xffffffff) / (param_4 & 0xffffffff)) * (__int64)(int)param_4;
  lVar1 = fn_826914F8(param_1,10,lVar1,0x1000,
                        ((unsigned __int64)
                         (((1 << (*(unsigned int *)(param_1 + 0x14) & 0x3f)) + (int)lVar1) - 1U >>
                         (*(unsigned int *)(param_1 + 0x14) & 0x3f)) + 0xf & 0xffffffff) >> 2 & 0x3ffffffc,
                        param_5);
  if (lVar1 != 0) {
    fn_8270BE60(param_1 + 0x14,lVar1);
  }
  RtlLeaveCriticalSection(uVar2 + 0x2c4);
  return lVar1;
}

