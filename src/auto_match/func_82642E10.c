typedef unsigned char bool;
extern int fn_82642048();
extern unsigned int lbl_832978A4;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82642E10(int param_1,int param_2,int param_3,int param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar3 = param_4 * 0x1a0 + param_2;
  if ((*(int *)(iVar3 + 0x28) != *(int *)(param_3 + 0x30)) ||
     (((*(unsigned __int64 *)(iVar3 + 0x30) ^ *(unsigned __int64 *)(param_1 + 0x31a0)) &
      *(unsigned __int64 *)(param_3 + 0x20)) != 0 ||
      ((*(unsigned __int64 *)(iVar3 + 0x38) ^ *(unsigned __int64 *)(param_1 + 0x31a8)) &
      *(unsigned __int64 *)(param_3 + 0x28)) != 0)) {
    if ((*(int *)(iVar3 + 0x40) != 0) &&
       ((unsigned int)(*(int *)(param_1 + 0x2a9c) - *(int *)(iVar3 + 0x40)) <
        (unsigned int)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90)))) {
      return 0;
    }
    fn_82642048(param_2,(unsigned __int64)
                          *(unsigned int *)(*(int *)((param_4 + 0x70) * 8 + param_2) + param_2 + 0x368) +
                          (unsigned __int64)*(unsigned int *)(param_2 + 0x20),param_3,
                  (unsigned __int64 *)(param_1 + 0x31a0));
    if (*(int *)(param_3 + 0x30) == 0) {
      do {
        uVar1 = (unsigned __int64)lbl_832978A4;
        lVar2 = uVar1 + 1;
        if (in_RESERVE != '\0') {
          lbl_832978A4 = storeWordConditionalIndexed(lVar2,0,0xffffffff832978a4);
          in_cr0 = 2;
        }
      } while ((!(bool)(in_cr0 >> 1 & 1)) || ((uVar1 + 2 & 0xffffffff) < 2));
      *(int *)(param_3 + 0x30) = (int)lVar2;
    }
    *(unsigned int *)(iVar3 + 0x28) = *(unsigned int *)(param_3 + 0x30);
    *(unsigned __int64 *)(iVar3 + 0x30) = *(unsigned __int64 *)(param_1 + 0x31a0);
    *(unsigned __int64 *)(iVar3 + 0x38) = *(unsigned __int64 *)(param_1 + 0x31a8);
  }
  *(unsigned __int64 *)(param_1 + 0x2ee8) = *(unsigned __int64 *)(param_1 + 0x31a0);
  *(unsigned __int64 *)(param_1 + 0x2ef0) = *(unsigned __int64 *)(param_1 + 0x31a8);
  return 1;
}

