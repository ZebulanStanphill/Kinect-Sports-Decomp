extern int fn_83016D98();


int fn_83019328(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  unsigned int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0x14;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_83016D98(param_1,1), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 8) = 0;
      *(unsigned int *)(iVar2 + 0xc) = 0;
      *(unsigned int *)(iVar2 + 0x10) = 0;
    }
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0x14;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

