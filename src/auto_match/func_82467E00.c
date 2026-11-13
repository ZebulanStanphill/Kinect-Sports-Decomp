extern int fn_82468F58();
extern int fn_8265CA20();


void fn_82467E00(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar1 = param_1[1];
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x14) {
      uVar3 = (unsigned __int64)*(unsigned int *)(iVar4 + 4);
      if (uVar3 != 0) {
        uVar2 = *(unsigned int *)(iVar4 + 8);
        if (uVar3 != uVar2) {
          do {
            fn_82468F58(uVar3);
            uVar3 = uVar3 + 0x14;
          } while ((uVar3 & 0xffffffff) != (unsigned __int64)uVar2);
        }
        fn_8265CA20(*(unsigned int *)(iVar4 + 4));
      }
      *(unsigned int *)(iVar4 + 4) = 0;
      *(unsigned int *)(iVar4 + 8) = 0;
      *(unsigned int *)(iVar4 + 0xc) = 0;
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

