void fn_825EA908(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [72];
  unsigned int uStack_18;

  if ((*(int *)(param_2 + 0x80) == 0) || (*(int *)(param_2 + 0x80) == *(int *)(param_3 + 0xc) + 1))
  {
    puVar2 = &uStack_68;
    puVar1 = (unsigned __int64 *)(param_3 + -8);
    lVar3 = 10;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uStack_18 = *(unsigned int *)(param_2 + 0x88);
    FUN_82622f28(param_1,param_2,auStack_60);
  }
  return;
}
