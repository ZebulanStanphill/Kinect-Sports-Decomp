typedef unsigned char bool;
extern int fn_82BE5240();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_82BF5E80(__int64 param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x18) == 0x4000) {
    lVar4 = param_1 + 0x50;
    do {
      puVar5 = (unsigned int *)lVar4;
      uVar1 = *puVar5;
      if (uVar1 != 1) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar4);
          *puVar5 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      *param_2 = *(unsigned int *)(iVar3 + 0x54);
      *param_3 = *(unsigned int *)(iVar3 + 0x58);
      *param_4 = *(unsigned int *)(iVar3 + 0x68);
      *param_5 = *(unsigned int *)(iVar3 + 0x60);
      return 1;
    }
    fn_82BE5240(param_1,0x450,0xffffffff820ebacc,param_4,param_5,in_MSR);
  }
  else {
    fn_82BE5240(param_1,0x450,0xffffffff820e9378,*(int *)(iVar3 + 0x18));
  }
  return 0;
}

