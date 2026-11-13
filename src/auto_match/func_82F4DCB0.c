extern unsigned int lbl_8326183C;


void fn_82F4DCB0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ((-(unsigned int)(param_2 < 2) & param_2) + 0x2d9) * 0x10;
  iVar4 = iVar5 + lbl_8326183C;
  uVar1 = *(unsigned int *)(iVar4 + 4);
  uVar2 = *(unsigned int *)(iVar4 + 8);
  uVar3 = *(unsigned int *)(iVar4 + 0xc);
  *param_1 = *(unsigned int *)(iVar5 + lbl_8326183C);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

