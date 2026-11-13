#define _iStack00000010 ((*(unsigned __int64*)&iStack00000010))
#define _iStack00000018 ((*(unsigned __int64*)&iStack00000018))
extern int fn_828D4E48();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;


void fn_828D5DC0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iStack00000010;
  int iStack00000018;
  
  uVar7 = param_1 & 0xffffffff;
  uVar6 = param_2 & 0xffffffff;
  if (uVar7 != uVar6) {
    iStack00000018 = (int)(param_2 >> 0x20);
    iVar2 = iStack00000018;
    iStack00000010 = (int)(param_1 >> 0x20);
    iVar1 = iStack00000010;
    _iStack00000010 = param_1;
    _iStack00000018 = param_2;
    do {
      uVar6 = uVar6 - 1;
      if ((uVar7 & 0xffffffff) == (uVar6 & 0xffffffff)) {
        return;
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 8);
      uVar3 = uVar6;
      if (uVar5 <= (uVar6 & 0xffffffff)) {
        uVar3 = uVar6 - uVar5;
      }
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
      uVar5 = uVar7;
      if (uVar4 <= (uVar7 & 0xffffffff)) {
        uVar5 = uVar7 - uVar4;
      }
      fn_828D4E48(*(unsigned int *)(*(int *)(iVar1 + 4) + (int)((uVar5 & 0xffffffff) << 2)),
                    *(unsigned int *)(*(int *)(iVar2 + 4) + (int)((uVar3 & 0xffffffff) << 2)));
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) != (uVar6 & 0xffffffff));
  }
  return;
}

