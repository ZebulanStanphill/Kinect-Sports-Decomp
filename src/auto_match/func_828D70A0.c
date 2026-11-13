#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack00000018 ((*(unsigned __int64*)&uStack00000018))
extern unsigned int *auStack_40;
extern int fn_828D5D10();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack0000001c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_828D70A0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uStack00000010;
  unsigned int uStack00000018;
  unsigned int uStack0000001c;
  unsigned int auStack_40 [2];
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar1 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uStack0000001c = (unsigned int)param_2;
  uVar3 = uStack0000001c;
  uStack00000010 = param_1;
  _uStack00000018 = param_2;
  while (1 < (int)(uVar3 - iVar1)) {
    uVar3 = uVar3 - 1;
    uVar2 = uVar3 >> 2;
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)_uStack00000018 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if (*(unsigned int *)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) + 8) <= uVar2) {
      uVar2 = uVar2 - *(unsigned int *)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_38 = CONCAT44((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF),uVar3);
    uStack_30 = CONCAT44((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF),uVar3);
    auStack_40[0] =
         *(unsigned int *)(*(int *)(*(int *)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) + 4) + uVar2 * 4) + (uVar3 & 3) * 4);
    fn_828D5D10(param_1,uStack_30,uStack_38,auStack_40,0);
    _uStack00000018 = CONCAT44(uStack00000018,uVar3);
  }
  return;
}

