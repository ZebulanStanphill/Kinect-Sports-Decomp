extern int fn_825A14E8();


unsigned __int64 fn_82573DA0(int param_1,unsigned int param_2)

{
  int iVar1;
  __int64 lVar2;
  
  *(unsigned int *)(param_1 + 0x8ac) = param_2;
  if (*(int *)(param_1 + 0x8a4) != 0) {
    *(int *)(param_1 + 0x8a4) = *(int *)(param_1 + 0x8a4) + -1;
    *(int *)(param_1 + 0x7d8) = *(int *)(param_1 + 0x7d8) + -1;
  }
  *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
  *(unsigned int *)(param_1 + 0x8ac) = 2;
  iVar1 = *(int *)(param_1 + 0xb10);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x8a0) != 0)) {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8a8) - 1;
    *(int *)(param_1 + 0x8a8) = (int)lVar2;
    if (lVar2 == 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
    }
    else {
      fn_825A14E8();
    }
  }
  return 1;
}

