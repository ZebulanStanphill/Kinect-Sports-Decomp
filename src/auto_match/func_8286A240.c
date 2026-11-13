extern int fn_8260D428();


int fn_8286A240(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar5 = (param_2 - param_1) / 0x1c;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
    iVar4 = uVar5 * 0x1c + param_1;
    puVar3 = param_3;
    if (0xf < (unsigned int)param_3[5]) {
      puVar3 = (unsigned int *)*param_3;
    }
    iVar2 = fn_8260D428(iVar4,0,*(unsigned int *)(iVar4 + 0x10),puVar3,param_3[4]);
    if (iVar2 < 0) {
      param_1 = iVar4 + 0x1c;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  return param_1;
}

