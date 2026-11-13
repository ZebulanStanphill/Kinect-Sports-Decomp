typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82E65FD0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  
  lVar5 = param_1 + 0x24;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar4 = fn_82A1E6A0(0,1,0,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = thunk_FUN_82a2b798();
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      return uVar4 & 0xffff | 0x80070000;
    }
    bVar3 = false;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar5);
          *puVar6 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar4,0,lVar5);
        *puVar6 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    if (uVar1 != 0) {
      fn_82A1E658();
    }
  }
  return 0;
}

