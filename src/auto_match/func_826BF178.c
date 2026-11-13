extern int fn_826BE388();


int fn_826BF178(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_826BE388(param_1,param_2,*(unsigned int *)(*param_2 + 0xc) & *(unsigned int *)(iVar2 + 4)),
     iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0x30 + iVar2 + 0x10;
  }
  return iVar2;
}

