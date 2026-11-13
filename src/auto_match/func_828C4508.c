#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack00000028 ((*(unsigned __int64*)&iStack00000028))
extern unsigned int iStack00000020;
extern unsigned int iStack00000028;
extern unsigned int uStack0000002c;


void fn_828C4508(unsigned __int64 *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iStack00000020;
  int iStack00000028;
  unsigned int uStack0000002c;
  
  uVar7 = param_3 & 0xffffffff;
  if (param_2 != uVar7) {
    lVar4 = uVar7 - param_2;
    iStack00000020 = (int)(param_3 >> 0x20);
    iStack00000028 = (int)((unsigned __int64)param_4 >> 0x20);
    iVar2 = iStack00000028;
    uStack0000002c = (unsigned int)param_4;
    uVar3 = uStack0000002c;
    _iStack00000028 = param_4;
    do {
      uVar7 = uVar7 - 1;
      uVar5 = (uVar7 & 0xffffffff) >> 2;
      if (*(unsigned int *)(iStack00000020 + 8) <= uVar5) {
        uVar5 = uVar5 - *(unsigned int *)(iStack00000020 + 8);
      }
      uVar3 = uVar3 - 1;
      uVar1 = *(unsigned int *)(iVar2 + 8);
      uVar6 = uVar3 >> 2;
      _iStack00000028 = CONCAT44(iStack00000028,uVar3);
      if (uVar1 <= uVar6) {
        uVar6 = uVar6 - uVar1;
      }
      *(unsigned int *)(*(int *)(uVar6 * 4 + *(int *)(iVar2 + 4)) + (uVar3 & 3) * 4) =
           *(unsigned int *)
            (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iStack00000020 + 4)) +
            (int)((uVar7 & 3) << 2));
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *param_1 = _iStack00000028;
    return;
  }
  *param_1 = param_4;
  return;
}

