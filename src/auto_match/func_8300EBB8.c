extern int fn_8300EAC8();


int fn_8300EBB8(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  unsigned int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0xc;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_8300EAC8(param_1,5), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 4) = 1;
      *(unsigned int *)(iVar2 + 8) = 0;
    }
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0xc;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

