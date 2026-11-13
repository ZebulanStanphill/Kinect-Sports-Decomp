extern int fn_82C2A938();


unsigned __int64 fn_82C2AE18(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x44) == 0) {
    uVar2 = (*(int (**)())**(unsigned int **)(iVar1 + 0x34))(*(unsigned int **)(iVar1 + 0x34),param_2);
    if (-1 < (int)uVar2) {
      *(unsigned __int64 *)(iVar1 + 0x20) = param_2;
      *(unsigned __int64 *)(iVar1 + 0x28) = param_2;
      *(unsigned __int64 *)(iVar1 + 0x38) = 0;
      *(unsigned int *)(iVar1 + 0x40) = 0;
      *(unsigned int *)(iVar1 + 0x44) = 0;
      *(unsigned __int64 *)(iVar1 + 0x48) = 0;
      if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x18) != 0)) {
        fn_82C2A938(param_1);
      }
    }
  }
  else {
    *(unsigned __int64 *)(iVar1 + 0x38) = param_2;
    *(unsigned int *)(iVar1 + 0x40) = 1;
  }
  return uVar2;
}

