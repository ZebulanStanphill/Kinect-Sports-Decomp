extern int fn_82815268();
extern int fn_82820A80();
extern int (*lbl_8320A5D0)();


unsigned __int64 fn_82820BC0(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x8000;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar3 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
    return uVar3;
  }
  uVar1 = *(unsigned int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x1c);
  *(unsigned int *)(param_2 + 0x10) = uVar1 | 0x10000;
  if (*(char *)(iVar2 + 0x3a) != '\0') {
    if (*(unsigned int *)(iVar2 + 0x28) < *(unsigned int *)(iVar2 + 0x24)) {
      if ((uVar1 & 2) == 0) {
        if (lbl_8320A5D0 != (int (**)())0x0) {
          uVar3 = (*lbl_8320A5D0)(*(unsigned int *)(param_2 + 0x18),
                                  (*(unsigned int *)(iVar2 + 0x24) - *(unsigned int *)(iVar2 + 0x28)) + iVar2 + 0x7b
                                 );
          goto LAB_82820ca4;
        }
      }
      else if (*(int (***)())(param_1 + 0xc) != (int (**)())0x0) {
        (**(int (***)())(param_1 + 0xc))(*(unsigned int *)(param_2 + 0x18));
        return 0;
      }
    }
  }
  uVar3 = 0;
LAB_82820ca4:
  uVar3 = fn_82820A80(param_1,param_2,uVar3);
  return uVar3;
}

