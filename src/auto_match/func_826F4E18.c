extern int fn_826D69D0();
extern int fn_826F4470();
extern int memcpy();


unsigned int * fn_826F4E18(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  iVar1 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x20);
    uVar5 = iVar1 * 4;
    puVar4 = (unsigned int *)(iVar2 + 8);
    if (*(unsigned int *)(iVar2 + 0xc) < uVar5) {
      uVar3 = fn_826D69D0(puVar4);
    }
    else {
      uVar3 = (unsigned __int64)*puVar4;
      *(unsigned int *)(iVar2 + 0xc) = *(unsigned int *)(iVar2 + 0xc) + iVar1 * -4;
      *puVar4 = *puVar4 + uVar5;
    }
    *param_1 = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      memcpy(uVar3,*param_3,uVar5);
      param_1[1] = param_3[1];
    }
    fn_826F4470(param_3,0);
  }
  return param_1;
}

