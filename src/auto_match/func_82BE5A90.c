typedef unsigned char bool;
extern int fn_82BE5240();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82BE5A90(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (*(int *)((int)param_1 + 0x18) == 0x4000) {
    lVar3 = param_1 + 0x44;
    do {
      puVar4 = (unsigned int *)lVar3;
      uVar1 = *puVar4;
      if (uVar1 != 1) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar3);
          *puVar4 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      *param_2 = *(unsigned int *)((int)param_1 + 0x1c);
      return 1;
    }
    fn_82BE5240(param_1,0x450,0xffffffff820e9344);
  }
  else {
    fn_82BE5240(param_1,0x450,0xffffffff820e9378);
  }
  return 0;
}

