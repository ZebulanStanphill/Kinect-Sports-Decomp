typedef unsigned char bool;
#define true 1
extern int fn_82A1E2C0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8267D4E0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  
  bVar3 = (*(unsigned int *)((int)param_1 + 0x18) & 1) == 0;
  if (!bVar3) {
    do {
      puVar5 = (unsigned int *)(param_1 + 0x1c);
      uVar1 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1 - 1,0,param_1 + 0x1c);
        *puVar5 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    sync(1);
    if ((0 < (int)uVar1) &&
       ((uVar1 != 1 ||
        (iVar4 = fn_82A1E2C0(*(unsigned int *)((int)param_1 + 0x2c)), iVar4 != -1)))) {
      return 1;
    }
  }
  return 0;
}

