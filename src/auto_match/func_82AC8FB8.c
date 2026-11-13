extern int fn_82AA66A8();
extern int fn_82ABE190();
extern int fn_82AC8750();
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82AC8ED0();
extern int fn_82AC8F30();


void fn_82AC8FB8(int param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  
  cVar3 = fn_82AC8B10();
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(unsigned int *)(param_1 + 0x2c),0x12c0);
  }
  fn_82AC8CE8(param_1,param_2);
  if (*(int *)(param_1 + 0x34) != 0) {
    if ((param_2[2] & 0x3f80U) != 0x3c00) {
      for (iVar1 = param_2[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 0x10) != 0) {
          cVar3 = fn_82ABE190(iVar1);
          if (cVar3 != '\0') {
            uVar2 = fn_82AC8750(iVar1);
            fn_82AC8F30(*(unsigned int *)(param_1 + 0x34),uVar2);
          }
        }
      }
    }
    for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      cVar3 = fn_82ABE190(iVar1);
      if ((cVar3 != '\0') && ((*(unsigned int *)(*(int *)(iVar1 + 0xc) + 8) & 0x3f80) != 0x3c00)) {
        uVar2 = fn_82AC8750(iVar1);
        fn_82AC8ED0(*(unsigned int *)(param_1 + 0x34),uVar2);
      }
    }
  }
  return;
}

