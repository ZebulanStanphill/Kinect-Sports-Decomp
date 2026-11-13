extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D4A320(int param_1,unsigned int *param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x18) == (*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(param_1 + 0x14),1);
  }
  *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) = (char)param_3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (0 < (int)param_3) {
    do {
      uVar1 = *param_2;
      iVar2 = fn_82CE5410();
      if (*(unsigned int *)(param_1 + 0xc) == (*(unsigned int *)(param_1 + 0x10) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),(int *)(param_1 + 8),2);
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      *(short *)(*(int *)(param_1 + 0xc) * 2 + *(int *)(param_1 + 8)) = (short)uVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    } while (param_3 != 0);
  }
  return;
}

