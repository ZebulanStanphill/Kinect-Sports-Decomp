#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack00000028 ((*(unsigned __int64*)&iStack00000028))
extern unsigned int iStack00000018;
extern unsigned int iStack00000028;


void fn_828D5268(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iStack00000018;
  int iStack00000028;
  
  uVar4 = param_2 & 0xffffffff;
  if (uVar4 == param_3) {
    *param_1 = param_4;
  }
  else {
    iStack00000018 = (int)(param_2 >> 0x20);
    iStack00000028 = (int)(param_4 >> 0x20);
    iVar3 = iStack00000028;
    uVar9 = param_4 & 0xffffffff;
    _iStack00000028 = param_4;
    do {
      uVar6 = uVar4;
      if ((unsigned __int64)*(unsigned int *)(iStack00000018 + 8) <= (uVar4 & 0xffffffff)) {
        uVar6 = uVar4 - *(unsigned int *)(iStack00000018 + 8);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar3 + 8);
      uVar7 = uVar9;
      if (uVar5 <= (uVar9 & 0xffffffff)) {
        uVar7 = uVar9 - uVar5;
      }
      iVar8 = 0;
      iVar1 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iStack00000018 + 4));
      iVar2 = *(int *)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(iVar3 + 4));
      lVar10 = 0x2a;
      *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar1 + 4);
      do {
        *(unsigned char *)(iVar2 + 8 + iVar8) = *(unsigned char *)(iVar1 + 8 + iVar8);
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar4 = uVar4 + 1;
      uVar9 = uVar9 + 1;
      _iStack00000028 = CONCAT44(iStack00000028,(int)uVar9);
    } while ((uVar4 & 0xffffffff) != (unsigned __int64)param_3);
    *param_1 = _iStack00000028;
  }
  return;
}

