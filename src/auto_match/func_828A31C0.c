extern int fn_82381BC0();
extern int fn_8289DAC8();
extern int fn_828B0218();
extern int fn_82A4AAA8();


void fn_828A31C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_30;
  
  fn_8289DAC8(param_2,0);
  fn_8289DAC8(param_3,1);
  aiStack_30 = **(int **)(param_1 + 0x230);
  if ((int *)aiStack_30 != *(int **)(param_1 + 0x230)) {
    do {
      iVar1 = *(int *)(aiStack_30 + 0x10);
      iVar2 = fn_82A4AAA8(iVar1);
      if (iVar2 != 2) {
        *(unsigned char *)(iVar1 + 0xb2) = 0;
      }
      fn_82381BC0(&aiStack_30);
    } while (aiStack_30 != *(int *)(param_1 + 0x230));
  }
  fn_828B0218(param_1 + 0x278,param_3);
  return;
}

