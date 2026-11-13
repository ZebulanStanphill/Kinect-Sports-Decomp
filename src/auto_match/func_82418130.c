extern int fn_82417F58();


unsigned int fn_82418130(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  if ((*(int *)(*(int *)param_1 + 0xc78) == 0) ||
     ((iVar1 = fn_82417F58(param_1), iVar1 != 0 && (*(int *)(iVar1 + 0x24) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)
             (*(int *)((int)param_1 + 0x18) * 0x1ac + *(int *)((int)param_1 + 8) + 0x14);
  }
  return uVar2;
}

