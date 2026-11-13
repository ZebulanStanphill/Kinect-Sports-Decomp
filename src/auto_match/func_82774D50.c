extern int fn_82773DF0();


int fn_82774D50(int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) &&
     (iVar2 = fn_82773DF0(param_1,param_2,(*param_2 >> 6 ^ *param_2) & *(unsigned int *)(iVar1 + 4)),
     iVar2 >= 0)) {
    return iVar2 * 0xc + iVar1 + 0x10;
  }
  return 0;
}

