unsigned __int64 fn_82D4BB40(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  if (((*(char *)(*(int *)(param_1 + 0x14) + 0x2c) != '\x01') &&
      (iVar1 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x18))
                         (*(int **)(param_1 + 0x34),param_2,0x100), -1 < iVar1)) && (iVar1 < 0x101))
  {
    *(int *)(param_1 + 0x38) = iVar1;
    return 0x40;
  }
  return 0xffffffffffffffff;
}

