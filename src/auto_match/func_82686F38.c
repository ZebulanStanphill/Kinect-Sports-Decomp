extern int fn_82686400();


int fn_82686F38(int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) &&
     (iVar2 = fn_82686400(param_1,param_2,(*param_2 >> 6 ^ *param_2) & *(unsigned int *)(iVar1 + 4)),
     iVar2 >= 0)) {
    return iVar2 * 8 + iVar1 + 0xc;
  }
  return 0;
}

