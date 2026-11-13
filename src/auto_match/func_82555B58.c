void fn_82555B58(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar1 = 0;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar3 = iVar2 + *param_1;
      iVar2 = iVar2 + 0x1a0;
      *(unsigned int *)(iVar3 + 0x24) =
           *(unsigned int *)(iVar3 + 0x24) & 0xfbffffff | (unsigned int)((param_2 & 0xffffffff) << 0x1a) & 0x4000000
      ;
      iVar3 = param_1[1];
    } while (iVar1 < iVar3);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      if ((((unsigned int *)(iVar3 + *param_1))[9] & 0x40000000) != 0) {
        fn_82555B58((unsigned __int64)*(unsigned int *)(iVar3 + *param_1) + 0x98,param_2);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1a0;
    } while (iVar1 < param_1[1]);
  }
  return;
}

