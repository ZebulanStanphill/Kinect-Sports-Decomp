extern int fn_8301A4F8();


int fn_8301B248(int *param_1)

{
  unsigned int uVar1;
  unsigned char cVar3;
  int iVar2;
  
  uVar1 = (param_1[1] - *param_1) / 0xc;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar3 = fn_8301A4F8(param_1,5), cVar3 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    iVar2 = param_1[1];
    param_1[1] = iVar2 + 0xc;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

