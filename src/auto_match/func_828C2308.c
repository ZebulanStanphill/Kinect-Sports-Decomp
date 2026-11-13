extern int fn_8260D428();
extern int fn_828C2090();


int * fn_828C2308(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  
  iVar1 = fn_828C2090(param_2,param_3);
  if (iVar1 != *(int *)(param_2 + 4)) {
    puVar3 = (unsigned int *)(iVar1 + 0xc);
    if (0xf < *(unsigned int *)(iVar1 + 0x20)) {
      puVar3 = (unsigned int *)*puVar3;
    }
    iVar2 = fn_8260D428(param_3,0,*(unsigned int *)(param_3 + 0x10),puVar3,
                         *(unsigned int *)(iVar1 + 0x1c));
    if (-1 < iVar2) {
      *param_1 = iVar1;
      return param_1;
    }
  }
  *param_1 = *(int *)(param_2 + 4);
  return param_1;
}

