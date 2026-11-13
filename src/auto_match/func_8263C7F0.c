extern int fn_8263BFD0();
extern int fn_8265C940();
extern int fn_8265C990();
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


unsigned int fn_8263C7F0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_60;
  int iStack_5c;
  
  lVar4 = 0;
  uVar1 = fn_8265C940(0x34,0x64800000);
  if (uVar1 != 0) {
    fn_8263BFD0(param_8,param_1,param_2,param_3,param_4,param_5,param_6,2);
    uVar5 = ((~param_5 & 0xffffffff) >> 2 & 1 | 2) << 0x1c | 0x8c800000;
    uVar2 = fn_8265C940(uStack_60,uVar5);
    if (uVar2 == 0) {
      uVar3 = 0x24800000;
      uVar2 = uVar1;
    }
    else {
      if ((iStack_5c == 0) || (lVar4 = fn_8265C940(iStack_5c,uVar5), lVar4 != 0)) {
        *(unsigned int *)(uVar1 + 0x20) = uVar2 & 0xfffff000 | *(unsigned int *)(uVar1 + 0x20) & 0xfff;
        *(unsigned int *)(uVar1 + 0x30) = *(unsigned int *)(uVar1 + 0x30) & 0xfff | (unsigned int)lVar4 & 0xfffff000;
        return uVar1;
      }
      fn_8265C990(uVar1,0x24800000);
      uVar3 = 0xffffffffb1800000;
    }
    fn_8265C990(uVar2,uVar3);
  }
  return 0;
}

