extern int fn_828C4710();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;


void fn_828C4B90(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar1 = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  lVar3 = (param_3 & 0xffffffff) - (param_1 & 0xffffffff);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  if ((int)lVar3 < 0x29) {
    fn_828C4710(param_1,param_2,param_3);
  }
  else {
    uVar4 = lVar3 + 1;
    iVar2 = (int)uVar4;
    uVar6 = (iVar2 >> 3) + (unsigned int)(iVar2 < 0 && (uVar4 & 7) != 0);
    iVar5 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF) + uVar6;
    iVar2 = uVar6 * 2 + (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    fn_828C4710(param_1,iVar5,iVar2);
    fn_828C4710((((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF) - uVar6,param_2,(((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF) + uVar6,param_4);
    iVar2 = iVar1 - uVar6;
    fn_828C4710(iVar1 + (uVar6 & 0x7fffffff) * -2,iVar2,param_3,param_4);
    fn_828C4710(iVar5,param_2,iVar2,param_4);
  }
  return;
}

