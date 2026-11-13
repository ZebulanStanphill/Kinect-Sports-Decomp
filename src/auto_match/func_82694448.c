extern int fn_82694138();


unsigned __int64 fn_82694448(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if ((*param_1 == 0) ||
     (iVar2 = fn_82694138(param_1,param_2,*(unsigned int *)(*param_1 + 4) & *(unsigned int *)(param_2 + 4)),
     iVar2 < 0)) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *(unsigned int *)(iVar2 * 8 + *param_1 + 0xc);
    }
    uVar1 = 1;
  }
  return uVar1;
}

